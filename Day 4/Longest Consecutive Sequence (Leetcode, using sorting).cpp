class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int cnt=1,mx=0,i,prv;
        if(nums.empty())  //if nums is empty it can give RE so we mention already that condition
            return 0;
        sort(nums.begin(),nums.end()); //sorting makes consecutive elements come together, NOTE: here we cam take elements in any order that's why we can use sorting
        prv=nums[0];
        for(i=0;i<nums.size();i++){
            if(nums[i]==prv+1){
                cnt++;
                prv=nums[i];
            }
            else if(nums[i]>prv+1){
                mx=max(mx,cnt);
                cnt=1;
                prv=nums[i];
            }
            if(i==(nums.size()-1))
                mx=max(mx,cnt);
        }
        return mx;
    }
};
