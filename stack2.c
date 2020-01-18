#include<stdio.h>
#define SIZE 10
int top=-1;
struct Stack
{
  int a[SIZE];
  char ch[SIZE];
}s1;
int isFull()
{
  return top==(SIZE-1);
}

int isEmpty()
{
  return top==-1;
}

// Function to add an item to stack.  It increases top by 1
int push(char ch,int i)
{
  if (isFull())
  {
    printf("OVERFLOW");
    return -1;
  }
  printf("%c pushed to stack\n",ch);
  int d=top++;
  s1.ch[d] = ch;
  s1.a[d] = i;
  printf("It is at index %d\n", i);
}

// Function to remove an item from stack.  It decreases top by 1
int pop()
{
  int temp;
  if (isEmpty())
  {
    printf("UNDERFLOW \n");
    return -1;
  }
  printf("%c popped from stack\n", s1.ch[top]);
  printf("Top is now at %d\n",s1.a[top]);
  top--;
}
int peak()
{
printf("%c is at peak\n",s1.ch[top]);
}
int main()
{
  int temp;
  char str[20];
  int i;
  for(i=0;i<10;i++)
  {
    scanf("%c",&str[i]);
  }
  for(int i=0;i<10;i++)
  {
    if(str[i]=='['||str[i]=='('||str[i]=='{')
    {
      temp=push(str[i],i);
    }
    else if(str[i]==']'||str[i]=='}'||str[i]==')')
    {
      temp=pop();
    }
  }
return 0;
}