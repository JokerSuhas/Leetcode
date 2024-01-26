class Solution {
public:
    int maxArea(vector<int>& height) {
        int right = (int)height.size()-1;
        int left = 0;
        int result = 0;
        //check for area and we are trying to maximise height so which one is less we will change to next index 
        // if both heights are same it doesnt matter which index we are changing either right one or left one
        while(left < right ){

            result = max(result,min(height[left],height[right])*(right-left));

            if(height[right]>height[left]){
                left++;
            } else{
                right--;
            }
        }

        return result;
    }
};
