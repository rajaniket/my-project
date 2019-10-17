/*maintaining a shopping list of items which includs code & price of each item ,
for which we place an order with a dealer every month,
we would like to perform operations such as
adding and deleting an item from the list, displaying the net value of items,displaying all the items with price. */

#include<iostream>
#include<stdlib.h>
using namespace std;
const int k=40;
class items
{
float price[k];
int code[k];
int c; // this will keep the record of items (count)
public:
void count() {
c=0;}
void getitem();
void rmv();
void display();
void sum();
};
void items :: getitem()
{
cout<<"item code = ";
cin>>code[c];
cout<<"item price = ";
cin>>price[c];
c++;
}
void items :: rmv()
{
int y,j=0;
cout<<"Type item code to delete : ";
cin>>y;
for(int i=0;i<c;i++)
{
j=0;
if(code[i]==y){
price[i]=0;
code[i]=000;
cout<<"Item sucessfully deleted from the list"<<endl;
j=1;
break;
}
}
if(j==0)
cout<<"product code not found"<<endl;
}
void items :: sum(){
float sm=0;
for(int i=0;i<c;i++)
sm=sm + price[i];
cout<<"Net Value (Price) of items : "<<sm<<endl;
}
void items :: display()
{
cout<<"ITEM'S CODE         ITEM'S PRICE"<<endl;
for(int i=0;i<c;i++){
cout<<code[i]<<"                  "<<price[i]<<endl;
}
}
int main() {
items x;
x.count();
int z;
do
{
cout<<"\n\nPress appropriate number \n";
cout<<"1.  Add an item \n";
cout<<"2.  Display net value \n";
cout<<"3.  Remove an item \n";
cout<<"4.  Display all items \n";
cout<<"5.  Quit \n";
cout<<" \n\n What do you want to do: ";
cin>>z;
switch(z)
{
case 1: x.getitem();
break;
case 2: x.sum();
break;
case 3: x.rmv();
break;
case 4: x.display();
break;
case 5: exit(0);
default : cout<<"Error in input, pls try again\n";
}
}
while(z!=5);
}
