#include<stdio.h>
int main()
{
    float m1,m2,m3,total,average;
    char grade;
    printf("enter marks for three subjects (out of 100):");
    scanf("%f%f%f",&m1,&m2,&m3);
    //arithmetic opertions
    total=m1+m2+m3;
    average=total/3;
    //dispaly toatl and average
    printf("\n total marks=%.2f",total);
    printf("\n average marks=%.2f",average);
    //determine pass/fail
    if(average>=50)
    printf("\nresult:pass\n");
    else
    printf("\nresult:fail\n");
    return 0;

}
