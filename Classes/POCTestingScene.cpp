//
//  boulderas::POCTestingScene.cpp
//  Boulder
//
//  Created by Paul Renton on 8/11/13.
//
//

#include "POCTestingScene.h"

#include "GameConstants.h"
#include "POCUILayer.h"
#include "POCActionLayer.h"



boulderas::POCTestingScene::~POCTestingScene() {
    CCLOG("boulderas::POCTestingScene entering destructor");
    
}

boulderas::POCTestingScene::POCTestingScene() {
    CCLOG("boulderas::POCTestingScene entering Default constructor");
}

boulderas::POCTestingScene * boulderas::POCTestingScene::createScene() {
    
    boulderas::POCTestingScene * testingScene = new boulderas::POCTestingScene;
    
    if (testingScene && testingScene->init()) {
        CCLOG("boulderas::POCTestingScene create");
        testingScene->autorelease();
        return testingScene;
    }
    
    CCLOG("Warning :: Could not create boulderas::POCTestingScene.. Returning NULL");
    CC_SAFE_DELETE(testingScene);
    return NULL;
    
}

bool boulderas::POCTestingScene::init() {
    
    bool superInit;
    if ((superInit = boulderas::BoulderScene::init())) {
        CCLOG("boulderas::POCTestingScene init");
        this->createAndAddLayers();
    }
    return superInit;
    
}

// Helper Functions
void boulderas::POCTestingScene::createAndAddLayers() {
    
    this->setUILayer(boulderas::POCUILayer::create());
    this->setActionLayer(boulderas::POCActionLayer::createWithUILayer(this->getUILayer()));
    this->addChild(this->getUILayer(), boulderas::UI_LAYER_Z_VALUE);
    this->addChild(this->getActionLayer(), boulderas::ACTION_LAYER_Z_VALUE);
    
}