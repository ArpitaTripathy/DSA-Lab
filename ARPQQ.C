#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
class queue
{
int queue1[5];
int rear,front;
public:
queue()
{
rear=-1;
front=-1;
}
void in(int x)
{
if (rear>4)
printf("overflow");
front=rear=-1;
return;
}
queue[rear+1]=x;
printf("insertedin queue");
void del(int x)
{
if (front==rear)
{
printf("underflow" );
return;
}

printf("deleted",queue[front+1]);
}
void del(int x)
{
if (front==rear)
{
printf("queue is empty" );
return;
}
for(int i=front+1;i<=rear;i++)
{
printf(" ",queue1[i]);
};
void main()
int ch;
queue qu;
 while{
 printf("Choose1.Insert 2.Delete 3.display 4.exit");
 scanf("%d", &ch);
 switch(ch)
 { case 1: printf("Enter the element:";
 scanf("%d" , n);
 qu.in(ch) ;break;
  case 2: qu.del; break;
  case 3: qu.dis; break;
  case 4:   exit(0) ; break;

 }

 }

 }
