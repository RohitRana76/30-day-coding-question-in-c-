#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    for(int i=1;i<=10;i++)
    {
        for(int j=1;j<=1;j++)
        {
            if(i==1 || i==2)
            {
                cout<<setw(12)<<"* *"<<endl;
            }
           else if(i==3 || i==4)
            {
                cout<<setw(14)<<"* * * *"<<endl;
            }
           else if(i==5 || i==6)
            {
                cout<<setw(16)<<"* * * * * *"<<endl;
            }
           else if(i==7 || i==8)
            {
                cout<<setw(18)<<"* * * * * * * *"<<endl;
            }
          else if(i==9 || i==10)
            {
                cout<<setw(20)<<"* * * * * * * * * *"<<endl;
            }

            else
            {
                cout<<""<<endl;
            }
            
        }
    }
    return 0;
}
