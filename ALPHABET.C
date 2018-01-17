#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
char ch;
cout<<"enter a character:";
cin>>ch;
if((ch>='a'&&ch<='z'))
{
cout<<ch<<"is an alphabet";
}
else
{
cout<<ch<<"is not an alphabet";
}
getch();
}
