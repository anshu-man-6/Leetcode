class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int num1=INT_MIN;
        int num2=INT_MIN;

        for(int i:nums){
            if(num1==INT_MIN){
                num1=i;
            }
            else{
                if(i>num1){
                    num2=max(num2,num1);
                    num1=i;
                }
                else{
                     num2=max(num2,i);
                }
            }
        }

        return (num1-1)*(num2-1);
        
    }
};