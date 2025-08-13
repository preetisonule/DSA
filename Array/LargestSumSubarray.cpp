#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() 
{
    int sum = 0;
    int maxSum = 0;
    vector<int> nums = {12, -2, 9, 2, -2};
    for(int i = 0;i<nums.size()-1;i++){
        sum = 0;
        for(int j = i; j<nums.size()-1;j++){
            sum = sum + nums[j];
            maxSum = max(maxSum,sum);
        }
    }
    cout<<"Max Sum is :"<<maxSum;
    return 0;
}