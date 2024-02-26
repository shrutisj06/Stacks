#include<stdio.h>
#include<stdlib.h>

struct stack{
int size;
int top;
int*arr;
};

int isempty(struct stack *ptr)
{
   if (ptr->top==-1)
   {
       return 1;
   }
   else
   {
       return 0;
   }

}

int isfull(struct stack *ptr,int size)
{
    if (ptr->top == size-1)
    {
        return 1;
    }
    else
        {
        return 0;
    }
}
int main()
{
    struct stack *s;
    s = (struct stack*)malloc(sizeof(struct stack));
    s->size=50;
    s->top=-1;
    s->arr=(int*)malloc(s->size*sizeof(int));
     s->arr[0] = 7;
    s->top++;



    if(isempty(s)){
        printf("The stack is empty");
    }
    else{
        printf("The stack is not empty");
    }
    return 0;
}


