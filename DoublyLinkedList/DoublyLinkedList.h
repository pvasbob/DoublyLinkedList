#pragma once

#include <iostream>

template <typename T>
class Node {
public:
    T data;
    Node<T>* prev;
    Node<T>* next;

    Node(const T& data) : data(data), prev(nullptr), next(nullptr) {}
};

template <typename T>
class DoublyLinkedList {
private:
    Node<T>* head;
    Node<T>* tail;

public:
    DoublyLinkedList() : head(nullptr), tail(nullptr) {}

    void addNode(const T& data);
    void removeNode(const T& data);
    bool contains(const T& data) const;
    bool isEmpty() const;
    void clear();
    void printList() const;

    ~DoublyLinkedList() {
        clear();
    }
};

template <typename T>
bool DoublyLinkedList<T>::isEmpty() const {
    return head == nullptr;
}