
#include "MainMenuScene.hpp"


#include "GameConstants.h"
#include "MainMenuBackgroundLayer.hpp"
#include "MainMenuLayer.hpp"



boulderas::MainMenuScene::~MainMenuScene() {
	CCLOG("boulderas::MainMenuScene entering destructor");

}

boulderas::MainMenuScene::MainMenuScene() {
	CCLOG("boulderas::MainMenuScene entering Default constructor");
}

boulderas::MainMenuScene * boulderas::MainMenuScene::createScene() {

	boulderas::MainMenuScene * mainMenuScene = new boulderas::MainMenuScene;

	if (mainMenuScene && mainMenuScene->init()) {
		CCLOG("boulderas::MainMenuScene create");
		mainMenuScene->autorelease();
		return mainMenuScene;
	}

	CCLOG("Warning :: Could not create boulderas::MainMenuScene.. Returning NULL");
	CC_SAFE_DELETE(mainMenuScene);
	return NULL;

}

bool boulderas::MainMenuScene::init() {

	bool superInit;
	if ((superInit = boulderas::BoulderScene::init())) {
		CCLOG("boulderas::MainMenuScene init");
		this->createAndAddLayers();
	}
	return superInit;

}

// Helper Functions
void boulderas::MainMenuScene::createAndAddLayers() {

	this->setUILayer(boulderas::MainMenuBackgroundLayer::create());
	this->setActionLayer(boulderas::MainMenuLayer::createWithUILayer(this->getUILayer()));
	this->addChild(this->getUILayer(), boulderas::UI_LAYER_Z_VALUE - 5); // Hacky fix for now
	this->addChild(this->getActionLayer(), boulderas::ACTION_LAYER_Z_VALUE);

}