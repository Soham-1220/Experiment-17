##  AIM
The aim of these programs is to understand and implement the **singly linked list** data structure in C++ through basic operations such as:

1. **Creating a single node** in memory and accessing its data.  
2. **Inserting nodes at the end** of a linked list.  
3. **Inserting nodes at the beginning** of a linked list.  

These programs provide a foundation for linked list operations, which are essential in **data structures and algorithms (DSA)**. By studying them, we learn how dynamic memory allocation works, how pointers connect nodes, and how linked lists differ from arrays in terms of flexibility and efficiency.



##  THEORY

### 1. What is a Linked List?  
A **linked list** is a linear data structure where elements (called **nodes**) are stored in non-contiguous memory locations. Unlike arrays, which use fixed-size memory blocks, linked lists dynamically allocate memory as needed.  

Each node in a singly linked list has two parts:  
1. **Data** – stores the actual information (e.g., an integer).  
2. **Pointer (next)** – stores the address of the next node in the list.  

The **head pointer** points to the first node of the list. If the list is empty, the head is `NULL`.  



### 2. Why Linked Lists Instead of Arrays?  
- **Dynamic memory allocation** → Linked lists do not require a fixed size like arrays.  
- **Efficient insertion and deletion** → Adding/removing nodes at the beginning or middle is faster, as no shifting of elements is required.  
- **Memory utilization** → Nodes can be scattered across memory, not necessarily contiguous.  

However, linked lists also have disadvantages:  
- **Extra memory usage** (due to pointer storage).  
- **Slower random access** (cannot directly access an element by index).  



### 3. Types of Linked Lists
- **Singly Linked List** → Each node points only to the next node.  
- **Doubly Linked List** → Each node points to both the previous and next nodes.  
- **Circular Linked List** → Last node points back to the first node.  



### 4. Basic Operations Implemented
1. **Creating a single node** → Introduction to node structure and memory allocation.  
2. **Insertion at the end** → Adding a new node to the last position of the list.  
3. **Insertion at the start** → Adding a new node before the current head node.  

These form the foundation for advanced linked list operations such as deletion, searching, reversing, and traversing.  


###  Algorithm


##  PROGRAM 1: Creating a Single Node  
1. Start the program.  
2. Define a `struct Node` with `int data` and `Node* next`.  
3. Create a new node dynamically using `new`.  
4. Assign `10` to the node’s `data`.  
5. Set the `next` pointer to `NULL` (since only one node exists).  
6. Print the data stored in the node.  
7. End the program.  



## PROGRAM 2: Insertion at the End of a Linked List
###  Algorithm
1. Start the program.
2. Define a struct Node with data and next.
3. Define a function insertEnd(head, value):
4. Create a new node with the given value.
5.If head == NULL, assign the new node as head.
6.Otherwise, traverse the list to the last node.
7.Set the last node’s next pointer to the new node.
8.Define a function display(head) to print all nodes.
9.In main():
Initialize head = NULL.
Call insertEnd multiple times to add 10, 20, 30.
Call display(head) to print the list.
10.End program.



## PROGRAM 3: Insertion at the Start of a Linked List

1. Start the program.
2. Define a struct Node with data and next.
3.Define a function insertStart(head, value):
4.Create a new node.
5.Set its next pointer to current head.
6.Make the new node the new head.
7.Define a function display(head) to print all nodes.
8.In main():
Initialize head = NULL.
Call insertStart multiple times to add 10, 20, 30.
Call display(head) to print the list.
9.End program.



##  CONCLUSION

Through the study and implementation of these three programs—creating a single node, inserting at the end, and inserting at the start—we have gained a deeper understanding of the fundamentals of **singly linked lists** in C++.  

A linked list is one of the most important data structures in computer science, primarily because it introduces the idea of **dynamic memory allocation** and **pointer manipulation**. Unlike arrays, which require a fixed block of contiguous memory, linked lists allow nodes to be scattered across memory. This flexibility enables us to insert and delete elements efficiently without worrying about shifting data, which is a major drawback of arrays.  

In the **first program**, we created a single node dynamically using the `new` operator. This small step forms the backbone of linked lists since every operation—whether insertion, deletion, or traversal—revolves around the creation and manipulation of nodes. By assigning a data value and setting the `next` pointer to `NULL`, we establish the concept of a terminating node in a linked list. This reinforces the importance of the `head` pointer, which always serves as the starting point of the list. If the head is lost, the entire list becomes inaccessible.  

The **second program** demonstrated **insertion at the end of a linked list**. This method is useful when we want to build a list in the same order as input is received. For example, when reading data sequentially from a file or when maintaining a queue structure, inserting at the end is essential. However, this operation requires **traversal** from the head node to the last node, making it less efficient compared to insertion at the beginning. Despite this, it preserves order and ensures that the newly added node becomes the new last element with its `next` pointer set to `NULL`.  

The **third program** implemented **insertion at the start of the list**. This method is highly efficient because it does not require traversal. Instead, it directly links the new node to the existing head and then updates the head to point to this new node. This operation is particularly useful in scenarios where the most recently added element needs to be accessed first, such as in a stack (Last-In-First-Out structure). It is also commonly used in reverse-building linked lists, where we want to construct a list in reverse order quickly.  

From these experiments, we can conclude several important points:  

1. **Head pointer is vital**: The head serves as the gateway to the entire list. Without proper maintenance of the head pointer, the linked list cannot be accessed or manipulated.  

2. **Different insertion methods serve different purposes**:  
   - Insertion at the **end** maintains the natural order of data.  
   - Insertion at the **start** allows faster updates and is efficient for stack-like operations.  

3. **Traversal is central to linked list operations**: Many operations, such as insertion at the end, searching for an element, and deletion of a specific node, require traversal from the head until the target node is found. Understanding traversal is therefore key to mastering linked lists.  

4. **Linked lists highlight trade-offs**: While they provide flexibility and dynamic memory management, they also require extra memory for pointers and are slower for random access compared to arrays. Choosing between arrays and linked lists depends on the problem at hand.  

5. **Foundation for advanced data structures**: The knowledge gained from these basic linked list operations serves as a stepping stone for more complex structures such as:  
   - **Doubly linked lists**, where nodes have pointers to both previous and next elements.  
   - **Circular linked lists**, where the last node connects back to the first.  
   - **Applications in stacks, queues, and hash tables**, where linked lists form the underlying mechanism.  

In real-world applications, linked lists are widely used in scenarios where frequent insertion and deletion operations are required. Examples include task scheduling, memory management, and undo/redo functionality in software.  
