#include<string.h>
#include<stdio.h>
struct data{
char name[20];
char ID[10];
}M[100];
int main(){
int n;
while(scanf("%d",&n)==1){
for(int i=0;i<n;i++)
scanf("%s%s",M[i].name,M[i].ID);
for(int i=0;i<n;i++)
if(strcmp(M[i].ID,"rat")==0)
printf("%s\n",M[i].name);
for(int i=0;i<n;i++)
if(strcmp(M[i].ID,"woman")==0||strcmp(M[i].ID,"child")==0)
printf("%s\n",M[i].name);
for(int i=0;i<n;i++)
if(strcmp(M[i].ID,"man")==0)
printf("%s\n",M[i].name);
for(int i=0;i<n;i++)
if(strcmp(M[i].ID,"captain")==0)
printf("%s\n",M[i].name);
}
return 0;
}