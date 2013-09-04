


#ifndef included_MainMenuScene
#define included_MainMenuScene

#include "BoulderScene.h"

namespace boulderas {

class MainMenuScene : public BoulderScene {

public:
	static MainMenuScene * createScene();

	virtual ~MainMenuScene();
	MainMenuScene();
	

	virtual bool init();

protected:


private:
	DISALLOW_COPY_AND_ASSIGN(MainMenuScene);

	virtual void createAndAddLayers();

};

} // end namespace

#endif