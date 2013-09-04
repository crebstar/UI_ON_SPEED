//
//  BoulderLayer.cpp
//  Boulder
//
//  Created by Paul Renton on 8/10/13.
//
//

#include "BoulderLayer.h"


using boulderas::BoulderLayer;

BoulderLayer::~BoulderLayer() {
    CCLOG("BoulderLayer Destructor");
    
}

BoulderLayer::BoulderLayer() {
    CCLOG("BoulderLayer Constructor");
    
}

bool BoulderLayer::init() {
    
    bool superInit;
    if ((superInit = cocos2d::CCLayer::init())) {
        CCLOG("BoulderLayer Init");
    }
    return superInit;
}