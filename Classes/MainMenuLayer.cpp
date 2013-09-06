

#include "MainMenuLayer.hpp"

#include <string>


#include "GameConstants.h"
#include "BoulderUILayer.h"

using boulderas::MainMenuLayer;

MainMenuLayer::~MainMenuLayer() {
	CCLOG("MainMenuLayer Entering Destructor");

	m_mainCar->release();
	m_mainMenu->release();
	//m_welcomeMenu->release();
	//m_socialSignsMenu->release();
	//m_difficultyMenu->release();

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
		

		this->loadAllMenus();

	}
	return superInit;

} // end initWithUILayer


void MainMenuLayer::loadAllMenus() {

	// Main Menu

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


	

	// create menu, it's an autorelease object
	m_mainMenu = cocos2d::CCMenu::create(pPlayItem, NULL);
	m_mainMenu->setPosition(  ( ccp (-visibleSize.width, visibleSize.height * 0.40f ) ) );
	m_mainMenu->retain();
	this->addChild( m_mainMenu, 10);

	// Car
	m_mainCar = cocos2d::CCSprite::create( "ferrari_car_red.png" );
	m_mainCar->setPosition( ccp( -visibleSize.width, visibleSize.height * 0.85) );
	m_mainCar->retain();
	this->addChild( m_mainCar, 100);



// 	cocos2d::CCRotateTo * rotTo = cocos2d::CCRotateTo::create( 10.0f, 20, 20);
	//cocos2d::CCMoveTo * carMovTo = cocos2d::CCMoveTo::create( 5.0f, ccp(visibleSize.width/2, visibleSize.height * 0.85f ) );
	cocos2d::CCMoveTo * mainMenuMovTo = cocos2d::CCMoveTo::create( 6.5f, ccp( visibleSize.width/2, visibleSize.height * 0.40f) );
	cocos2d::CCActionInterval * interval = cocos2d::CCActionInterval::create( 6.5f );
	cocos2d::CCEaseExponentialIn * easeIn = cocos2d::CCEaseExponentialIn::create( interval );


// 	cocos2d::CCSequence * seq = cocos2d::CCSequence::create( rotTo, movTo, NULL);
	
	m_mainCar->runAction( easeIn );
	m_mainMenu->runAction( mainMenuMovTo );

}



void MainMenuLayer::animateInMainMenu() {



}

void MainMenuLayer::playButtonCallback( CCObject* pSender ) {

	cocos2d::CCSize visibleSize = cocos2d::CCDirector::sharedDirector()->getVisibleSize();
	cocos2d::CCPoint origin = cocos2d::CCDirector::sharedDirector()->getVisibleOrigin();

	CCLOG("Play Button Pressed");
	cocos2d::CCSprite * testSprite = cocos2d::CCSprite::create("c2.png");
	testSprite->setPosition( ccp(-300, -300));
	cocos2d::CCMoveTo * mov = cocos2d::CCMoveTo::create( 7.0f, ccp(visibleSize.width/2, visibleSize.height/2));
	cocos2d::CCScaleTo * scale = cocos2d::CCScaleTo::create( 5.0f, 5.0f, 5.0f);
	this->addChild(testSprite, 2);
	testSprite->runAction(mov);
	testSprite->runAction(scale);
	

}