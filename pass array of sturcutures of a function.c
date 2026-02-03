#include<stdio.h>
struct stud{
int id;
char name;
};
void dispaly(struct stud s[],int n){
for(int i=0;i<n;i++)
printf("id:d,name:%s\n",s[i].id,s[i].name);}
int main(){
struct stud s[3]={{101,"Anu"},{102,"vasu"},{103,"kiran"}};
display(3,3);
retutn 0;
}
