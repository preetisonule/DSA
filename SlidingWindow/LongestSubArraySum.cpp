// find the longest subarray whose sum is <= k

// Brute force
// => generate all the sub arrays O(n2)
//    Template: 
// => for(i 0->n-1){
//     for(j 0 -> n-1){

//         }
//     }


// better approach
// Sliding window [2, 3, 4, 5, 7] => O(2n)
// - l = 0, r = 0, sum = 0, maxLen = 0
// - shrink(l) & expand(r)
// - if sum > k, shrink: remove nums[l] and l++
// - if sum <= k, maxLen = max(maxlen, r-l+1)
// Template:
// while(r<n){
//     sum = sum + nums[r];

//     shrink, actually two condition in one loop,
//     check if sum > k and shrink :)
//     while(sum>k){
//         sum = sum -nums[l];
//         l++;
//     }

//     if(sum<=k){
//         maxLen = max(maxLen, r-l+1);
//     }
//     r++;
// }



// optimal approach
// same approach but optimising shrink
// if i am asked, what is the max length do i need to shrink 2 steps?

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int LogSubArrSum(vector<int>& nums, int k){
    int maxLength = 0;
    int l=0,r = 0;
    int sum = 0;
    while(r<nums.size()){
        sum = sum + nums[r];
        while(sum>k && l<=r){
            sum = sum - nums[l];
            l++;    // shrink window
        }
        if(sum<=k){
            maxLength = max(maxLength, (r-l+1));
        }
        r++;
    }
    return maxLength;

}


int main(){
    vector<int> nums={1,2,5,5,7};
    int k = 12;
    int maxLength = LogSubArrSum(nums,k);
    cout<< maxLength;
    return 0;
}