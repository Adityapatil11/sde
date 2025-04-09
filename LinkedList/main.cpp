#include<iostream>
#include "linkedlist.h"

using namespace std;
int main()
{
    vector<int> vec = {10,9,8,7,6,5,4,3,2,1};

    Node<int>* head = arr2ll(vec);
    cout<<head->data<<"\n";
    return 0;
}