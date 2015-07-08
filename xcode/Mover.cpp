//
//  Mover.cpp
//  BouncingBall
//
//  Created by Kathleen Sullivan on 6/12/15.
//
//

#include "Mover.h"
#include "cinder/Rand.h"

Mover::Mover(){
    mLocation = Vec2f( ci::app::getWindowWidth()/2, ci::app::getWindowHeight()/2 );
    mVelocity = Vec2f( 0, 0 );
    mAcceleration = Vec2f( 5, 0.0  );
    mTopSpeed = 10.0f;
}

void Mover::update(){
  //  mAcceleration = Vec2f.Rand::rand2f;
    
    mVelocity += mAcceleration;
    //mVelocity.limit( mTopSpeed );
    mLocation += mVelocity;
}

void Mover::display(){
    gl::color(0.5, 0.5, 0.5);
    gl::drawSolidEllipse( mLocation, 16, 16 );
    
    gl::lineWidth( 2.0f );
    gl::color(0, 0, 0);
    gl::drawStrokedEllipse(mLocation, 16, 16);
}

void Mover::checkEdges(){
    if( mLocation.x > ci::app::getWindowWidth() ){
        mLocation.x = 0;
    } else if( mLocation.x < 0 ){
        mLocation.x = ci::app::getWindowWidth();
    }
    
    if( mLocation.y > ci::app::getWindowHeight() ){
        mLocation.y = 0;
    } else if( mLocation.y < 0 ){
        mLocation.y = ci::app::getWindowHeight();
    }
}
