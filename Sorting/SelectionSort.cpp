#include<iostream>
using namespace std;
int main() 
{
    int arr[5] = {13, 23, 76, 45, 9};
    int n = 5;
    int min;
    int temp;
    for(int i = 0;i<n-1;i++){
        min = i;
        for(int j = i; j<=n-2;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
            temp = arr[i];
            arr[i]=  arr[min];
            arr[min] = temp ;
        }
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}