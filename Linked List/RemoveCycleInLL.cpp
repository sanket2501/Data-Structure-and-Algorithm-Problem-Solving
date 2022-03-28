/*
Difficulty Medium
Given a linked list of N nodes such that it may contain a loop.

A loop here means that the last node of the link list is connected to the node at position X. If the link list does not have any loop, X=0.

Remove the loop from the linked list, if it is present.  


Example 1:

Input:
N = 3
value[] = {1,3,4}
X = 2
Output: 1
Explanation: The link list looks like
1 -> 3 -> 4
     ^    |
     |____|    
A loop is present. If you remove it 
successfully, the answer will be 1. 

Example 2:
Input:
N = 4
value[] = {1,8,3,4}
X = 0
Output: 1
Explanation: The Linked list does not 
contains any loop. 

Example 3:
Input:
N = 4
value[] = {1,2,3,4}
X = 1
Output: 1
Explanation: The link list looks like 
1 -> 2 -> 3 -> 4
|______________|
A loop is present. 
If you remove it successfully, 
the answer will be 1. 

Video Solution "https://www.youtube.com/watch?v=jcZtMh_jov0&t=711s"
*/
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
void removeLoop(Node* head)
{
    Node* dummy=new Node(0);
    dummy->next=head;
    Node* slow=dummy;
    Node* fast=dummy;
    while(fast!=NULL && fast->next!=NULL)
    {
    slow=slow->next;
    fast=fast->next->next;
    if(slow==fast)
    break;
    }
    if(slow!=fast)
    return;
    Node* curr=dummy;
    while(curr->next!=fast->next)
    {
    curr=curr->next;
    fast=fast->next;
    }
    fast->next=NULL;
    head=dummy->next;   
}

int main()
{
    Node* head = newNode(50);
    head->next = head;
    head->next = newNode(20);
    head->next->next = newNode(15);
    head->next->next->next = newNode(4);
    head->next->next->next->next = newNode(10);
    /* Create a cycle */
    head->next->next->next->next->next = head;
    removeLoop(head);
}