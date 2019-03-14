#include<stdio.h>
#include<conio.h>
#define MAX 5
int top, status;

void push(int stack[],int item)
{if(top==(MAX-1))
    status=0;
 else
    {status=1;
    ++top;
    stack[top]=item;
    }
}

int pop(int stack[])
{int ret;
 if(top==-1)
    {ret=0;
    status=0;
    }
 else
    {status=1;
    ret=stack[top];
    --top;
    }
 return ret;
}

void display(int stack[])
{int i;
 printf("\nThe Stack is: ");
 if(top==-1)
    printf("empty");
 else
    {for(i=top;i>=0;--i)
    printf("\n--------\n|%3d   |\n--------",stack[i]);
    }
 printf("\n");
}

void main()
{int stack[MAX], item, ch;
 clrscr();
 top=-1;
 printf("Practical 4\nName: Priyank Jain\tRNo:10(GAG)\n\n");
 do
 {  do
    {  printf("MAIN MENU");
       printf("\t1.PUSH");
       printf("\t2.POP");
       printf("\t3.Exit...");
       scanf("%d",&ch);
       if(ch<1||ch>3)
	  printf("Invalid Choice, Please Try Again!");
    }while(ch<1||ch>3);
    switch(ch)
    {  case 1:
	  printf("Enter the Element to be pushed: ");
	  scanf("%d",&item);
	  printf(" %d",item);
	  push (stack,item);
	  if(status)
	  {  printf("After Pushing ");
	     display(stack);
	     if(top==(MAX-1))
		printf("\nThe Stack is Full");
	  }
	  else
	     printf("Stack Overflow!\n");
	  break;
       case 2:
	  item=pop(stack);
	  if(status)
	  {  printf("The Popped item is %d.  After Popping: ");
	     display(stack);
	  }
	  else
	     printf("Stack Underflow!\n");
	  break;
       default:
	  printf("END OF EXECUTION");
    }
 }while(ch!=3);
 getch();
}