// This class provides API to deal with various 
// image operations. Different platforms can  
// implement these operations in different ways. 
class CImage 
{ 
public: 
    CImage(); 
    ~CImage(); 
    struct SImageInfo* pImageInfo; 
    void Rotate(double angle); 
    void Scale(double scaleFactorX,  
               double scaleFactorY); 
    void Move(int toX, int toY);     
private: 
    void InitImageInfo(); 
}; 

