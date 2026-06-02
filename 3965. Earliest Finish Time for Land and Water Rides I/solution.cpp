class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {

   int n=landStartTime.size();
   int m=waterStartTime.size();
   int ans=INT_MAX;


   for(int i=0;i<n;i++){
    int ls=landStartTime[i];
    int ld=landDuration[i];
     for(int j=0;j<m;j++){
       int ws=waterStartTime[j];
       int wd=waterDuration[j];


       // first scenerio land->water

       int finish2=max(ls+ld,ws)+wd;



        // Second scenerio water->land

       int finish1=max(ws+wd,ls)+ld;

       ans=min({ans,finish1,finish2});


     }
   }
        return ans;

        
    }
};