#include<stdio.h>
#include<iostream.h>
#include<stdlib.h>
# define MAX 5
void renque();
void lenque();
void ldeque();
void rdeque();
void peek();
void dis();
void isemp();
void isfull();
int i,elm,frt=-1,rear=-1;
int que[MAX];
void main()
{
 int n,ch;
 while(1)
 {
  printf("\n1.Enque(Right side insertion\n");
  printf("2. Enque(Left side insertion\n");
  printf("3. Deque(Right deletion)\n");
  printf("4. deque(left deletion)\n");
  printf("5. Peek\n");
  printf("6. Display\n");
  printf("7. Is empty\n");
  printf("8. Is Full\n");
  printf("9. Exit\n");
  printf("Choice");
  scanf("%d",&n);
  switch(n)
  {
   case 1: renque();
	   break;
   case 2: lenque();
	   break;
   case 3: rdeque();
   break;
   case 4: ldeque();
   break;
   case 5: peek();
   break;
   case 6: dis();
   break;
   case 7: isemp();
   break;
   case 8: isfull();
   break;
   case 9: exit(0);
   default: printf("Invalid");
  }
 }
}
void isemp()
{
 if(frt==-1)
 {
  printf("Is emp");
  return;
 }
 printf("NOt emp");
}
void isfull()
{
 if((frt==0 && rear==MAX-1)||(frt==rear+1))
 printf("Isfull");
 else
 printf("NOt full");
}
void dis()
{
 if(frt==-1)
 {
  printf("Empty que");
  return;
 }
 if(frt<=rear)
 {
  for(i=frt;i<=rear;i++)
  {
   printf("%d\t",que[i]);
  }
 }
 else
 {
  for(i=frt;i<MAX;i++)
  {
   printf("%d\t",que[i]);
  }
  for(i=0;i<=rear;i++)
  {
   printf("%d\t",que[i]);
  }
 }
}
void peek()
{
 if(frt==-1)
 {
  printf("Empty que");
  return;
 }
 printf("Peek is %d",que[frt]);
}
void ldeque()
{
 if(frt==-1 && rear==-1)
 {
  printf("Underflows");
  return;
 }
 elm=que[frt];
 if(frt==MAX-1)
 frt=0;
 else if(frt==rear)
 {
  frt=-1;
  rear=-1;
 }
/* else if(rear==0)
 {
  rear=MAX-1;
  goto stop;
 }*/
 else
  frt++;
 printf("%d deleted",elm);
}
void rdeque()
{
 if(frt==-1 && rear==-1)
 {
  printf("Underflows");
  return;
 }
 elm=que[rear];
 if(rear==0)
  rear=MAX-1;
 else if(rear==frt)
  {
   rear=-1;
   frt=-1;
  }
 else
  rear--;
  printf("%d deleted",elm);
 }
void renque()
{
/* char n;
 printf("(R=Insertion from right side.\n L=Insertion from left side)");
 printf("Enter the direction to insert.(R/L)\n");
 scanf("%c",&n);
 if(n!='R'&& n!='r'&& n!='L'&& n!='l')
 {
  printf("Invalid selection");
 // return;
 }*/
  if((frt==0 && rear==MAX-1)||(frt==rear+1))
  {
   printf("Overflows");
   return;
  }
  if(frt==-1 && rear==-1)
  {
   frt=0;
   rear=0;
  }
  else if(rear==MAX-1)
    rear=0;

 /* else if(frt==0)
  {
   frt=MAX-1;
   }*/
  else
   rear++;
   printf("Data");
  scanf("%d",&elm);
  que[rear]=elm;
  printf("%d inserted",elm);
 }
 void lenque()
 {
  if((frt==0 && rear==MAX-1)||(frt==rear+1))
   {
    printf("Overflows");
    return;
   }
  if(frt==-1 && rear==-1)
   {
    frt=0;
    rear=0;
   }
  else if(frt==0)
    frt=MAX-1;
  else
    frt--;
  printf("Data");
  scanf("%d",&elm);
  que[frt]=elm;
  printf("%d inserted",elm);
 }

