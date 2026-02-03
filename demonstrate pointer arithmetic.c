#include<stdio.h>
int main(){
    int adds;
int arr[]={5,10,15,20,25};
int*ptr=arr;
printf("after ptr++:ptr=%,*ptr=%d\n",ptr,*ptr);
ptr++;
adds=sizeof(int);
printf("after ptr++;ptr=%p,*ptr=%d\n,ptr,*ptr");
ptr+=2;
printf("after ptr+=2;ptr=%p,*ptr=%d\n"6,ptr,*ptr);
return 0;
}

