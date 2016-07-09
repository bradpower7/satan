#ifndef DNSTREAM_H
#define DNSTREAM_H

#include <queue>

#include "demo.c"

class Position2D{
    
    private:
        unsigned int _x;
        unsigned int _y;
        
    public:
    
}

class DetectedObject{
    
    private:
        string _classification;     // Class (i.e type or name) of identified object
        Position2D _position;       // Location in FOV
        
    public:
        DetectedObject(string classification, Position2D position);
        
}

class ConfirmedObject{
    
    private:
        std::queue<DetectedObject> _latestInstances;        // Recent instances that should all be from the same object
        
        unsigned int _id;
        string _classification;
        Position2D _currentPosition;
        
    public:
        bool checkSameObject(DetectedObject obj);
        void update(DetectedObject obj);
        
        int id();
        Position2D position();
        string classification();
        
        ConfirmedObject(
    
        
    
}

class DnStream{
    
    private:
        char *_cfgFile;
        char *_weightFile;
        
        char *_videoFile;
        int _camIndex;
        
        
        
        float thresh;
        
        network net;
    
    public:
        vector<DetectedObject> predict();
    
}



#endif
