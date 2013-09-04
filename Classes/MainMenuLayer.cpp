

#include "MainMenuLayer.hpp"

#include <string>


#include "GameConstants.h"
#include "BoulderUILayer.h"

using boulderas::MainMenuLayer;

MainMenuLayer::~MainMenuLayer() {
	CCLOG("MainMenuLayer Entering Destructor");
}

MainMenuLayer::MainMenuLayer() {
	CCLOG("MainMenuLayer Entering Constructor");
}

// static
MainMenuLayer * MainMenuLayer::createWithUILayer(boulderas::BoulderUILayer * const & uiLayer) {

	MainMenuLayer * actionLayer = new MainMenuLayer;

	if (actionLayer && actionLayer->initWithUILayer(uiLayer)) {
		CCLOG("MainMenuLayer entering createWithUILayer");
		actionLayer->autorelease();
		return actionLayer;
	}

	CC_SAFE_DELETE(actionLayer);
	CCLOG("Error :: Coult not initialize MainMenuLayer");
	return NULL;

}

bool MainMenuLayer::initWithUILayer(boulderas::BoulderUILayer *const &uiLayer) {

	bool superInit;
	if ((superInit = BoulderActionLayer::init())) {
		CCLOG("MainMenuLayer initWithUILayer");
		// Setter takes care of retain
		

		this->addMenuItemsToLayer();

	}
	return superInit;

}


void MainMenuLayer::addMenuItemsToLayer() {

	cocos2d::CCSize visibleSize = cocos2d::CCDirector::sharedDirector()->getVisibleSize();
	cocos2d::CCPoint origin = cocos2d::CCDirector::sharedDirector()->getVisibleOrigin();

	/////////////////////////////
	// 2. add a menu item with "X" image, which is clicked to quit the program
	//    you may modify it.

	// add a "close" icon to exit the progress. it's an autorelease object
	cocos2d::CCMenuItemImage *pPlayItem = cocos2d::CCMenuItemImage::create(
		"Play_Speed_Button.png",
		"Play_Speed_Button_Selected.png",
		this,
		(cocos2d::SEL_MenuHandler) (&MainMenuLayer::playButtonCallback));

	pPlayItem->setPosition( ccp (visibleSize.width/2, visibleSize.height/2 ));

	// create menu, it's an autorelease object
	cocos2d::CCMenu* pMenu = cocos2d::CCMenu::create(pPlayItem, NULL);
	pMenu->setPosition(cocos2d::CCPointZero);
	this->addChild(pMenu, 1);

}

void MainMenuLayer::playButtonCallback( CCObject* pSender ) {

	CCLOG("Play Button Pressed");

}