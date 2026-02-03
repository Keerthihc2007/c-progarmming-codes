#include<stdio.h>
int main(){
int arr[100],n;
int i,N_positive=0,N_neagtive=0,N_zero=0, N_even=0,N_odd=0;
printf("enter%d elements:\n",n);
for (i=0;i<n;i++){
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++){
if(arr[i]>0)
N_positive++;
else if (arr[i]<0)
N_negative++;
else
N_even++;
else
N_odd++;
}
printf("\n Array statistics:\n");
printf("total elements:%d\n",n);
printf("positive numbers :%d\n",N_positive);
printf("negative numbers:%d\n",N_negative);
printf("zeroes:%d\n",N_zero);
printf("Even numbers :%d\n",N_even);
printf("odd numbers:%d\n",N_odd);
return 0;
}
