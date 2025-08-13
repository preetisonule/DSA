// Solved

#include<iostream>
#include<vector>
using namespace std;
int main() 
{
    int ans = 0;
    vector<int> arr = {1, 2, 3, 3, 4};
    for(int i =0; i<arr.size();i++){
        ans  = ans^arr[i];
    }
    for(int i =1; i<arr.size();i++){
        ans  = ans^i;
    }
    cout<<ans;
     return 0;
}