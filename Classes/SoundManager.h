//
//  SoundManager.h
//  Boulder
//
//  Created by Paul Renton on 8/10/13.
//
//

#ifndef __Boulder__SoundManager__
#define __Boulder__SoundManager__

#include <iostream>

#include "cocos2d.h"

namespace boulderas {
    
    class SoundManager {
        
    public:
        
        static SoundManager & sharedSoundManager();
        
        ~SoundManager();
    protected:
        
        
    private:
        //DISALLOW_COPY_AND_ASSIGN(SoundManager);
        
        SoundManager();
        
    };
    
} // end namespace
#endif /* defined(__Boulder__SoundManager__) */
