//
//  Lobby.h
//  helloworld
//
//  Created by Bao Nguyen on 3/11/19.
//

#ifndef Lobby_h
#define Lobby_h

#include "cocos2d.h"

class Lobby: public cocos2d::Node
{
public:
    CREATE_FUNC(Lobby);
protected:
    virtual bool init();
    virtual void onEnter();
};

#endif /* Lobby_h */
