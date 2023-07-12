#include<stdio.h>
#include<string.h>
#define MAX 50
struct stack
{
char a[MAX];
int top;
}s;

void init()
{
s.top==-1;
}

int isempty()
{
if(s.top==-1)
return 1;
else
return 0;
}

int isfull()
{
if(s.top==MAX-1)
return 1;
else
return 0;
}

void push(char ch)
{
if(isfull())
{
printf("stack is full");
}
else
{
s.top++;
s.a[s.top]=ch;
}
}

void disp()
{
int i;
for(i=s.top;i>=0;i--)
printf("%c",s.a[i]);
}

int main()
{
char s1[100];
int i;
init();
printf("enter string");
gets(s1);
for(i=0;s1[i]!='\0';i++)
{
if(s1[i]==' ')
{
disp();
init();
}
else 
push(s1[i]);
}

disp();
}








