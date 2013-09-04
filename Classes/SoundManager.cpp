//
//  SoundManager.cpp
//  Boulder
//
//  Created by Paul Renton on 8/10/13.
//
//

#include "SoundManager.h"

#include "cocos2d.h"

using boulderas::SoundManager;


SoundManager::~SoundManager() {
    CCLOG("SoundManager Destructor");
    
} // end destructor

SoundManager::SoundManager() {

    
} // end default constructor


SoundManager & SoundManager::sharedSoundManager() {
    
    static SoundManager soundManager;
    return soundManager;
}
