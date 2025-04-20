#include <iostream>
#include "linkedlist.h"

using namespace std;
int main()
{
    vector<int> vec = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    Node<int> *head = arr2ll(vec);
    printll(head);
    cout << "\nLength of Linked list is : " << lengthll(head) << "\n";
    cout << boolalpha << "Key present in linked list : " << keypresent(head, 5) << "\n";
    cout << boolalpha << "Key present in linked list : " << keypresent(head, 11) << "\n";

    Node<int> *new_head = removehead(head);
    printll(new_head);
    cout << "\nLength of Linked list is : " << lengthll(new_head) << "\n";

    Node<int> *new_head2 = removetail(new_head);
    printll(new_head2);
    cout << "\nLength of Linked list is : " << lengthll(new_head2) << "\n";

    Node<int> *new_head3 = removekthelement(new_head2, 5);
    printll(new_head3);
    cout << "\nLength of Linked list is : " << lengthll(new_head3) << "\n";
    
    Node<int> *new_head4 = removeelement(new_head3, 7);
    printll(new_head4);
    cout << "\nLength of Linked list is : " << lengthll(new_head4) << "\n";

    Node<int> *new_head5 = inserthead(new_head4, 11);
    printll(new_head5);
    cout << "\nLength of Linked list is : " << lengthll(new_head5) << "\n";

    Node<int> *new_head6 = inserttail(new_head5, 12);
    printll(new_head6);
    cout << "\nLength of Linked list is : " << lengthll(new_head6) << "\n";

    Node<int> *new_head7 = insertkthelement(new_head6, 10, 13);
    printll(new_head7);
    cout << "\nLength of Linked list is : " << lengthll(new_head7) << "\n";
    return 0;
}