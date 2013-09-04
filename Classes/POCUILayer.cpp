//
//  POCUILayer.cpp
//  Boulder
//
//  Created by Paul Renton on 8/11/13.
//
//

#include "POCUILayer.h"



using boulderas::POCUILayer;

POCUILayer::~POCUILayer() {
    CCLOG("POCUILayer entering destructor");
}

POCUILayer::POCUILayer() {
    CCLOG("POCUILayer entering default constructor");
}

POCUILayer * POCUILayer::create() {
    
    POCUILayer * uiLayer = new POCUILayer;
    
    if (uiLayer && uiLayer->init()) {
        CCLOG("POCUILayer create");
        uiLayer->autorelease();
        return uiLayer;
    }
    CCLOG("Warning :: POCUILayer::create-> Could not create instance of POCUILayer.. Returning NULL");
    CC_SAFE_DELETE(uiLayer);
    return NULL;
    
}

bool POCUILayer::init() {
    
    bool superInit;
    if ((superInit = boulderas::BoulderUILayer::init())) {
        CCLOG("POCUILayer init");
    }
    return superInit;
    
}