//
//  BoulderLayer.h
//  Boulder
//
//  Created by Paul Renton on 8/10/13.
//
//

#ifndef __Boulder__BoulderLayer__
#define __Boulder__BoulderLayer__

#include <iostream>

#include "cocos2d.h"

namespace boulderas {
    
class BoulderLayer : public cocos2d::CCLayer {

public:
    
    virtual ~BoulderLayer();
    
protected:
    // For now to prevent instantiation since now abstract virtual functions
    BoulderLayer();
    virtual bool init();
private:
    DISALLOW_COPY_AND_ASSIGN(BoulderLayer);
    
    
};
    
} // end namespace

#endif /* defined(__Boulder__BoulderLayer__) */
