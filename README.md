This project is a C++ program that implements a doubly linked list data structure for managing a list of integers. The program is split into three files:
-  IntList.cpp:
    * This file contains the implementation of the IntList class.
    * The IntList class represents a doubly linked list and provides methods for adding and removing integers at both the front and back of the list.
    * It uses dummy nodes to simplify list management and avoid edge cases.
    * Additionally, the class implements a printReverse method to print the list in reverse order.
    * The << operator is overloaded to allow easy printing of the list's contents.
-  IntList.h:
    * This header file defines the IntList class and its public and private members.
    * It also includes the definition of the IntNode structure, which represents nodes within the linked list.
-  main.cpp:
    * This is the main program file that demonstrates the functionality of the IntList class.
    * It creates an instance of the IntList, adds integers to the front and back of the list, and prints the list's contents.
    * It also showcases the printReverse method and removal of values from both the front and back of the list.
Overall, this project is a practical implementation of a doubly linked list in C++, showcasing key concepts such as dynamic memory allocation, linked data structures, operator overloading, and class design principles. It serves as an example of how to create and manipulate linked lists for integer data in C++.
