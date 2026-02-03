#include<stdio.h>
int*get element(int arr[],int index){
return&arr[index];
}
int main()
int arr[5]={4,8,12,16,20};
int*p=get elements (arr,2);
printf("element at index, 2=%d\n",*p);
return 0;
}
