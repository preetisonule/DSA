#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* back;
    public:
    Node(int data1,Node* next1,Node* back1){
        data = data1;
        next = next1;
        back = back1;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

Node* convertToDLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i =1; i<arr.size();i++){
        Node* temp = new Node(arr[i],nullptr,prev);
        prev->next = temp; //to connect fully
        prev = temp; // for next element
    }
    return head;
}

Node* delHead(Node* head){
    Node* temp = head;
    head = head->next;
    head->back = nullptr;
    free(temp);
    return head;
}

Node* delTail(Node* head){
    Node* temp = head;
    while(temp->next->next){
        temp = temp->next;
    }
    Node* tail = temp->next;
    temp->next = nullptr;
    free(tail);
    return head;
}

Node* delPos(Node* head,int k){
    if(k==1){
        head = delHead(head);
        return head;
    }
    int c = 0;
    Node* temp = head;
    while(c<k){
        temp = temp->next;
        c++;
    }
    if(temp->next->next==nullptr){
        head = delTail(head);
        return head;
    }
    Node* p = temp->next;
    temp->next = temp->next->next;
    temp->next->back = temp;
    free(p);
    return head;
}

int main() 
{
    vector<int> arr = {1,3,6,4,9};
    Node* head = convertToDLL(arr);
    // Node* nHead = delHead(head);
    // Node* nHead = delTail(head);
    Node* nHead = delPos(head,2);
    Node* temp = nHead;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    return 0;
}