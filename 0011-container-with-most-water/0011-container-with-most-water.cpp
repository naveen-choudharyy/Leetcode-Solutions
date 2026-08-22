class Solution {
public:
    int maxArea(vector<int>& height) {
        int first = 0;
        int last  = height.size() - 1;
        int  sum = 0, length, breadth;

        while (first < last) 
        {
            length = last - first;
            if(height[first]<height[last]){
            breadth = height[first];
            first++;
            }
            else{
            breadth = height[last];
            last--;
            }
             if(sum<length*breadth)
                sum = length*breadth;
        }
       

        return sum;
    }
};