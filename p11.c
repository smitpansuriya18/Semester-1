/*
 * C Program to Implement a Queue using an Array
 */
#include <stdio.h>
 
#define MAX 50
 
void insert();
void delete();
void display();
int queue_array[MAX];
int rear = - 1;
int front = - 1;
main()
{
    int choice;
    while (1)
    {
        printf("1.Insert element to queue \n");
        printf("2.Delete element from queue \n");
        printf("3.Display all elements of queue \n");
        printf("4.Quit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            insert();
            break;
            case 2:
            delete();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(1);
            default:
            printf("Wrong choice \n");
        } /* End of switch */
    } /* End of while */
} /* End of main() */
 
void insert()
{
    int add_item;
    if (rear == MAX - 1)
    printf("Queue Overflow \n");
    else
    {
        if (front == - 1)
        /*If queue is initially empty */
        front = 0;
        printf("Inset the element in queue : ");
        scanf("%d", &add_item);
        rear = rear + 1;
        queue_array[rear] = add_item;
    }
} /* End of insert() */
 
void delete()
{
    if (front == - 1 || front > rear)
    {
        printf("Queue Underflow \n");
        return ;
    }
    else
    {
        printf("Element deleted from queue is : %d\n", queue_array[front]);
        front = front + 1;
    }
} /* End of delete() */
 
void display()
{
    int i;
    if (front == - 1)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
        for (i = front; i <= rear; i++)
            printf("%d ", queue_array[i]);
        printf("\n");
    }
} /* End of display() */
Program Explanation
1. Ask the user for the operation like insert, delete, display and exit.
2. According to the option entered, access its respective function using switch statement. Use the variables front and rear to represent the first and last element of the queue.
3. In the function insert(), firstly check if the queue is full. If it is, then print the output as “Queue Overflow”. Otherwise take the number to be inserted as input and store it in the variable add_item. Copy the variable add_item to the array queue_array[] and increment the variable rear by 1.
4. In the function delete(), firstly check if the queue is empty. If it is, then print the output as “Queue Underflow”. Otherwise print the first element of the array queue_array[] and decrement the variable front by 1.
5. In the function display(), using for loop print all the elements of the array starting from front to rear.
6. Exit.

advertisement

Runtime Test Cases
1.Insert element to queue
2.Delete element from queue
3.Display all elements of queue
4.Quit
Enter your choice : 1
Inset the element in queue : 10
1.Insert element to queue
2.Delete element from queue
3.Display all elements of queue
4.Quit
Enter your choice : 1
Inset the element in queue : 15
1.Insert element to queue
2.Delete element from queue
3.Display all elements of queue
4.Quit
Enter your choice : 1
Inset the element in queue : 20
1.Insert element to queue
2.Delete element from queue
3.Display all elements of queue
4.Quit
Enter your choice : 1
Inset the element in queue : 30
1.Insert element to queue
2.Delete element from queue
3.Display all elements of queue
4.Quit
Enter your choice : 2
Element deleted from queue is : 10
1.Insert element to queue
2.Delete element from queue
3.Display all elements of queue
4.Quit
Enter your choice : 3
Queue is :
15 20 30
1.Insert element to queue
2.Delete element from queue
3.Display all elements of queue
4.Quit
Enter your choice : 4
Sanfoundry Global Education & Learning Series – 1000 C Programs.

Here’s the list of Best Reference Books in C Programming, Data-Structures and Algorithms

If you wish to look at other example programs on Arrays, go to C Programming Examples on Arrays. If you wish to look at programming examples on all topics, go to C Programming Examples.
Participate in the Sanfoundry Certification contest to get free Certificate of Merit. Join our social networks below and stay updated with latest contests, videos, internships and jobs!
Youtube | LinkedIn | Instagram | Facebook | Twitter | Pinterest
« Prev - C Program to Implement a Stack
» Next - C Program to Implement Queue Data Structure using Linked List
Categories C Programs - Queue, Data Structures in C
Recommended Articles:
C Program to Implement Queue Functions Using Arrays and Macros
C++ Program to Implement Queue
C++ Program to Implement Circular Queue
C Program to Implement Priority Queue to Add and Delete Elements
C Program to Implement various Queue Functions using Dynamic Memory Allocation
C++ Program to Implement Priority Queue
C Program to Implement Queue Data Structure using Linked List
Java Program to Implement Double Ended Queue
C++ Program to Implement Queue in STL
Java Program to Implement Queue
Manish Bhojasia - Founder & CTO at SanfoundryManish Bhojasia, a technology veteran with 20+ years @ Cisco & Wipro, is Founder and CTO at Sanfoundry. He is Linux Kernel Developer & SAN Architect and is passionate about competency developments in these areas. He lives in Bangalore and delivers focused training sessions to IT professionals in Linux Kernel, Linux Debugging, Linux Device Drivers, Linux Networking, Linux Storage, Advanced C Programming, SAN Storage Technologies, SCSI Internals & Storage Protocols such as iSCSI & Fiber Channel. Stay connected with him @ LinkedIn | Youtube | Instagram | Facebook | Twitter
Subscribe Sanfoundry Newsletter and Posts


Name*
 
Email*
 Subscribe
Interview Preparation
C Algorithms
C - Numerical Problems
C - Combinatorial Problems
C - Graph Problems
C - Hard Graph Problems
C - Computation Geometry
C - Sets & Strings
C - Data-Structures
C++ Algorithms
C++ - Numerical Problems
C++ - Combinatorial Problems
C++ - Graph Problems
C++ - Hard Graph Problems
C++ - Computation Geometry
C++ - Sets & Strings
C++ - Data-Structures
C++ - STL Library
Java Algorithms
Java - Numerical Problems
Java - Combinatorial Problems
Java - Graph Problems
Java - Hard Graph Problems
Java - Computation Geometry
Java - Sets & Strings
Java - Data-Structures
Java - Collection API Problems
Python Problems
Dynamic Programming
Data Structures MCQs
Data Structures I
Data Structures II

Programming Language MCQs
Python MCQs
Java MCQs
C MCQs
C++ MCQs
C# MCQs
Linux MCQs
PHP Questions
C Programming Examples




Work-From-Home Internships
Python Internship
Java Internship
Javascript Internship
C++ Internship
C Internship
PHP Internship

Evergreen Careers
Developer Tracks
Linux Kernel Developer
Linux Driver Developer
Linux Network Developer
SAN Developer

