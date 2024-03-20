#include "DoublyLinkedList.h"

template <typename T>
void DoublyLinkedList<T>::addNode(const T& data) {
    Node<T>* newNode = new Node<T>(data);
    if (head == nullptr) {
        head = newNode;
        tail = newNode;
    }
    else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

template <typename T>
void DoublyLinkedList<T>::removeNode(const T& data) {
    Node<T>* current = head;
    while (current != nullptr) {
        if (current->data == data) {
            if (current == head) {
                head = current->next;
                if (head != nullptr)
                    head->prev = nullptr;
            }
            else if (current == tail) {
                tail = current->prev;
                if (tail != nullptr)
                    tail->next = nullptr;
            }
            else {
                current->prev->next = current->next;
                current->next->prev = current->prev;
            }
            delete current;
            return;
        }
        current = current->next;
    }
}

template <typename T>
bool DoublyLinkedList<T>::contains(const T& data) const {
    Node<T>* current = head;
    while (current != nullptr) {
        if (current->data == data)
            return true;
        current = current->next;
    }
    return false;
}

template <typename T>
void DoublyLinkedList<T>::clear() {
    Node<T>* current = head;
    while (current != nullptr) {
        Node<T>* temp = current;
        current = current->next;
        delete temp;
    }
    head = nullptr;
    tail = nullptr;
}

template <typename T>
void DoublyLinkedList<T>::printList() const {
    Node<T>* current = head;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

// Explicit instantiation of the template for the required type(s)
template class DoublyLinkedList<int>;
template class DoublyLinkedList<std::string>;