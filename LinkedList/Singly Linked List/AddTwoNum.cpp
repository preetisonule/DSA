// Declaration done.
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
    return head->next;
}

Node* addTwoNum(Node* head1, Node* head2){
    Node* temp1 = head1;
    Node* temp2 = head2;
    int rem =0;
    vector<int> ans;
    while(temp1!=nullptr && temp2!=nullptr){
        if(temp1==nullptr){
            ans.push_back((temp2->data+rem));
            temp2 = temp2->next;
        }
        else if(temp2==nullptr){
            ans.push_back((temp1->data+rem));
            temp1 = temp1->next;
        }
        else{
            int nd = temp1->data + temp2->data + rem;
            if(nd>9){
            rem = nd/10;
            nd = nd%10;
            ans.push_back(nd);
        }
        else{
            rem = 0;
            ans.push_back(nd);
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
        }
    }
    ans.push_back(rem);
    Node* head3 = convertToLL(ans);
    return head3;

}

int main() 
{
    vector<int> arr1 = {2, 4, 6, 8};
    vector<int> arr2 = {3, 8, 7};
    Node* head1 = convertToLL(arr1);
    Node* head2 = convertToLL(arr2);
    Node* head3 = addTwoNum(head1, head2);
    // Traversing
    Node* temp = head3->next;
    while(temp){
        cout<<temp->data<<' ';
        temp = temp->next;
    }

     return 0;
}