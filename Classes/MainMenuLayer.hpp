


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

	void loadAllMenus();

	void animateInMainMenu();

	cocos2d::CCSprite * m_mainCar;

	cocos2d::CCMenu * m_mainMenu;
	cocos2d::CCMenu * m_difficultyMenu;
	cocos2d::CCMenu * m_socialSignsMenu;
	cocos2d::CCMenu * m_welcomeMenu;

	void addMenuItemsToLayer();

	// a selector callback
	void playButtonCallback(CCObject* pSender);

};

} // end namespace

#endif
