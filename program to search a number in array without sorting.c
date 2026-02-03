#include<stdio.h>
int main(){
int arr[100],n,i,key,found=0;
printf("enter number of elements :");
for (i=0;i<n;i++){
scanf("%d",&arr[i]);
}
printf("enter to search a ");
scanf("%d",&key);
for(i=0;i<n;i){
if(arr[i]==key){
printf("number %d found at position %d\n",key,i+1);
found=i;
break;
}
}
if(found==0){
printf("number %d not found in the array\n",key);
}
return 0;
}
