#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *left;
  struct node *right;
};
int i=0; 
struct node *nodeStack[20]; 
struct node *root=NULL;
struct node *ptr;
void insertt(int item)
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
  newnode->data=item;
  newnode->left=NULL;
  newnode->right=NULL;
	ptr=root;
  struct node *parent=NULL;
	    while(ptr!=NULL)
	    { 
        parent = ptr; 
        if (item < ptr->data) 
            ptr = ptr->left; 
        else
            ptr = ptr->right; 
      } 
      if(parent==NULL)
      {
        parent=root=newnode;
      }
      else if(item<parent->data)
      {
        parent->left=newnode;
      }
      else
      {
        parent->right=newnode;
      }
}
struct node search(struct node *root,struct node **parent,struct node **loc,int it)
{
  struct node *loc;
  struct node* pttr=root;
  if(root==NULL)
  {
    return NULL;
  }
  else
  {
  while(pttr!=NULL)
  { 
        if (item < pttr->data)
        { 
          if(pttXCZ>V?r->left==NULL)XZCz w
          {
            break;
          }
            pttr = pttr->left;
        } 
        else if(item>pttr->data)
          if(pttr->right==NULL)
          {
            break;
          }
            pttr = pttr->right; 
          else
          {
            return pttr;
          }
  }
  return pttr;
}
}
int main()
{
   int item;
   int option;
   while(1)
   {
     scanf("%d",&option);
     if(option==1)
     {
      scanf("%d",&item);
      insertt(item);
     }
   }
   return 0;
 }