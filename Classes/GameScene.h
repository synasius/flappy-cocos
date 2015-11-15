#ifndef __GAME_SCENE_H
#define __GAME_SCENE_H

#include "cocos2d.h"

class Game : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();

    virtual bool init();

    // implement the "static create()" method manually
    CREATE_FUNC(Game);

};
#endif //__GAME_SCENE_H
