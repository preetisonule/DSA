// Not Solved 

#include<iostream>
#include <vector>
using namespace std;
int main() 
{
    int N = 5;
    int M = 4;
    int i,j=0;
    vector<int> v;

    int arr1[N] = {1, 2, 3, 4, 5}; 
    int arr2[M] = {1, 3, 6, 8}; 

    while(i<N && j<M){
        if(arr1[i] == arr2[j]){
            v.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    cout<<v[0];
     return 0;
}