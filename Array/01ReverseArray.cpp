// Time complexity: O(logn)

#include<iostream>
#include<vector>
using namespace std;

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() 
{
    vector<int> v= {1,2,3,4,5,6,7};
    for(int i = 0;i < v.size();i++){
        cout<<v[i]<<" ";
    }
    int l =0;
    int r=v.size()-1;
    while(l<r){
        swap(&v[l],&v[r]);
        l++;
        r--;
    }
    cout<<endl;
    for(int i = 0;i < v.size();i++){
        cout<<v[i]<<" ";
    }
     return 0;
}