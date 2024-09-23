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

Node* removeK(Node* head, int k){
    if(head==NULL){
        return head;
    }
    if(k==1){
        Node*temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    int cnt = 0;
    Node* temp = head ;
    Node* prev = NULL;
    while(temp != NULL){
        cnt++;
        if(cnt==k){
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

int main(){
    vector<int> arr={12,5,8,7};
    int k = 2;
    Node* head = convert(arr);
    removeK(head, k);
    print(head);
    return 0;
}