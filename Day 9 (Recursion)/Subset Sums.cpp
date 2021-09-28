 vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int> ans;
        int sum=0;
        subsum(0,sum,arr,ans);
        return ans;
    }
    void subsum(int ind,int &sum, vector<int> &arr, vector<int> &ans){
        if(ind==arr.size()){
            ans.push_back(sum);
            return;
        }
        
        sum=sum+arr[ind];
        subsum(ind+1,sum,arr,ans);
        sum=sum-arr[ind];
        subsum(ind+1,sum,arr,ans);
    }
