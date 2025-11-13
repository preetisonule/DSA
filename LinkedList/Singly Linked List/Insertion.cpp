// all insertion done.   
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

Node* insertHead(Node* head,int data){
    Node* node = new Node(data);
    Node* temp = head;
    node->next=head->next;
    head = node;
    free(temp);
    return head;
}

Node* insertTail(Node* head, int data){
    Node* node = new Node(data);
    Node* temp = head;
     
    return head;
}

Node* insertPos(Node* head, int data, int k){
    Node* node = new Node(data);
    Node* temp = head;
    int i = 1;
    while(i<k){
        temp = temp->next;
        i++;
    }
    node->next = temp->next;
    temp->next = node;
    return head;
}

int main() 
{
    vector<int> arr = {1,2,3, 4 ,7 ,9};
    Node* head = convertToLL(arr);
    // Traversing
    // Node* temp = insertHead(head,7);
    // Node* temp = insertTail(head,6);
    Node* temp = insertPos(head,6,3);
    temp = temp->next;
    while(temp){
        cout<<temp->data<<' ';
        temp = temp->next;
    }

     return 0;
}