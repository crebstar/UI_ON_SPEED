//
//  GameConstants.h
//  Boulder
//
//  Created by Paul Renton on 8/10/13.
//
//

#ifndef __Boulder__GameConstants__
#define __Boulder__GameConstants__

#include <iostream>
#include <sstream>

//
//  GameConstants.h
//  Boulder
//
//  Created by Paul Renton on 8/10/13.
//
//

#ifndef Boulder_GameConstants_h
#define Boulder_GameConstants_h

// SCENES

namespace boulderas {
    
typedef enum {
    
    sMainMenuScene,
    sTestingScene,
    sPOCTestingScene,
    
} SceneTypes;

struct enum_string {
    SceneTypes sceneTypesEnum;
    const char * name;
};

#define ENUM_TO_STR(e) { e, #e }
    
extern enum_string enum_to_str[];

extern int ACTION_LAYER_Z_VALUE;
extern int UI_LAYER_Z_VALUE;
    
// AUDIO
typedef enum {
    kAudioManagerUninitialized=0,
    kAudioManagerFailed=1,
    kAudioManagerInitializing=2,
    kAudioManagerInitialized=100,
    kAudioManagerLoading=200,
    kAudioManagerReady=300
    
} GameManagerSoundState;

// Audio Constants
#define AUDIO_MAX_WAITTIME 150
    
#define SFX_NOTLOADED NO
#define SFX_LOADED YES
    
    // Audio Macros
#define PLAYSOUNDEFFECT(...) \
[[GameManager sharedGameManager] playSoundEffect:@#__VA_ARGS__]
    
#define STOPSOUNDEFFECT(...) \
[[GameManager sharedGameManager] stopSoundEffect:__VA_ARGS__]
    
} // end namespace

#endif


#endif /* defined(__Boulder__GameConstants__) */
