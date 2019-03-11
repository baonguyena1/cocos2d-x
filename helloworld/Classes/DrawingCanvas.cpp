//
//  DrawingCanvas.cpp
//  helloworld
//
//  Created by Bao Nguyen on 3/11/19.
//

#include "DrawingCanvas.h"

USING_NS_CC;

bool DrawingCanvas::init()
{
    if (!Node::init()) {
        return false;
    }
    
    LayerColor* background = LayerColor::create(Color4B(255, 255, 255, 255));
    this->addChild(background);
    drawNode = DrawNode::create();
    this->addChild(drawNode);
    return true;
}


void DrawingCanvas::onEnter()
{
    Node::onEnter();
    Size visibleSize = Director::getInstance()->getVisibleSize();
    this->setContentSize(visibleSize);
    drawNode->setContentSize(visibleSize);
    setupTouchHandling();
}

void DrawingCanvas::setupTouchHandling()
{
    static Vec2 lastTouchPos;
    auto touchListener = EventListenerTouchOneByOne::create();
    touchListener->onTouchBegan = [&](Touch* touch, Event* event) {
        lastTouchPos = drawNode->convertTouchToNodeSpace(touch);
        return true;
    };
    
    touchListener->onTouchMoved = [&](Touch* touch, Event* event) {
        Vec2 touchPos = drawNode->convertTouchToNodeSpace(touch);
        drawNode->drawSegment(lastTouchPos, touchPos, 1.0, Color4F(0, 0, 0, 10));
        lastTouchPos = touchPos;
    };
    this->getEventDispatcher()->addEventListenerWithSceneGraphPriority(touchListener, this);
}
