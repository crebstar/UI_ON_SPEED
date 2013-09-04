//
//  GameManager.h
//  Boulder
//
//  Created by Paul Renton on 8/10/13.
//
//

/*
 Using http://cocos2d-x.org/projects/cocos2d-x/wiki/Cocos2d_c++_coding_style for coding standards
 */

#ifndef __Boulder__GameManager__
#define __Boulder__GameManager__

#include <iostream>
#include <string>

#include "cocos2d.h"

#include "GameConstants.h"


namespace boulderas {

// Must have this or the linker will fail with multiple symbols for this array of structs
extern enum_string enum_to_str[];

class GameManager  {
    
public:
    
    static GameManager & sharedGameManager() {
        /**
         Static function that returns the only gameManager instance
         */
        
        // This is only evaluated the first time it runs
        static GameManager gameManager;
        return gameManager;
        
    } // end sharedGameManager

    ~GameManager();
    
    void runSceneWithName(const std::string sceneName);
    void runSceneWithSceneID(const SceneTypes sceneID) const;
    
    //Mutators
    bool isRetina() const;
protected:

    
private:
    // Prevent use of copy and assignment operator
    //DISALLOW_COPY_AND_ASSIGN(GameManager);
    
    //Default constructor is private so it cannot be instantiated outside of class
    GameManager() {}
    // Helper functions
    void determineIfDeviceIsRetina() const;
    
    bool retina;
};

} // end namespace

#endif /* defined(__Boulder__GameManager__) */
