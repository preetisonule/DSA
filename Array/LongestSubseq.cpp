#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main() 
{
    vector<int> nums = {7,6,1,4};
    for(int i = 0;i<nums.size();i++){
            int p = nums[i];
            int x;
            for(int j = i; j<nums.size();j++){
                // v2.push_back(nums[j]);
                x = p^nums[j];
            }
            nums.push_back(x);
        }
    sort(nums.begin(),nums.end());
    cout<<nums[nums.size()-1];
    
    return 0;
}

// 2 3 4
// 2^3 = 1 len = 2 j = 4 b = 1
// 1^4 = 5 len = 3
// 7 6 1 4 5
