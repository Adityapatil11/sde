#include "linkedlist.h";

Node<int>* arr2ll(vector<int> &arr){
    if(arr.empty()){
        return nullptr;
    }
    Node<int>* head = new Node<int>(arr[0]);
    Node<int>* current = head;

    for(int i=1;i<arr.size();i++){
        current->next = new Node<int>(arr[i]);
        current = current->next;
    }
    return head;
}