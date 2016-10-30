#include "ofApp.h"
class ClassA{
public:
    ClassA(){
        std::cout << "ClassA is being created" << std::endl;
    }
    ~ClassA(){
        std::cout << "ClassA is being deleted" << std::endl;
    }
};

class ClassB{
public:
    ClassB(){
        std::cout << "ClassB is being created" << std::endl;
    }
    ~ClassB(){
        std::cout << "ClassB is being deleted" << std::endl;
    }
};

class ClassC{
public:
    ClassC(){
        std::cout << "ClassC is being created" << std::endl;
    }
    ~ClassC(){
        std::cout << "ClassC is being deleted" << std::endl;
    }
};

class ClassD{
public:
    ClassD(){
        std::cout << "ClassD is being created" << std::endl;
    }
    ~ClassD(){
        std::cout << "ClassD is being deleted" << std::endl;
    }
};

//--------------------------------------------------------------
void ofApp::setup(){
    cout << "-----Begin-----" << endl;
    ofxTinySingleton<ClassA>::get_instance(); //"ClassA is being created"
    ofxTinySingleton<ClassA>::get_instance();
    ofxTinySingleton<ClassA>::get_instance();
    
    ofxTinySingleton<ClassB>::get_instance(); //"ClassA is being created"
    ofxTinySingleton<ClassA>::get_instance();
    ofxTinySingleton<ClassA>::get_instance();
    ofxTinySingleton<ClassA>::get_instance();
    
    ofxTinySingleton<ClassC>::get_instance(); //"ClassA is being created"
    ofxTinySingleton<ClassB>::get_instance();
    ofxTinySingleton<ClassA>::get_instance();
    ofxTinySingleton<ClassB>::get_instance();
    ofxTinySingleton<ClassA>::get_instance();
    
    ofxTinySingleton<ClassD>::get_instance(); //"ClassD is being created"
    ofxTinySingleton<ClassC>::get_instance();
    ofxTinySingleton<ClassB>::get_instance();
    ofxTinySingleton<ClassA>::get_instance();
    ofxTinySingleton<ClassB>::get_instance();
    ofxTinySingleton<ClassA>::get_instance();
    
    cout << "-----End-----" << endl;
    cout << "The order of the destructions should be ClassD,ClassC,ClassB,ClassA\n" << endl;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofDrawBitmapString("Exit the app and check the console", 300, 400);
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
