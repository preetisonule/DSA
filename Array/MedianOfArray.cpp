#include<iostream>
#include<vector>
using namespace std;
int main() 
{
    vector<int> v1 = {2,3,6};
    vector<int> v2 = {1,2,7};
    for(int i = 0; i<v1.size();i++){
        if(v1[i]>v2[i]){
            v1.insert(v.begin(), v2[i]);
        }
        else if(v1[i]==v2[i]){
            v.insert(v1[i], v1[i]); // Dokha
        }
    }
    return 0;
}