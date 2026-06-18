class Solution {
public:
    double angleClock(int hour, int minutes) {
        double mindeg=minutes*6;
        double hourdeg=(hour%12)*30+minutes*0.5;

        double diff=abs(mindeg-hourdeg);
        return min(diff,360-diff);
        
    }
};