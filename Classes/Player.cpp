#include "Player.h"

USING_NS_CC;

Player::Player():
    Sprite()
{
    // here we setup and activate the player animation
    auto animation = Animation::create();
    animation->setDelayPerUnit(0.2f);
    animation->addSpriteFrame(SpriteFrame::create("bird.png", Rect(0, 0, 34, 24)));
    animation->addSpriteFrame(SpriteFrame::create("bird.png", Rect(34, 0, 34, 24)));
    animation->addSpriteFrame(SpriteFrame::create("bird.png", Rect(68, 0, 34, 24)));
    this->runAction(RepeatForever::create(Animate::create(animation)));

    CCLOG("player sprite size %f %f", this->getContentSize().width, this->getContentSize().height);

    // here we add physics to the sprite
    auto physicsBody = PhysicsBody::createBox(Size(34, 24));
    this->setPhysicsBody(physicsBody);
}
