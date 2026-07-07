class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum=0;
        long long no=0;
        string ch=to_string(n);
       for(char c:ch){
        if(c!='0'){
            no*=10;
            no+=c-'0';
            sum+=c-'0';
        }
       }

       return no*sum;
        
    }
};