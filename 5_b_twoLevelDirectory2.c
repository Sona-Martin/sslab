#include<stdio.h>

#include<string.h>
void main()
{

int n,nf=0,i=0,j=0,k,ch,flag=0;
char mdname[10],fname[10][10],name[10];

struct st
{
char dname[10];
char sdname[10];
char fname[10][10][10];
int ds,sds[10];
}dir[10];

printf("enter number of directories(each user has 1 directory):");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter the directory name:");
scanf("%s",mdname);
strcpy(dir[i].dname,mdname);
printf("Enter the number of files:");
scanf("%d",&nf);
dir[i].ds=nf;
for(j=0;j<nf;j++)
{
printf("Enter file name to be created:");
scanf("%s",name);
strcpy(dir[i].sdname[j],name);
printf("%s",dir[i].sdname[j]);
for(k;k<nf;k++)
{
if(!strcmp(name,fname[k]))
{printf("There is already %s\n",name);
flag=1;
}
}
if(flag==1)
break;
else
{
strcpy(fname[j++],name);
nf++;
}



}
}
/*
printf("Directory name is:%s\n",mdname);
printf("Files names are:");
for(i=0;i<j;i++)
printf("\n%s",fname[i]);

*/

printf("\ndirname\t\tsize\tfiles");
printf("\n******************************************************\n");
for(i=0;i<n;i++)
{
printf("%s\t\t%d",dir[i].dname,dir[i].ds);
for(j=0;j<dir[i].ds;j++)
{
printf("\t%s\t",dir[i].sdname[j]);

printf("\n\t\t");
}
printf("\n");    }





   }
