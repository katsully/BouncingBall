//
//  Mover.h
//  BouncingBall
//
//  Created by Kathleen Sullivan on 6/12/15.
//
//

using namespace ci;

class Mover {
public:
    Mover();
    void update();
    void display();
    void checkEdges();
    
    Vec2f mLocation;
    Vec2f mVelocity;
    Vec2f mAcceleration;
    
    float mTopSpeed;
};
