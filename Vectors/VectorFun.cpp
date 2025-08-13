#include<iostream>
#include <vector>
using namespace std;
int main() 
{
    vector <int> vec;
    cout<<vec.size()<<endl;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    cout<<vec.size()<<endl;
    vec.pop_back();
    cout<<vec.size();
     return 0;
}