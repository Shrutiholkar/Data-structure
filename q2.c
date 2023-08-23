//merge sort using recursive function


#include<stdio.h>
void accept(int a[100],int n)
{
int i;
printf("enter n nos ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);

}

void display(int a[100],int n)
{
int i;
printf("array elements\n ");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
}

void conquer(int a[100],int s,int mid,int e)
{
int i,j,k,b[40];
i=s;
j=mid+1;
k=0;
while((i<=mid)&&(j<=e))
{
if(a[i]<=a[j])
b[k++]=a[i++];
else
b[k++]=a[j++];
}
while(i<=mid)
{
b[k++]=a[i++];
}
while(j<=e)
{
b[k++]=a[j++];
}
for(i=s,k=0;i<=e;i++,k++)
{
a[i]=b[k];
}
}

void divide(int a[100],int s,int e)
{
int mid ;
if(s<e)
{
mid=(s+e)/2;
divide(a,s,mid);
divide(a,mid+1,e);
conquer(a,s,mid,e);
}

}

void main()
{
int a[50],n;
printf("enter array limit\n");
scanf("%d",&n);
accept(a,n);
display(a,n);
divide(a,0,n-1);
display(a,n);
}

