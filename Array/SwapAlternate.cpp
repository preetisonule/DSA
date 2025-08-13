// Solved

#include<iostream>
using namespace std;
int main() 
{
    int arr[6] = {1, 2, 7, 8, 5, 8};
    cout<<"Array before Operation: "<<endl;
    for(int i = 0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    for(int i = 0; i<6; i++){
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
        i = i+1;
    }
    cout<<endl<<"Array after Operation: "<<endl;
    for(int i = 0;i<6;i++){
        cout<<arr[i]<<" ";
    }
     return 0;
}