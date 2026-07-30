class Solution {
public:
    int minimumPushes(string word) {
        int cnt=0;
        int n=word.size();
        int currpush=1;
       
            
            while (n > 0) {
            if (n >= 8) {
                cnt += 8 * currpush;
                n -= 8;
            } else {
                cnt += n * currpush;
                n = 0; 
            }
            currpush++;
        }
        return cnt;
        
        
    }
};