class Solution {
public:
    void sortColors(vector<int>& nums) {  // Leetcode problem - sort an array of 0's ,1's and 2's without using extra space
                                          //idea- learnt from problem Moving Zeroes (Leetcode)
                                          //iterate over array and shift all 0' to beginning and also count 1's while iterating
                                          //after that , remaining places will be filled by 1's (we already counted how many of them are while iterating) and 2's
        int ind=0,cnt1=0,i;
        for(i=0;i<nums.size();i++){
            if(nums[i]==0){
                nums[ind]=0;
                ind++;
            }
            else if(nums[i]==1)
                cnt1++;
        }
        while(cnt1--){
            nums[ind]=1;
            ind++;
            
        }
        while(ind<nums.size()){
            nums[ind]=2;
            ind++;
        }
    }
};
