#include<iostream>
using namespace std;
int main() 
{
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i< n; i++){
        cin>>arr[i];
    }

    int q;
    cin >> q;

    // pre computation

    int hash[13] = {0};
    for(int i=0;i<n;i++){
        hash[arr[i]] += 1;
    }

    while(q--){
        int number;
        cin>> number;
        cout<<hash[number]<<endl;
    }

    return 0;
}