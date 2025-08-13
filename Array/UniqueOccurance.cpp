// Not Solved
#include<iostream>
using namespace std;
int main() 
{
    int arr[6] = {1, 1, 2, 2, 1, 3}; // true
    int c1,c2 = 0;
    bool ans = false;

    cout<<"Array before Operation: "<<endl;
    for(int i = 0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    for(int i = 0; i< 6; i++){
        if(arr[i]==arr[i+1]){
            c1++;
        }
        else{
            c2 = c1;
            c1 = 0;
        }
        if(c1 != c2){
            ans = true;
        }
        else{
            ans = false;
        }
    }
    cout<<endl<<ans;
     return 0;
}