//
//  GameManager.cpp
//  Boulder
//
//  Created by Paul Renton on 8/10/13.
//
//


#include "GameManager.h"


using boulderas::GameManager;



GameManager::~GameManager() {
    CCLOG("GameManager Destructor Invoked");
    
} // end destructor

// Helper functions



void GameManager::determineIfDeviceIsRetina() const {
    /**
     Determines if the given device is a retina device or not and stores the result
     in the member boolean variable -- retina
     */
    
}

void GameManager::runSceneWithName(const std::string sceneName) {
    //CCLOG(sceneName.c_str());
    std::cout << "running a new scene " << sceneName << std::endl;
}

#pragma mark Mutators

bool GameManager::isRetina() const {
    return retina;
}