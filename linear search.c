#include<stdio.h>
int main(){
int arr [5]={10,25,30,45,50};
int i,key,found=0;
printf("enter elemnt to search:");
scanf("%d",&key);
for(i=0;i<5;i++){
if(arr[i]==key){
   found=1;
   break ;
}
}
if(found)
printf("elementb%d found and position %\n",key,i+1);
else
    printf("element %d not found\n",key);
return 0;
}
