#include<stdio.h>
#define SIZE 5
int stack[SIZE];
int top=-1;
void push(int value){
if (top==SIZE-1)
printf("stack overflow 1 cannot push%d\n",value);
else{
stack[++top]=value;
printf("%d pushed to stack \n",value);
}
void pop(){
if(top==-1)
printf("stack underflow!No element to pop\n");
else
   printf("%d poped from stack\n",stack[top--]);
}
void display(){
if(top==-1)
printf("stack element:");
else
for(int i=top;i>=0;i--)
printf("%d",stack[i]);
}
}
int main(){
push(10);
push(20);
push(30);
 void display();
int pop();
 void display();
return 0;
}


