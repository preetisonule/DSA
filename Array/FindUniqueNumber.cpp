// Solved

#include<iostream>
using namespace std;
int main() 
{
    int arr[7] = {1, 1, 7, 7, 8, 5, 5};
    int ans = 0;
    cout<<"Array before Operation: "<<endl;
    for(int i = 0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    for(int i =0; i<7; i++){
        ans = ans^(arr[i]);
    }
    cout<<endl<<ans;
     return 0;
}