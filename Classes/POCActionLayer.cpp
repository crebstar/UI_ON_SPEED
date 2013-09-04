//
//  POCActionLayer.cpp
//  Boulder
//
//  Created by Paul Renton on 8/11/13.
//
//

#include <string>

#include "POCActionLayer.h"
#include "GameConstants.h"
#include "BoulderUILayer.h"

using boulderas::POCActionLayer;

POCActionLayer::~POCActionLayer() {
    CCLOG("POCActionLayer Entering Destructor");
}

POCActionLayer::POCActionLayer() {
    CCLOG("POCActionLayer Entering Constructor");
}

// static
POCActionLayer * POCActionLayer::createWithUILayer(boulderas::BoulderUILayer * const & uiLayer) {
    
    POCActionLayer * actionLayer = new POCActionLayer;
    
    if (actionLayer && actionLayer->initWithUILayer(uiLayer)) {
        CCLOG("POCActionLayer entering createWithUILayer");
        actionLayer->autorelease();
        return actionLayer;
    }
    
    CC_SAFE_DELETE(actionLayer);
    CCLOG("Error :: Coult not initialize POCActionLayer");
    return NULL;
    
}

bool POCActionLayer::initWithUILayer(boulderas::BoulderUILayer *const &uiLayer) {
    
    bool superInit;
    if ((superInit = BoulderActionLayer::init())) {
        CCLOG("POCActionLayer initWithUILayer");
        // Setter takes care of retain
        this->setUILayer(uiLayer);
        cocos2d::CCSprite * sprite = cocos2d::CCSprite::create("CloseNormal.png");
        sprite->setPosition(ccp(0,0));
        this->addChild(sprite);
        cocos2d::CCDirector * dir = cocos2d::CCDirector::sharedDirector();

        cocos2d::CCSize winSize = dir->getWinSize();
        cocos2d::CCPoint endPt = ccp(winSize.width, winSize.height);
        cocos2d::CCMoveTo * mov = cocos2d::CCMoveTo::create(10.0, endPt);
        sprite->runAction(mov);
    }
    return superInit;
    
}
