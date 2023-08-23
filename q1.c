//sentinel search(with return value)

#include<stdio.h>
int sentinel(int a[100],int n,int key)
{
int last=a[n-1];
int i=0;
a[n-1]=key;
while(a[i]!=key)
i++;
if(i<n-1||key==last)
return i;
else
return -1;

}

int main()
{
int a[100],i,n,key,f;
printf("enter limit ");
scanf("%d",&n);
printf("enter n nos");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter no to search");
scanf("%d",&key);
f=sentinel(a,n,key);
if(f==-1)
printf("not found");
else
printf("found pos=%d",f);
}

