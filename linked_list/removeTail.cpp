#include<bits/stdc++.h>
using namespace std;

struct Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1){
        data=data1;
        next=next1;
    }

    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

Node* convert(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* ptr = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        ptr->next=temp;
        ptr=temp;
    }
    return head;
}

void print(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}

Node* removeTail(Node* head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    Node* temp = head;
    while(temp->next->next != NULL){
        temp=temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
}

int main(){
    vector<int> arr={12,5,8,7};
    Node* head = convert(arr);
    removeTail(head);
    print(head);
    return 0;
}