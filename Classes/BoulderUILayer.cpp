//
//  BoulderUILayer.cpp
//  Boulder
//
//  Created by Paul Renton on 8/11/13.
//
//

#include "BoulderUILayer.h"
#include "UIDelegateProtocol.h"

using boulderas::BoulderUILayer;

BoulderUILayer::~BoulderUILayer() {
    CCLOG("BoulderUILayer Destructor");
    
}

BoulderUILayer::BoulderUILayer() {
    CCLOG("BoulderUILayer entering default constructor");
    
}

bool boulderas::BoulderUILayer::init() {
    
    bool superInit;
    if ((superInit = boulderas::BoulderLayer::init())) {
        CCLOG("BolderUILayer init");
    }
    return superInit;
    
} // end init

inline void BoulderUILayer::suspendDelegate() {
    CCLOG("BoulderUILayer:: Suspending delegate");
    this->actionDelegate = NULL;
} // end suspendDelegate

// Mutators
inline void BoulderUILayer::setActionDelegate(boulderas::UIDelegateProtocol * const & delegate) {
    // No retain counting here.. UIDelegate does not inherit from a CC object
    this->actionDelegate = delegate;
    
} // end setter

inline boulderas::UIDelegateProtocol * BoulderUILayer::getActionDelegate() const {
    
    if (this->actionDelegate) {
        return this->actionDelegate;
    } else {
        CCLOG("Warning :: getActionDelegate-> delegate is not set... Returning NULL");
        return NULL;
    }
    
} // end getter