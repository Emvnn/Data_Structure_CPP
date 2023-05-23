# The meaning of Data : 

Since the invention of computers, people have been using the term "Data" to refer to Computer Information, either transmitted or stored. However, there is data that exists in order types as well. Data can be numbers or texts written on a piece of paper, in the form of bits and bytes stored inside the memory of electronic devices, or facts stored within a person's mind. As the world started modernizing, this data became a significant aspect of everyone's day-to-day life, and various implementations allowed them to store it differently.

Data is a collection of facts and figures or a set of values or values of a specific format that refers to a single set of item values. The data items are then classified into sub-items, which is the group of items that are not known as the simple primary form of the item.

Let us consider an example where an employee name can be broken down into three sub-items: First, Middle, and Last. However, an ID assigned to an employee will generally be considered a single item.

![alt text](https://static.javatpoint.com/ds/images/ds-introduction.png)

# The meaning of Data Structure :

Data Structure is a branch of Computer Science. The study of data structure allows us to understand the organization of data and the management of the data flow in order to increase the efficiency of any process or program. Data Structure is a particular way of storing and organizing data in the memory of the computer so that these data can easily be retrieved and efficiently utilized in the future when required. The data can be managed in various ways, like the logical or mathematical model for a specific organization of data is known as a data structure.

The data structure name indicates itself that organizing the data in memory. There are many ways of organizing the data in the memory . Array is a collection of memory elements in which data is stored sequentially,i.e., one after another. In other words, we can say that array stores the elements in a continuous manner. This organization of data is done with the help of an array of data structures. There are also other ways to organize the data in memory.

Data Structures are the main part of many Computer Science Algorithms as they allow the programmers to manage the data in an effective way. It plays a crucial role in improving the performance of a program or software, as the main objective of the software is to store and retrieve the user's data as fast as possible.

# The scope of a particular data model depends on two factors:

First, it must be loaded enough into the structure to reflect the definite correlation of the data with a real-world object.

Second, the formation should be so straightforward that one can adapt to process the data efficiently whenever necessary.
Some examples of Data Structures are Arrays, Linked Lists, Stack, Queue, Trees, etc. Data Structures are widely used in almost every aspect of Computer Science, i.e., Compiler Design, Operating Systems, Graphics, Artificial Intelligence, and many more.

# Types of Data Structures

There are two types of data structures:

- **Primitive data structure :**
The primitive data structures are primitive data types. The int, char, float, double, and      pointer are the primitive data structures that can hold a single value.
  
- **Non-primitive data structure**

  - **Linear data structure**
  
    - **Static Data Structures :**
     The data structures having a fixed size are known as Static Data Structures. The memory for these data structures is allocated at the compiler time, and their size cannot be changed by the user after being compiled; however, the data stored in them can be altered.
The **Array** is the best example of the Static Data Structure as they have a fixed size, and its data can be modified later.
    - **Dynamic Data Structures :**
     The data structures having a dynamic size are known as Dynamic Data Structures. The memory of these data structures is allocated at the run time, and their size varies during the run time of the code. Moreover, the user can change the size as well as the data elements stored in these data structures at the run time of the code.
**Linked Lists**, **Stacks**, and **Queues** are common examples of dynamic data structures

  - **Non-linear data structure :**
   Non-Linear Data Structures are data structures where the data elements are not arranged in sequential order. Here, the insertion and removal of data are not feasible in a linear manner. There exists a hierarchical relationship between the individual data items. like: **Trees** and **Graphs**
   
![alt text](https://static.javatpoint.com/ds/images/ds-introduction2.png)


| **Linear Data Structures**  | **Non Linear Data Structures** |
| ------------- | ------------- |
| The data items are arranged in sequential order, one after the other. |	The data items are arranged in non-sequential order (hierarchical manner).|
| All the items are present on the single layer. |	The data items are present at different layers.|
|It can be traversed on a single run. That is, if we start from the first element, we can traverse all the elements sequentially in a single pass.|	It requires multiple runs. That is, if we start from the first element it might not be possible to traverse all the elements in a single pass.|
|The memory utilization is not efficient.|	Different structures utilize memory in different efficient ways depending on the need.|
|The time complexity increase with the data size.|	Time complexity remains the same.|
|Example: Arrays, Stack, Queue |	Example: Tree, Graph, Map |


# 1. Array
In an array, elements in memory are arranged in continuous memory. All the elements of an array are of the same type. And, the type of elements that can be stored in the form of arrays is determined by the programming language.

![alt text](https://www.programiz.com/sites/tutorial2program/files/array_.png)

# 2. Stack
In stack data structure, elements are stored in the LIFO principle. That is, the last element stored in a stack will be removed first.
It works just like a pile of plates where the last plate kept on the pile will be removed first.

![alt text](https://www.programiz.com/sites/tutorial2program/files/stack_dsa.png)

# 3. Queue
Unlike stack, the queue data structure works in the FIFO principle where first element stored in the queue will be removed first.
It works just like a queue of people in the ticket counter where first person on the queue will get the ticket first.

![alt text](https://www.programiz.com/sites/tutorial2program/files/queue_dsa.png)

# 4. Linked List
In linked list data structure, data elements are connected through a series of nodes. And, each node contains the data items and address to the next node.

![alt text](https://www.programiz.com/sites/tutorial2program/files/linked-list_dsa.png)

# 1. Graph
In graph data structure, each node is called vertex and each vertex is connected to other vertices through edges.

![alt text](https://www.programiz.com/sites/tutorial2program/files/graph_dsa.png)

# 2. Trees
Similar to a graph, a tree is also a collection of vertices and edges. However, in tree data structure, there can only be one edge between two vertices.

![alt text](https://www.programiz.com/sites/tutorial2program/files/tree_dsa.png)


```bash
pip install foobar
```

## Usage

```python
import foobar

# returns 'words'
foobar.pluralize('word')

# returns 'geese'
foobar.pluralize('goose')

# returns 'phenomenon'
foobar.singularize('phenomena')
```
