#include<iostream>
#include <vector>
using namespace std;
int main() 
{
    vector<int> vec;
    int num = 0;
    for(int i = 0; i < 5; i++){
        cin>>num;
        vec.push_back(num);
        num++;
    }
    for(int key : vec){
        cout<<key<<" ";
    }
     return 0;
}