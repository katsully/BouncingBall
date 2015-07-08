//
//  Created By Kat Sullivan
//

#include "cinder/app/AppNative.h"
#include "cinder/gl/gl.h"
#include "Mover.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class BouncingBallApp : public AppNative {
  public:
    void prepareSettings( Settings *settings );
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();
    
    Mover *mMover;
};

void BouncingBallApp::prepareSettings( Settings *settings ){
    settings->setWindowSize( 1000, 1000 );
}

void BouncingBallApp::setup(){
    mMover = new Mover();
}

void BouncingBallApp::mouseDown( MouseEvent event )
{
}

void BouncingBallApp::update()
{
}

void BouncingBallApp::draw()
{
    gl::clear( Color ( 1, 1, 1 ) );
    
    mMover->update();
    mMover->checkEdges();
    mMover->display();
    
}

CINDER_APP_NATIVE( BouncingBallApp, RendererGl )
