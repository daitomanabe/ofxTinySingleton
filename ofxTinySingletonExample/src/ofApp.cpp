#include "ofApp.h"
class ClassA{
public:
    ClassA(){
        std::cout << "ClassA()" << std::endl;
    }
    ~ClassA(){
        std::cout << "~ClassA()" << std::endl;
    }
};

class ClassB{
public:
    ClassB(){
        std::cout << "ClassB()" << std::endl;
    }
    ~ClassB(){
        std::cout << "~ClassB()" << std::endl;
    }
};

class ClassC{
public:
    ClassC(){
        std::cout << "ClassC()" << std::endl;
    }
    ~ClassC(){
        std::cout << "~ClassC()" << std::endl;
    }
};

class ClassD{
public:
    ClassD(){
        std::cout << "ClassD()" << std::endl;
    }
    ~ClassD(){
        std::cout << "~ClassD()" << std::endl;
    }
};

//--------------------------------------------------------------
void ofApp::setup(){
    // insert code here...
    ofxTinySingleton<ClassA>::get_instance();
    ofxTinySingleton<ClassA>::get_instance();
    ofxTinySingleton<ClassA>::get_instance();
    
    ofxTinySingleton<ClassB>::get_instance();
    ofxTinySingleton<ClassA>::get_instance();
    ofxTinySingleton<ClassA>::get_instance();
    ofxTinySingleton<ClassA>::get_instance();
    
    ofxTinySingleton<ClassC>::get_instance();
    ofxTinySingleton<ClassB>::get_instance();
    ofxTinySingleton<ClassA>::get_instance();
    ofxTinySingleton<ClassB>::get_instance();
    ofxTinySingleton<ClassA>::get_instance();
    
    ofxTinySingleton<ClassD>::get_instance();
    ofxTinySingleton<ClassC>::get_instance();
    ofxTinySingleton<ClassB>::get_instance();
    ofxTinySingleton<ClassA>::get_instance();
    ofxTinySingleton<ClassB>::get_instance();
    ofxTinySingleton<ClassA>::get_instance();
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
