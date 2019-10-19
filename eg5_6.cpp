//program which stores details of employee in a company, you can search persons detail(name,age,and wage) in company via inputing their name.
#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
class company{
string name;
int age;
double wage;
static int count;
public:
void getdata()
{
cout<<"Type Name :- ";
cin.ignore();    // for clearing the input buffer so that last i/p can,t affect getline
getline(cin,name);
cout<<"\nType age :- ";
cin>>age;
cout<<"\nType wage :- ";
cin>>wage;
cout<<endl;
count++;
}
void showdata()
{
cout<<"Name of employee :- "<<name<<endl;
cout<<"Age :- "<<age<<endl;
cout<<"wage :-"<<wage<<endl<<endl;
}
int countobj(){
return count;

}
string searchdata(){
return name;
}
};

int company :: count;
int main()
{
int x=0,c=0,d=0;
string q,w;
company manager[5];
company workers[10];

while(x!=6)
{
cout<<"\nChoose an options:"<<endl;
cout<<"\nType 1: TO add Managers Details"<<endl;
cout<<"Type 2: TO add Workers Details"<<endl;
cout<<"Type 3: TO Searh & display details of Managers"<<endl;
cout<<"Type 4: TO Search & display details of workers"<<endl;
cout<<"Type 5: TO display all employee details"<<endl;
cout<<"Type 6: Exit"<<endl;
cout<<"Enter your option :- ";
cin>>x;
cout<<endl;
switch(x)
{
case 1:
cout<<"Type manager details"<<endl;
manager[c].getdata();
c++;
break;
case 2:
cout<<"Type workers details"<<endl;
workers[d].getdata();
d++;
break;
case 3:
cout<<"Type Managers Full Name :- ";
cin.ignore();
getline(cin,q);
cout<<endl;
for(int i=0;i<c;i++)
{
if(q == manager[i].searchdata())
manager[i].showdata();
}
break ;
case 4:
cout<<"Type Workers Full Name :- ";
cin.ignore();
getline(cin,w);
cout<<endl;
for(int i=0;i<d;i++){
if(w == workers[i].searchdata())
workers[i].showdata();
}
break;
case 5:
if(c!=0){
cout<<"\nAll managers details"<<endl;
for(int i=0;i<c;i++)
manager[i].showdata();
}
else cout<<"There is no record of manager yet."<<endl;
if(d!=0){
cout<<"\nAll workers details"<<endl;
for(int i=0;i<c;i++)
workers[i].showdata();
}
else cout<<"There is no record of workers yet."<<endl;
break;
case 6:
    exit(0);
}
}
}
