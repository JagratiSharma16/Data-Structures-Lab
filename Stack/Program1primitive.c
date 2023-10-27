#include <stdio.h>
int stack[50], N, top = -1, item, choice;
void push();
void pop();
void display();
void main()
{

    printf("Enter the capacity: ");
    scanf("%d", &N);

    do
    {
        printf("Enter the choice:\n 1.Push\n 2.Pop\n 3.Display\n ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        default:
            printf("Please enter the valid choice!!! ");
            break;
        }
    } while (choice < 4);
}

void push()
{
    if (top >= N - 1)
    {
        printf("Overflow");
    }
    else
    {
        top = top + 1;
        printf("Enter the element: ");
        scanf("%d", &item);
        stack[top] = item;
    }
}

void pop()
{
    if (top <= -1)
    {
        printf("Underflow");
    }
    else
    {
        item = stack[top];
        printf("Deleted element: %d",item);
        top = top - 1;
    }
}

void display()
{
    if(top>=0)
    for (int i = top; i >= 0; i--)
    {
        printf("%d", stack[i]);
    }
}

