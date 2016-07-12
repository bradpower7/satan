#include "dnStream.hpp"

DnStream::DnStream(){
    
    _initialized = false;
    
    _cfgFile = nullptr;
    _weightFile = nullptr;
    _cap = nullptr;
    _cam = 0;
    _threshold = 0.2;
    _net = null;
    
}

DnStream::DnStream(char *cfgFile, char *weightFile, CvCapture *cap, int cam, float threshold){
    
    _initialized = true;
    
    _cfgFile = cfgFile;
    _weightFile = weightFile;
    _cap = cap;
    _camIndex = cam;
    _threshold = threshold;
    
    _net = parse_network_cfg(cfgFile);
}


vector<DetectedObject> DnStream::predict(){
    if(!_initialized){
        return null;
    }
    
    vector<DetectedObject> detObjects;
    
    // Captures current frame from video stream
    
    // Feedforward it into YOLO
    
    // Collect and return results
    
    return detObjects;
    
}
