#include<stdio.h>
void main()
{
int n1,n2,n3;
printf("enter three number n1,n2 and n3 respectively":);
scanf("%d,%d,%d",&n1,&n2,&n3);
if(n1>n2)
{
if(n1>n3)
{
printf("n1 is largest");
}
else
{
printf("n3 is largest");
}
}
else
if(n2>n3)
{
printf("n2 is largest");
}
else
printf("n3 is largest");
}
getch();
};
