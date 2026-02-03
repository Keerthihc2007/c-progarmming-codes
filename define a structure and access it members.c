#include<stdio.h>
struct student{
int id;
char name[20];
float marks;
};
int main(){
struct student s2={102,"virat kholi",87.5};
printf("ID:%\n",s2.id);
printf("Name:%s\n",s2.name);
printf("marks:%2f\n",s2.marks);
return 0;
}
