#include "linkedlist.h";
#include <iostream>;

Node<int> *arr2ll(vector<int> &arr)
{
    if (arr.empty())
    {
        return nullptr;
    }
    Node<int> *head = new Node<int>(arr[0]);
    Node<int> *current = head;

    for (int i = 1; i < arr.size(); i++)
    {
        current->next = new Node<int>(arr[i]);
        current = current->next;
    }
    return head;
}

void printll(Node<int> *head)
{
    Node<int> *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int lengthll(Node<int> *head)
{
    int cnt = 0;
    Node<int> *temp = head;
    while (temp != nullptr)
    {
        temp = temp->next;
        cnt++;
    }
    return cnt;
}

bool keypresent(Node<int> *head, int key)
{
    Node<int> *temp = head;
    while (temp != nullptr)
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

Node<int> *removehead(Node<int> *head)
{
    if (head == nullptr)
    {
        return head;
    }
    Node<int> *temp = head->next;
    delete head;
    return temp;
}

Node<int> *removetail(Node<int> *head)
{
    if (head == nullptr || head->next == nullptr)
    {
        return nullptr;
    }
    Node<int> *temp = head;
    while (temp->next->next != nullptr)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}