class Solution {
public:
    

    int help(int n,vector<int>&mem){
        if(n==1||n==2){
            return n;
        }
        if(mem[n]!=-1){
            return mem[n];
        }
        return mem[n]=help(n-1,mem)+help(n-2,mem);
    }
    int climbStairs(int n) {
        vector<int>mem(n+1,-1);
        return help(n,mem);
        
        
    }
};