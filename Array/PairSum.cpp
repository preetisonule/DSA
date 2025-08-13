// Solved 

#include<iostream>
#include<vector>

using namespace std;
int main() 
{
    int arr[6] = {2,3,5,8,10,11};
    int sum = 21;
    vector<int> v;
    int i = 0;
    int j = 5;
    while(i<=j){
        if(arr[i] + arr[j] == sum){
            v.push_back(arr[i]);
            v.push_back(arr[j]);
            break;
        }
        else if(arr[i] + arr[j] > sum){
            j--;
        }
        else{
            i++;
        }
    }
    cout<<v[0]<<" "<<v[1];
    return 0;
}