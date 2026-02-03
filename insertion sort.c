#include<stdio.h>
int main(){
int arr[5];
printf("enter number of array elements");
scanf("%d,arr[n]");
int i,j,temp;
for(i=0;i<5-1;i++){
for(j=0;j<5-i-1;j++){
if(arr[j]>arr[j+1]){
temp=arr[j];
arr[i]=arr[j+1];
arr[i+1]=temp;
}
}
}
printf("sorted array:");
for(i=0;i<5;i++)
    printf("%d",arr[i]);
return 0;
}
