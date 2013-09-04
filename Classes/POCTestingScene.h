//
//  POCTestingScene.h
//  Boulder
//
//  Created by Paul Renton on 8/11/13.
//
//

#ifndef __Boulder__POCTestingScene__
#define __Boulder__POCTestingScene__

#include <iostream>

#include "BoulderScene.h"

namespace boulderas {

extern int ACTION_LAYER_Z_VALUE;
extern int UI_LAYER_Z_VALUE;

class POCUILayer;
class POCActionLayer;
    
class POCTestingScene : public BoulderScene {

public:
    
    static POCTestingScene * createScene();
    
    POCTestingScene();
    virtual ~POCTestingScene();
    
    virtual bool init();
    
protected:
    
    
private:
    DISALLOW_COPY_AND_ASSIGN(POCTestingScene);
    
    virtual void createAndAddLayers();
    
};
    
} // end namespace

#endif /* defined(__Boulder__POCTestingScene__) */
