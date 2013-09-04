//
//  BolderActionLayer.cpp
//  Boulder
//
//  Created by Paul Renton on 8/11/13.
//
//

#include <algorithm>

#include "BoulderActionLayer.h"

#include "BoulderUILayer.h"

using boulderas::BoulderActionLayer;

BoulderActionLayer::BoulderActionLayer() {
    
    CCLOG("BoulderActionLayer Default Constructor");
    this->uiLayer = NULL;
    CCLOG("BoulderActionLayer uiLayer set to NULL");
}

BoulderActionLayer::~BoulderActionLayer() {
    
    CCLOG("BoulderActionLayer Destructor");
    
    if (this->uiLayer) {
        this->uiLayer->suspendDelegate();
        this->uiLayer->release();
        this->uiLayer = NULL;
    } // end if

} // end Destructor

bool BoulderActionLayer::init() {
    
    bool superInit;
    if ((superInit = boulderas::BoulderLayer::init())) {
        CCLOG("BoulderActionLayer Init");
    }
    return superInit;
    
}

// Protected Mutators
inline void BoulderActionLayer::setUILayer(boulderas::BoulderUILayer * const & uiLayer) {
    
    if (this->uiLayer) {
        CCLOG("Warning:: setUILayer-> Assigning a new uiLayer to action layer");
        this->uiLayer->release();
        this->uiLayer = uiLayer;
    } else {
        this->uiLayer = uiLayer;
        this->uiLayer->retain();
    } // end if
    
} // end setter

inline boulderas::BoulderUILayer * BoulderActionLayer::getUILayer() const {
    
    if (this->uiLayer) {
        return this->uiLayer;
    } else {
        CCLOG("Warning:: getUILayer-> uiLayer pointer is NULL");
        return NULL;
    } // end if
    
} // end getter

// Protocol Methods
void BoulderActionLayer::testEvent() const {
    CCLOG("UIDelegateTestEvent is successful");
}