#include <stdio.h>
#include <stdlib.h>
#define MAX_STACK_SIZE 100
typedef char element;
element stack[MAX_STACK_SIZE];
int top = -1;

void push(element e)
{
    if (top >= MAX_STACK_SIZE - 1) {
        printf("\n\n Stack is FULL ! \n");
        return;
    }
    else stack[++top] = e;
}
element pop()
{
    if (top == -1) {
        printf("\n\n Stack is Empty!!\n");
        return 0;
    }
    else return stack[top--];
}

void print_stack()
{
    int i;
    printf("\n STACK [");
    for (i = 0; i <= top; i++)
        printf("%c", stack[i]);
    printf("] ");
}
void reverse_string(char in[])
{
    int i;
    for (i = 0; in[i]; i++)
        push(in[i]);
    for (i = 0; top > -1; i++)
        in[i] = pop();


}
int main(void)
{
    char my_string[33] = "reverse";
    reverse_string(my_string);
    printf("%s\n", my_string);
    return 0;
}