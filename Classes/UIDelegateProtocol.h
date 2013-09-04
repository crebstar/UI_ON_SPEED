//
//  UIDelegateProtocol.h
//  Boulder
//
//  Created by Paul Renton on 8/11/13.
//
//

#ifndef __Boulder__UIDelegateProtocol__
#define __Boulder__UIDelegateProtocol__

#include <iostream>

#include "cocos2d.h"

namespace boulderas {
    
class UIDelegateProtocol {
    
public:
    
    virtual void testEvent() const = 0;
protected:
    
    UIDelegateProtocol();
    virtual ~UIDelegateProtocol();
    
private:
    DISALLOW_COPY_AND_ASSIGN(UIDelegateProtocol);
        
};
    
    
} // end namespace

#endif /* defined(__Boulder__UIDelegateProtocol__) */
