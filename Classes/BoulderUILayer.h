//
//  BoulderUILayer.h
//  Boulder
//
//  Created by Paul Renton on 8/11/13.
//
//

#ifndef __Boulder__BoulderUILayer__
#define __Boulder__BoulderUILayer__

#include <iostream>

#include "cocos2d.h"

#include "BoulderLayer.h"

namespace boulderas {

class UIDelegateProtocol;

class BoulderUILayer : public BoulderLayer {

public:
    
    virtual ~BoulderUILayer();
    
    inline virtual void suspendDelegate();
    
    inline virtual void setActionDelegate(UIDelegateProtocol * const & delegate);
    
protected:
    // Prevent instantiation outside of class hierarchy
    BoulderUILayer();
    virtual bool init();
    inline virtual UIDelegateProtocol * getActionDelegate() const;
    
private:
    DISALLOW_COPY_AND_ASSIGN(BoulderUILayer);
    
    UIDelegateProtocol * actionDelegate;
        
};
    
} // end namespace

#endif /* defined(__Boulder__BoulderUILayer__) */
