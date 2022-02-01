class Solution {
public:
    int maxArea(vector<int>& height) {
      int n=height.size();
        int i=0,j=n-1,maxarea=INT_MIN,area=0;
        while(i<j){
            if(height[i]<height[j]){
                area=height[i]*(j-i);
            }else{
                area=height[j]*(j-i);
            }
            maxarea=max(area,maxarea);
 if(height[i]<height[j]){
     i++;
 }else{
     j--;
 }        }
        return maxarea;
    }
};