#include<stdio.h>
int main()
{
float num1,num2,result;
char op;

printf("simple calcuator using switch-case\n");
     printf("--------------------------------\n");
     printf("Enter an operator (+,-,*,/):");
     scanf("%c",&op);

printf("Enter two numbers:");
scanf("%f %f",&num1,&num2);
switch(op){
case'+':
     result=num1+num2;
     printf("result=%.2f\n",result);
     break;
     case'-':
     result=num1-num2;
     printf("result=%.2f\n",result);
     break;
     case'*':
     result=num1*num2;
     printf("result=%.2f\n",result);
     break;
     case'/':
     if(num2!=0)
     printf("reslut=%.2\n",num1/num2);
     else
     printf("Error!Division by zero is not allowed.\n");
     break;
 default:
    printf("invalid opertor!please use+,-,*or/.\n");
}
   return 0;
}
