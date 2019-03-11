//
//  Lobby.cpp
//  helloworld
//
//  Created by Bao Nguyen on 3/11/19.
//

#include "Lobby.h"

USING_NS_CC;

bool Lobby::init() {
    if (!Node::init()) {
        return false;
    }
    LayerColor* background = LayerColor::create(Color4B(255, 255, 255, 255));
    this->addChild(background);
    return true;
}

void Lobby::onEnter() {
    Node::onEnter();
    setupUI();
}

void Lobby::setupUI() {
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Sprite *logo = Sprite::create("doodlerLogo.png");
    logo->setAnchorPoint(Vec2(0.5, 0.5));
    logo->setPosition(Vec2(visibleSize.width * 0.5, visibleSize.height * 0.75));
    this->addChild(logo);
}
