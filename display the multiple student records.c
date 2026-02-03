#include<stdio.h>
struct structure{
int id;
char name[20];
};
int main(){
struct structure s[2]={{101,"anu"},{102,"vasu"}};
for(int i=0;i<2;i++)
printf("ID:%d,Name:%s\n",s[i].id,s[i].name);
return 0;
}
