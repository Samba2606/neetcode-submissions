class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int i=0;
        int j=n-1;
        int maxwater=0;

        while(i<j){
            int width=j-i;
            int height=min(heights[i],heights[j]);
            int area=width*height;
            maxwater=max(maxwater,area);
            if(heights[i]<heights[j]){
                i++;
            }else if(heights[j]<heights[i]){
                j--;
            }else if(heights[i]==heights[j]){
                j--;
            }

        }
       return maxwater; 
    }
};
