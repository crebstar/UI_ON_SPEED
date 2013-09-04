


#ifndef included_MainMenuLayer
#define included_MainMenuLayer

#include "BoulderActionLayer.h"

class BoulderUILayer;

namespace boulderas {

class MainMenuLayer : public BoulderActionLayer {

public:

	static MainMenuLayer * createWithUILayer(BoulderUILayer * const & uiLayer);

	MainMenuLayer();
	virtual ~MainMenuLayer();

	virtual bool initWithUILayer(BoulderUILayer * const & uiLayer);

	

protected:

private:
	DISALLOW_COPY_AND_ASSIGN(MainMenuLayer);

	void addMenuItemsToLayer();

	// a selector callback
	void playButtonCallback(CCObject* pSender);

};

} // end namespace

#endif
