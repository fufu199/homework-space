#include<iostream>
#include<math.h>
using namespace std;
int pan(int i,int j);
void main(){
int i,j,x,y;
cout<<"请输入一个正整数: ";
cin>>i;
cout<<"请输入另一个正整数: ";
cin>>j;
x=pan(i,j);
y=i*j/x;
cout<<i<<"和"<<j<<"的最大公约数是： "<<x<<endl;
cout<<i<<"和"<<j<<"的最小公倍数是："<<y<<endl;
system("pause");
}
int pan(int i,int j){
int x;
if(i<j)
{
x=i;
i=j;
j=i;
}
while(j!=0){
x=i%j;
i=j;
j=x
}
return i;
}


