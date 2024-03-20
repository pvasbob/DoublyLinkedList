#include "DoublyLinkedList.h"
#include <gtest/gtest.h>
#include <iostream>

TEST(DoublyLinkedListTest, AddNodes) {
    DoublyLinkedList<int> list;
    std::cout << "Adding nodes: 1, 2, 3" << std::endl;
    list.addNode(1);
    list.addNode(2);
    list.addNode(3);
    std::cout << "List contents: ";
    list.printList();
    EXPECT_FALSE(list.isEmpty()) << "List should not be empty";
    EXPECT_TRUE(list.contains(1)) << "List should contain 1";
    EXPECT_TRUE(list.contains(2)) << "List should contain 2";
    EXPECT_TRUE(list.contains(3)) << "List should contain 3";
}

TEST(DoublyLinkedListTest, RemoveNodes) {
    DoublyLinkedList<int> list;
    std::cout << "Adding nodes: 1, 2, 3" << std::endl;
    list.addNode(1);
    list.addNode(2);
    list.addNode(3);
    std::cout << "Removing node: 2" << std::endl;
    list.removeNode(2);
    std::cout << "List contents: ";
    list.printList();
    EXPECT_TRUE(list.contains(1)) << "List should contain 1";
    EXPECT_FALSE(list.contains(2)) << "List should not contain 2";
    EXPECT_TRUE(list.contains(3)) << "List should contain 3";
}

TEST(DoublyLinkedListTest, ClearList) {
    DoublyLinkedList<int> list;
    std::cout << "Adding nodes: 1, 2, 3" << std::endl;
    list.addNode(1);
    list.addNode(2);
    list.addNode(3);
    std::cout << "Clearing the list" << std::endl;
    list.clear();
    std::cout << "List contents: ";
    list.printList();
    EXPECT_TRUE(list.isEmpty()) << "List should be empty";
    EXPECT_FALSE(list.contains(1)) << "List should not contain 1";
    EXPECT_FALSE(list.contains(2)) << "List should not contain 2";
    EXPECT_FALSE(list.contains(3)) << "List should not contain 3";
}

TEST(DoublyLinkedListTest, StringList) {
    DoublyLinkedList<std::string> list;
    std::cout << "Adding nodes: \"Hello\", \"World\", \"!\"" << std::endl;
    list.addNode("Hello");
    list.addNode("World");
    list.addNode("!");
    std::cout << "List contents: ";
    list.printList();
    EXPECT_TRUE(list.contains("Hello")) << "List should contain \"Hello\"";
    EXPECT_TRUE(list.contains("World")) << "List should contain \"World\"";
    EXPECT_TRUE(list.contains("!")) << "List should contain \"!\"";
    std::cout << "Removing node: \"World\"" << std::endl;
    list.removeNode("World");
    std::cout << "List contents: ";
    list.printList();
    EXPECT_FALSE(list.contains("World")) << "List should not contain \"World\"";
}

TEST(DoublyLinkedListTest, EmptyList) {
    DoublyLinkedList<int> list;
    std::cout << "Empty list" << std::endl;
    std::cout << "List contents: ";
    list.printList();
    EXPECT_TRUE(list.isEmpty()) << "List should be empty";
    std::cout << "Removing node: 1 (from an empty list)" << std::endl;
    list.removeNode(1);
    EXPECT_TRUE(list.isEmpty()) << "List should still be empty";
}

int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}