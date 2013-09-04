//
//  BoulderScene.cpp
//  Boulder
//
//  Created by Paul Renton on 8/10/13.
//
//

#include "BoulderScene.h"

#include "BoulderUILayer.h"
#include "BoulderActionLayer.h"

using boulderas::BoulderScene;


boulderas::BoulderScene::~BoulderScene() {
    CCLOG("BoulderScene Destructor");
    if (this->uiLayer) this->uiLayer->release();
    if (this->actionLayer) this->actionLayer->release();
    this->uiLayer = NULL;
    this->actionLayer = NULL;
    
} // end destructor

BoulderScene::BoulderScene() {
    CCLOG("BoulderScene entering default constructor");
    this->uiLayer = NULL;
    this->actionLayer = NULL;
}

bool boulderas::BoulderScene::init() {
    
    bool superInit;
    if ((superInit = cocos2d::CCScene::init())) {
        CCLOG("BoulderScene Init");
    }
    return superInit;
} // end init

//Mutators

inline void BoulderScene::setActionLayer(boulderas::BoulderActionLayer *const &actionLayer) {
    
    if (this->actionLayer) {
        CCLOG("BoulderScene :: replacing previous action layer with new action layer");
        this->actionLayer->release();
        this->actionLayer = actionLayer;
    } else {
        this->actionLayer = actionLayer;
        this->actionLayer->retain();
    }
    
}

inline boulderas::BoulderActionLayer * BoulderScene::getActionLayer() const {
    
    if (this->actionLayer) {
        return this->actionLayer;
    } else {
        CCLOG("Warning :: BoulderScene::getActionLayer-> actionLayer is not set.. returning NULL");
        return NULL;
    } // end if
    
}

inline void BoulderScene::setUILayer(boulderas::BoulderUILayer * const & uiLayer) {
    
    if (this->uiLayer) {
        CCLOG("BoulderScene :: replacing previous ui layer with new ui layer");
        this->uiLayer->release();
        this->uiLayer = uiLayer;
    } else {
        this->uiLayer = uiLayer;
        this->uiLayer->retain();
    }
    
}

inline boulderas::BoulderUILayer * BoulderScene::getUILayer() const {
    
    if (this->uiLayer) {
        return this->uiLayer;
    } else {
        CCLOG("Warning :: BoulderScene::getUILayer-> uiLayer is not set.. returning NULL");
        return NULL;
    }
    
}