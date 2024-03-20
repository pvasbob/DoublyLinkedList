Visual Studio: 2019
Windows SDK Version: 10.0

Pressing Ctrl + F5 builds the projects. The first time might fail because the GoogleTest.lib file needs to be copied to the DoublyLinkedList project. After doing this, the second compilation attempt will succeed.

Description: This project implements a doubly linked list data structure in C++. The doubly linked list allows elements to be added, removed, and searched efficiently. It provides operations such as adding nodes, removing nodes, checking if the list contains a specific element, clearing the list, and printing the list contents. The implementation is templated, allowing it to work with different data types. The project also includes unit tests using the Google Test framework to verify the correctness of the implementation.

Files:

DoublyLinkedList.h: This header file contains the declaration of the Node and DoublyLinkedList classes. The Node class represents a node in the doubly linked list, storing the data and pointers to the previous and next nodes. The DoublyLinkedList class provides the public interface for interacting with the doubly linked list, including functions for adding nodes, removing nodes, checking if the list is empty, clearing the list, and printing the list contents.

DoublyLinkedList.cpp: This source file contains the implementation of the member functions of the DoublyLinkedList class. It defines the logic for adding nodes, removing nodes, clearing the list, and printing the list contents. The implementation is templated, allowing it to work with different data types. The file also includes explicit instantiation of the template for commonly used data types such as int and std::string.

DoublyLinkedListTest.cpp: This source file contains the unit tests for the doubly linked list implementation using the Google Test framework. It includes test cases for various scenarios, such as adding nodes, removing nodes, clearing the list, handling different data types, and working with an empty list. The tests verify the expected behavior of the doubly linked list and provide verbose output to illustrate the operations being performed and the state of the list during the test execution.

Google Test Framework: The project utilizes the Google Test framework for unit testing. Google Test is a popular C++ testing framework that provides a rich set of assertions and tools for writing and running tests. It allows you to define test cases, assert expected behavior, and generate detailed test reports. In this project, the DoublyLinkedListTest.cpp file contains the test cases written using the Google Test macros and assertions. The tests ensure the correctness of the doubly linked list implementation by verifying the expected behavior under different scenarios. The Google Test framework is integrated into the project, and the tests can be run separately to validate the functionality of the doubly linked list.