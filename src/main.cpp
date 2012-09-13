#include "testApp.h"
#include "CuentosController.h"
#include "ofAppGlutWindow.h"
#include "ApplicationController.h"

//--------------------------------------------------------------
int main(){
    cout << "very welcome to the System -> Creating a Controller ->";
        
	ofAppGlutWindow window; // create a window
	// set width, height, mode (OF_WINDOW or OF_FULLSCREEN)
	ofSetupOpenGL(&window, 1024, 768, OF_WINDOW);
 	ofRunApp(new ApplicationController()); // start the app
}
