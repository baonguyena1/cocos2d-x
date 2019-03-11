//
//  DrawingCanvas.h
//  helloworld
//
//  Created by Bao Nguyen on 3/11/19.
//

#ifndef DrawingCanvas_h
#define DrawingCanvas_h

#include "cocos2d.h"

class DrawingCanvas: public cocos2d::Node
{
public:
    CREATE_FUNC(DrawingCanvas);
    
protected:
    cocos2d::DrawNode* drawNode;
    virtual bool init();
    virtual void onEnter();
    void setupTouchHandling();
};

#endif /* DrawingCanvas_h */
