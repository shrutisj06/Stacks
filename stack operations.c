#include<stdio.h>
#include<stdlib.h>
//structure of stack
struct stack{
int top;
int size;
int *arr; //integer pointer to allocate dynamic memory
};
//or push function
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
//pop function
int isempty(struct stack*ptr)
{
if (ptr->top==-1)
{
    return 1;
}
else{
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
int pop(struct stack*ptr)
{
   if (isempty(ptr))
   {
       printf("stack underflow \n");
   }
   else
   {
     int value=ptr->arr[ptr->top];
     ptr->top--;
     return value;
   }

}


int main()
{ struct stack*sp=(struct stack*)malloc(sizeof(struct stack));
sp->size=10;
sp->top=-1;
sp->arr=(int*)malloc(sp->size *sizeof(int ));
//stack has been created

printf("before pushing full or not:%d\n",isfull(sp,5));
printf("before pushing empty or not:%d\n",isempty(sp));

push(sp,6);
push(sp,5);
push(sp,4);
push(sp,3);

printf(" after pushing full or not%d\n",isfull(sp,5));
printf("after pushing empty or not%d\n",isempty(sp));
printf("%d popped from the stack\n",pop(sp));
printf("%d popped from the stack\n",pop(sp));
printf("%d popped from the stack\n",pop(sp));
//last in first out

}
