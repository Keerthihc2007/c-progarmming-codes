#include<stdio.h>
int main(){
int arr[5];
printf("enter number of array elements");
scanf("%d",&n);
int arr[n];
printf("enter %d numbers:\n",n);
int i,j,temp;
for(i=0;i<n-1;i++){
for(j=0;j<n-i-1;j++){
if(arr[j]>arr[j+1]){
temp=arr[j];
arr[i]=arr[j+1];
arr[i+1]=temp;
}
}
}
printf("sorted array in ascending order:\n");
for(i=0;i<5;i++)
    printf("%d",arr[i]);
return 0;
}
