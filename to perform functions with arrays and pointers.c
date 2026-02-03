#include<stdio.h>
int main()
{
int arr[100];
int n,sum,pos_c,neg_c;
printf("enter the number of elements in the array:");
scanf("%d",&n);
input Array (arr,n);
//display array elements
printf("\n array elemnts are:");
display array(arr,n);
//calculate sum
sum=sum array(arr,n);
printf("\nsum of all elements =%d",sum);
//count positives and negatives
pos count=count positive (arr,n);
neg count=count negative(arr,n);
printf("\n number of positive elements =%d",pos count);
printf("\n number olf negative elemnts =%d\n",neg count);
elemnts=%d\n,neg count;
return 0;
}
void input array (int*arr,int n )
{
printf("enter%d elemnts:\n",n);
for(i=o;i<n;i++)
{
scanf("%d",(arr+i));//using pointer aruthmetic
}
}
//function to display array elemnts
void display array (int*arr,int n)
{
for (int i=o;i<n;i++)
{
printf("%d",*(arr+i));
//accessing elemnts using pointer
}
//function to calcuate sum of array elements
int sum array(int*arr,int n)
{
intsum=0;
for(int i=0;i<n;i++)
{
sum+=*(arr+i);
}
return sum;
}
