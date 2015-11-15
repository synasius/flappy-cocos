#include "Ground.h"

USING_NS_CC;

Ground::Ground():
    Sprite()
{
    // here we setup and activate the grounf animation
    auto animation = Animation::create();
    animation->setDelayPerUnit(0.25f);
    animation->addSpriteFrame(SpriteFrame::create("land.png", Rect(0, 0, 368, 90)));
    animation->addSpriteFrame(SpriteFrame::create("land.png", Rect(368, 0, 368, 90)));
    this->runAction(RepeatForever::create(Animate::create(animation)));

    // here we add physics to the sprite
    auto physicsBody = PhysicsBody::createBox(Size(368, 90));
    physicsBody->setDynamic(false);
    physicsBody->setPositionOffset(Vec2(0.0, 45.0));
    this->setPhysicsBody(physicsBody);
}
