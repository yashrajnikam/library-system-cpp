include<iostream>
using namespace std;

int main()
{
int stack[5];
int top;
cout<<"Enter 5 sereved customer token number:/n";
for(int i=0;i<5;i++)
{
top++;
cin>>stack[top];
}
cout<<"\n===SERVICE HISTORY===\n";
while(top>=0)
{
cout<<"Token:"<<stack[top]<<endl;
top--;
}
return 0;
}
