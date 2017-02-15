//
//  Ball.hpp
//  tutorial-ball
//
//  Created by 张愫 on 17/2/13.
//
//

#ifndef Ball_hpp
#define Ball_hpp

#include <stdio.h>

#include "ofMain.h"

class Ball{
public:
    void setup();
    void update();
    void draw();
    
    float x;
    float y;
    float speedY;
    float speedX;
    int dim;
    ofColor color;
    
    Ball();
private:
};

#endif /* Ball_hpp */
