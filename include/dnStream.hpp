#ifndef DNSTREAM_H
#define DNSTREAM_H

#include <queue>
#include <vector>

#include "demo.h"

struct Position2D{
    
    private:
        unsigned int _x;
        unsigned int _y;
    
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
        queue<DetectedObject> _latestInstances;        // Recent instances that should all be from the same object
        
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
        bool _initialized = false;
        char *_cfgFile;
        char *_weightFile;
        
        CvCapture *_cap;
        int _camIndex;
        
        
        
        float _thresh;
        
        network _net;       // Determined from config file
    
    public:
        DnsStream();
        DnsStream(char *cfgFile, char *weightFile, CvCapture *cap, int cam, float threshold);
        
        bool loadCfg(char *cfgFile);
        bool loadWeights(char *weightFile);
        bool loadCapture(CvCapture *cap);
        
        void setCam(int index);
        void setThreshold(float threshold);
        
        
        
        vector<DetectedObject> predict();
        
    
}



#endif
