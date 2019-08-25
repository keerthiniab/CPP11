struct SImageInfo 
{ 
   // Windows specific DataSet 
}; 
  
void CImage::InitImageInfo() 
{ 
    pImageInfo = new SImageInfo; 
    // Initialize windows specific info here 
} 
  
void CImage::Rotate() 
{ 
    // Make use of windows specific SImageInfo 
} 

