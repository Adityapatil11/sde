#include<iostream>
#include "linkedlist.h"

using namespace std;
int main()
{
    vector<int> vec = {10,9,8,7,6,5,4,3,2,1};

    Node<int>* head = arr2ll(vec);
    printll(head);
    cout<<"\nLength of Linked list is : "<<lengthll(head)<<"\n";
    cout<<boolalpha<<"Key present in linked list : "<<keypresent(head,5)<<"\n";
    cout<<boolalpha<<"Key present in linked list : "<<keypresent(head,11)<<"\n";    
    return 0;
}