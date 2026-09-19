class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        
        int xnearest;
        int ynearest;
        if(xCenter<x1){
            xnearest=x1;
        }
        else if(xCenter>x2){
             xnearest=x2;
        }
        else{
             xnearest=xCenter;
        }

         if(yCenter<y1){
            ynearest=y1;
        }
        else if(yCenter>y2){
             ynearest=y2;
        }
        else{
             ynearest=yCenter;
        }

        int dx = xCenter - xnearest;
        int dy = yCenter - ynearest;
    
      
      return (dx * dx + dy * dy) <= (radius * radius);

    }
};