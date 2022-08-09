//
//  c program.c
//  DSA
//
//  Created by Sandeep on 8/6/22.
//

//
//  main.cpp
//  DSA
//
//  Created by Sandeep on 8/6/22.

#include <stdio.h>
#include<stdlib.h>


struct Node
{
    int data;
    struct Node* next;
};

struct Node* head;

void insert(int num)
{
    struct Node* temp= (struct Node*)malloc(sizeof(struct Node));
    temp -> data = num;
    temp -> next = head;
    head = temp;
}

void get_print()
{
   struct Node* temp = head;
   while (temp!=NULL)
   {
       printf("%d", temp -> data);
       temp=temp -> next;
   }
   return;
}

int main()
{
    struct Node* head=NULL;
    printf("Enter the numbers to be written in a list");
    head=NULL;
    insert(2);
    insert(4);
    insert(3);
    insert(4);
    get_print();
}

