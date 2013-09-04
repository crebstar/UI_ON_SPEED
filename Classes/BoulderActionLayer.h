//
//  BolderActionLayer.h
//  Boulder
//
//  Created by Paul Renton on 8/11/13.
//
//

#ifndef __Boulder__BoulderActionLayer__
#define __Boulder__BoulderActionLayer__

#include <iostream>

#include "cocos2d.h"

#include "BoulderLayer.h"
#include "UIDelegateProtocol.h"

namespace boulderas {
    
class BoulderUILayer;

// ABSTRACT
class BoulderActionLayer : public BoulderLayer, public UIDelegateProtocol {
        
public:
    
    BoulderActionLayer();
    
    virtual ~BoulderActionLayer();
    
    // ABSTRACT
    virtual bool initWithUILayer(BoulderUILayer * const & uiLayer) = 0;
    
    // Protocol Functions (inherited from UIDelegateProtocol
    virtual void testEvent() const;
    
protected:
    virtual bool init();
    inline virtual BoulderUILayer * getUILayer() const;
    // Setter will take care of retain calls
    inline virtual void setUILayer(BoulderUILayer * const & uiLayer);
private:
    DISALLOW_COPY_AND_ASSIGN(BoulderActionLayer);
    
    BoulderUILayer * uiLayer;
};

    
} // end namespace

#endif /* defined(__Boulder__BoulderActionLayer__) */
