// all good
// all operation done
#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data){
        this->data = data;
        next = nullptr;
    }
};

Node* convertToLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node * mover = head;
    for(int i = 1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
Node* delHead(Node* head){
    if(head==NULL) return head;

    Node* temp = head;
    head = head->next;
    free(temp);
    return head;
}

Node* delTail(Node * head){
    Node* temp = head;
    while(temp->next->next!=nullptr){
        temp = temp->next;
    }
    free(temp->next);
    temp->next = nullptr;
    return head;
}

Node* delPos(Node* head,int k){
    Node* temp = head;
    int i = 1;
    while(i<k){
        temp = temp->next;
        i++;
    }
    Node* r = temp->next;
    temp->next = temp->next->next;
    free(r);
    return head;

}

int main() 
{
    vector<int> arr = {12,1,3,14};
    Node* head = convertToLL(arr);
    Node* temp = head;

    // Traverse original
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
    // temp = delHead(head);
    // temp = delTail(head);
    temp = delPos(head,2);

    // Traverse deleted head list
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

     return 0;
}