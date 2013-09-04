


#include "MainMenuBackgroundLayer.hpp"

using boulderas::MainMenuBackgroundLayer;

MainMenuBackgroundLayer::~MainMenuBackgroundLayer() {
	CCLOG("MainMenuBackgroundLayer entering destructor");
}

MainMenuBackgroundLayer::MainMenuBackgroundLayer() {
	CCLOG("MainMenuBackgroundLayer entering default constructor");
}

MainMenuBackgroundLayer * MainMenuBackgroundLayer::create() {

	MainMenuBackgroundLayer * uiLayer = new MainMenuBackgroundLayer;

	if (uiLayer && uiLayer->init()) {
		CCLOG("MainMenuBackgroundLayer create");
		uiLayer->autorelease();
		return uiLayer;
	}
	CCLOG("Warning :: MainMenuBackgroundLayer::create-> Could not create instance of MainMenuBackgroundLayer.. Returning NULL");
	CC_SAFE_DELETE(uiLayer);
	return NULL;

}

bool MainMenuBackgroundLayer::init() {

	bool superInit;
	if ((superInit = boulderas::BoulderUILayer::init())) {
		CCLOG("MainMenuBackgroundLayer init");
		this->initializeDefaults();
	}
	return superInit;

}


void MainMenuBackgroundLayer::initializeDefaults() {

	 cocos2d::CCSize visibleSize = cocos2d::CCDirector::sharedDirector()->getVisibleSize();
	cocos2d::CCSprite * bgImage = cocos2d::CCSprite::create("table_background_green.png");
	bgImage->setPosition( ccp (visibleSize.width/2, visibleSize.height/2));

	this->addChild(bgImage, boulderas::BACKGROUND_IMAGE_Z_VALUE);


}