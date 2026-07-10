class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        int ans=0;
        priority_queue<int>maxHeap(piles.begin(), piles.end());
        
             //total sum
        for(int i=0;i<piles.size();i++){
            ans+=piles[i];
        }
        
        while(k--&&maxHeap.size()>0){
           int topp=maxHeap.top();
           maxHeap.pop();
           ans-=topp/2;
           maxHeap.push(topp-topp/2);
            
        }
        
        return ans;
    }
};