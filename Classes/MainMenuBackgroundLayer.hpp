

#ifndef included_MainMenuBackgroundLayer
#define included_MainMenuBackgroundLayer

#include "BoulderUILayer.h"

namespace boulderas {

const float BACKGROUND_IMAGE_Z_VALUE = 1.0f;

class MainMenuBackgroundLayer : public BoulderUILayer {

public:

	static MainMenuBackgroundLayer * create();

	MainMenuBackgroundLayer();
	virtual ~MainMenuBackgroundLayer();

	virtual bool init();

protected:

private:
	DISALLOW_COPY_AND_ASSIGN(MainMenuBackgroundLayer);

	void initializeDefaults();

};

} // end namespace

#endif
