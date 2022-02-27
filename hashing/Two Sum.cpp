#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>&nums, int target){
    unordered_map<int, int> mp;
    vector<int>resInPairs;
    for(int i = 0; i < nums.size(); i++){
        int diff = target - nums[i];
        if(mp.find(diff) != mp.end()){
            resInPairs.push_back(mp.find(diff)->second);
            resInPairs.push_back(i);
            break;
        }
        mp.insert(pair<int,int>(nums[i], i));
    }
    return resInPairs;
}

int main(){
    vector<int>nums = {1,4,3,6,5,8};
    vector<int>res = twoSum(nums, 4);
    cout <<"indices are at: " << res[0] << " " << res[1] << "\n";
    return 0;
}
