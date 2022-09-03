class Solution {
public:
    int maxArea(vector<int>& arr) {
        int i = 0;
        int j = arr.size()-1;
        int maxi=0;
        while(i<j)
        {
            int height = min(arr[i],arr[j]);
            int width = j-i;
            
            if(arr[i]>arr[j]){
                j--;
            }else{
                i++;
            }
            
            maxi = max(maxi,height*width);
            
        }
        
        return maxi;
        
    }
};
