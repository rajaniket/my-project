#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<windows.h>
#include<math.h>
using namespace std;
void Color(int color)
{
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
int main(){
int a[6]={0},sum=0,i,v;
char q='v';
Color(11);
cout<<"\nThe candidates are numbered from 1 to 5 and voting is done by pressing candidates number, \nIf the number is outside the range 1 to 5 the ballot should considered as a 'spoilt ballot'. \n \n \n";
Color(10);
while(q=='v'||q=='V')
{
    Color(10);
    printf("Press V for voting and Press E for end the voting\n--> ");
    cin>>q;
    if(q=='v'||q=='V'||q=='e'||q=='E'){
           if(q=='e'||q=='E')
        break;
    cout<<"Machine is Ready \nPlease Press candidates Number to Vote \n--> ";
    cin>>v;
    if(v>0&&v<6)
    a[v-1]++;
    else
        a[5]++;
    }
        else
        {
            Color(12);
        cout<<"Please Press correct key\n";
        q='v';
        continue;
        }
}

for(i=0;i<=5;i++){
    sum=sum+a[i];
}
Color(13);
cout<<"\n\n<---------------POLL RESULT--------------->\n\n";
Color(14);
cout<<"total number of votes= "<<sum<<endl;
for(i=0;i<5;i++){
    cout<<"candidate "<<i+1<<" has got ---------> "<<a[i]<<" votes \n";

    }
    cout<<"Number of spoilt ballot------> "<<a[5]<<"\n\n";
Color(15);
cout<<"                   THANKS";

getch();

}
