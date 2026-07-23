#include<stdio.h>
#include<conio.h>

#define MAX 5

int stack[MAX];
int top= -1;

void push()
{
    int item;

    if(top == MAX-1)
    {
        printf("\n stack is full Overflow");
    }
    else
    {
        printf("\n enter the element:");
        scanf("%d",&item);
        top++;
        stack[top]=item;

        printf("\n enter element sucessfully",item);
    }
}

void main()
{



 push();
 push();
 push();

 getch();
 }
