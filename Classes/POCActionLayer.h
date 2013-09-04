//
//  POCActionLayer.h
//  Boulder
//
//  Created by Paul Renton on 8/11/13.
//
//

#ifndef __Boulder__POCActionLayer__
#define __Boulder__POCActionLayer__

#include <iostream>


#include "BoulderActionLayer.h"

namespace boulderas {

class BoulderUILayer;
    
class POCActionLayer : public BoulderActionLayer {

public:
    
    static POCActionLayer * createWithUILayer(BoulderUILayer * const & uiLayer);
    
    POCActionLayer();
    virtual ~POCActionLayer();
    
    virtual bool initWithUILayer(BoulderUILayer * const & uiLayer);
    
protected:
    
    
private:
    DISALLOW_COPY_AND_ASSIGN(POCActionLayer);
        
};
    
    
} // end namespace

#endif /* defined(__Boulder__POCActionLayer__) */
