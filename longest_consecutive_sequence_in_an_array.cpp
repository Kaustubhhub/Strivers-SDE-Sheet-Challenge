#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &nums, int n) {
    if(nums.size()==0 || nums.size()==1)return nums.size();

        sort(nums.begin(),nums.end());

        int ans = 1;
        int count = 1;
        for(int i=1; i<nums.size(); i++){
            if(nums[i]==nums[i-1])continue;
            if(nums[i] == nums[i-1]+1){
                count++;
                ans = max(ans,count);
            }else{
                count = 1;
            }
        }

        return ans;
}

int main(){
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    vector<int>ans = lengthOfLongestConsecutiveSequence(arr,n);
}