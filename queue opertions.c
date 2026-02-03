#include<stdio.h>
#define SIZE 5
int queue[SIZE];
int front=-1,rear=--1;
void enqueue(int value){
if(rear ==SIZE-1)
void enqueue (int value){
if (rear==size-1)
printf("queue overflow cannot insert"%d\n",value);
else{
if (front==-1)front=0;
queue[++rear=value];
printf("%d enqueue into queue\n",value);
}
}
void dequeue(){
if(front==-|| front>rear)
printf("queue underflow!no element to remove\n");
else
printf("%d dequeue from Queue\n",queue[front++;])
}
void display(){
if(front==-1||front>rear)
print("queue is empty\n");
else{
printf("queue elemnts:");
for(int i=front;i<=rear;i++)
printf("%d";queue[i]);
printf("\n");
}
}
int main(){}
