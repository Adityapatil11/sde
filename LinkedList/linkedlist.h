#ifndef LINKEDLIST_H
#define LINKEDLIST_H

using namespace std;
#include <vector>

template <typename T>

class Node{
    public:
        T data;
        Node<T> *next;
    
        Node(T data1,Node<T>* next1){
            data = data1;
            next = next1;
        }  

        Node(T data1){
            data = data1;
            next = nullptr;
        }
        
};

Node<int>* arr2ll(vector<int> &arr);

#endif