//
//  BoulderScene.h
//  Boulder
//
//  Created by Paul Renton on 8/10/13.
//
//

#ifndef __Boulder__BoulderScene__
#define __Boulder__BoulderScene__

#include <iostream>

#include "cocos2d.h"

namespace boulderas {
    
class BoulderUILayer;
class BoulderActionLayer;
    
class BoulderScene : public cocos2d::CCScene {

public:
    
    virtual ~BoulderScene();

protected:
    
    BoulderScene();
    virtual bool init();
    
    inline virtual void setActionLayer(BoulderActionLayer * const & actionLayer);
    inline virtual BoulderActionLayer * getActionLayer() const;
    inline virtual void setUILayer(BoulderUILayer * const & uiLayer);
    inline virtual BoulderUILayer * getUILayer() const;
    
    // ABSTRACT
    virtual void createAndAddLayers() = 0;
    
private:
    DISALLOW_COPY_AND_ASSIGN(BoulderScene);
    
    BoulderActionLayer * actionLayer;
    BoulderUILayer * uiLayer;
    
};
    
} // end namespace

#endif /* defined(__Boulder__BoulderScene__) */
