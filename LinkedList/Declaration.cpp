#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* convertToLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 0; i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int main() 
{
    vector<int> arr = {1,2,3, 4 ,7 ,9};
    Node* head = convertToLL(arr);
    // Traversing
    Node* temp = head->next;
    while(temp){
        cout<<temp->data<<' ';
        temp = temp->next;
    }

     return 0;
}