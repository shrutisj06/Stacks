#include<stdio.h>
#include<stdlib.h>

struct stack{
int top;
int size;
int *arr;
};

int peek(struct stack*sp,int i)
{
    int arrindex=sp->top-i+1;
    if (arrindex<0)
    {
        printf("not valid position for this stack");
        return -1;
    }
    else{
        return(sp->arr[arrindex]);
    }
}

int isfull(struct stack*ptr,int size)
{
    if(ptr->top==size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isempty(struct stack*ptr)
{
    if(ptr->top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(struct stack*ptr,int value)
{
   if (isfull(ptr,10))
   {
       printf("stack overflow %d \n",value);
   }
   else
   {
      ptr->top++;
      ptr->arr[ptr->top]=value;
   }
}

int main()
{
    struct stack*sp=(struct stack*)malloc(sizeof(struct stack));
    sp->top=-1;
    sp->size=10;
    sp->arr=(int*)malloc(sp->size*sizeof(int));

push(sp,6);
push(sp,5);
push(sp,4);
push(sp,3);

//to check peek
    for(int j=0;j<=sp->top+1;j++)
    {
        printf("the value at position %d is %d \n",j,peek(sp,j));
    }

    return 0;
    }

