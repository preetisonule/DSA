// Given a sorted array of integers nums with 0-based indexing, find the index of a specified target integer. If the target is found in the array, return its index. If the target is not found, return -1.
// Examples:
// Input: nums = [-1,0,3,5,9,12], target = 9

// Output: 4

// Explanation: The target integer 9 exists in nums and its index is 4
#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:
    int search(nums, int target){
     int l = 0;
     int h = sizeof(nums) - 1;
     while(l<=h){
       int mid = (l + (h-l))/2;
        if(target == nums[mid]){
            return mid;
        }
        else if(target<nums[mid]){
            h = mid - 1;
        }
        else{
            l = mid+1;
        }
     }
     return -1;
    }
};

int main(){
    vector<int> nums ={1, 2, 45, 56, 65, 66, 78, 79};
    int target = 45;
    Solution s1;
    int ans = s1.search(&nums, &target);
    cout<<ans;
    return 0;
}