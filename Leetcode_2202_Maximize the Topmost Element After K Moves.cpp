//2022-Maximize the Topmost Element After K Moves
class Solution {
public:
    int maximumTop(vector<int>& nums, int k) {
        if(k%2!=0&&nums.size()==1)//coner case where u will end up with empty array.
            return -1;
        if(k==1&&nums.size()>1)//case where k=1 so kth element is largest as all u can do is remove element i=0.
            return nums[1];
        if(k==0)                //if no moves given then u just return the 0th index.
            return nums[0];
        int max=INT_MIN;
        if(k>nums.size())       //condition when moves greater then the size of nums u just find the largetest element and return that.
        {
           max= *max_element (nums.begin(),nums.end());
        }
        else
        { max= *max_element (nums.begin(),nums.begin()+k-1); // when moves<= nums size
                                                            //then we have to find max form (0 to k-2)th index both included.                                                                           //as one move will be required to put the max back at top. 
            if(nums[k]>max)    //check if the kth element is greater then your current max
                max=nums[k];   //Then make nums[k]= max as then u would remove all the elements till k-1 index.
        }
        return max;
    }
};
