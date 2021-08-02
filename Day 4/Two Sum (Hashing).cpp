class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i,srch;
        unordered_map<int,int> mp;
        vector<int> vc;
        for(i=0;i<nums.size();i++)
            mp[nums[i]]=i+1;          //NOTE:Instead of storing frequncy of each element, we store its last position(pos+1 beacause it starts from 0)
                                      //so a position!=0 will determine its presence and last position must not be equl to where we are at now(last pos!=i)
        for(i=0;i<nums.size();i++){
            srch=target-nums[i];
            if(mp[srch]!=0&&(mp[srch]-1)!=i){
                vc.push_back(i);
                vc.push_back(mp[srch]-1);
                break;
            }
        }
        return vc;
    
    }
};
