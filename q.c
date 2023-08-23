//sentinel search(without return value)

#include<stdio.h>
void sentinel(int a[100],int n,int key)
{
int last=a[n-1];
int i=0;
a[n-1]=key;
while(a[i]!=key)
i++;
if(i<n-1||key==last)
printf("no found pos=%d",i);
else
printf("not found");

}

int main()
{
int a[100],i,n,key;
printf("enter limit ");
scanf("%d",&n);
printf("enter n nos");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter no to search");
scanf("%d",&key);
sentinel(a,n,key);
}

