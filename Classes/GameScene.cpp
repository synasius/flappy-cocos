#include "GameScene.h"
#include "Ground.h"
#include "Player.h"

USING_NS_CC;

Scene* Game::createScene()
{
    auto scene = Scene::createWithPhysics();
    scene->getPhysicsWorld()->setDebugDrawMask(PhysicsWorld::DEBUGDRAW_ALL);

    auto layer = Game::create();
    scene->addChild(layer);

    return scene;
}

bool Game::init()
{
    if (!Layer::init()) {
        return false;
    }

    // TODO: init the world here
    auto screenSize = Director::getInstance()->getWinSize();

    // init the background first
    auto bg = Sprite::create("bg.png");
    bg->setPosition(Vec2(screenSize.width * 0.5, screenSize.height * 0.5));
    this->addChild(bg);

    auto ground = Ground::create();
    ground->setAnchorPoint(Vec2(0.5, 0.0));
    ground->setPosition(Vec2(screenSize.width * 0.5, 0.0));
    this->addChild(ground);

    auto player = Player::create();
    player->setPosition(Vec2(screenSize.width * 0.5, screenSize.height * 0.5));
    this->addChild(player);

    return true;
}
