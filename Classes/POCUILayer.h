//
//  POCUILayer.h
//  Boulder
//
//  Created by Paul Renton on 8/11/13.
//
//

#ifndef __Boulder__POCUILayer__
#define __Boulder__POCUILayer__

#include <iostream>

#include "BoulderUILayer.h"

namespace boulderas {
    
class POCUILayer : public BoulderUILayer {

public:
    
    static POCUILayer * create();
    
    POCUILayer();
    virtual ~POCUILayer();
    
    virtual bool init();
protected:
    
    
    
private:
    DISALLOW_COPY_AND_ASSIGN(POCUILayer);
        
};
    
    
} // end namespace

#endif /* defined(__Boulder__POCUILayer__) */
