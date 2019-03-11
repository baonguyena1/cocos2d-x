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
}
