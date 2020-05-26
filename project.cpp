#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,e,m,n,z;
    cout<<"             ESCAPE BY MULTIPLICATION"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"01. START GAME"<<endl;
    cout<<"02. EXIT"<<endl;
    cout<<endl;
    cout<<"SELECT ANY OPTION : ";
    cin>>a;
    jump:
    if(a==2)
    {
        system("cls");
        cout<<"U ARE OUT OF GAME"<<endl;
        return 0;
    }
    else if(a==1)
    {
        system("cls");
        cout<<"        You are in a cave ...Try to escape by to solve those answer....."<<endl;
        cout<<"        If your answer is incorrect ,you will die....."<<endl<<endl<<endl;

    }
    srand(time(0));
    c=1,b=rand()%12,d=rand()%12,z=0;
    while(c!=0 && z<5)
    {
        cout<<b<<" X "<<d<<"  =  ";
        m=b*d;
        cin>>e;
        system("cls");
        if(e==m)
        {
            c=1;
            cout<<b<<" X "<<d<<"  =  ";
            cout<<e<<" IS CORRECT ANSWER"<<endl;
            cout<<endl;
            cout<<endl;
            cout<<"PRESS ENTER FOR NEXT LEVEL"<<endl;
        }
        else if(e!=m)
        {
            cout<<b<<" X "<<d<<"  =  "<<e;
            cout<<endl;
            cout<<"YOUR ANSWER IS WRONG........THIS ANSWER SHOULD BE = "<<m<<endl;
            cout<<"YOU ARE FINISHED...."<<endl;
            cout<<endl;
            cout<<"           GAME OVER"<<endl;
            c=0;
            break;
        }
        b=rand()%11,d=rand()%11;
        z++;
        getchar();
        cin.get();
        system("cls");
    }
    if(c==1)
    {
        cout<<"CONGRATS....YOU COMPLETELY ESCAPE FROM THE CAVE"<<endl;
        cout<<endl<<endl;
        cout<<"PRESS ENTER"<<endl;
        cin.get();
        system("cls");
        cout<<"01. RESTART THE GAME"<<endl;
        cout<<"02. EXIT"<<endl;
        cout<<endl;
        cout<<"SELECT ANY OPTION : ";
        cin>>a;
        if(a==2)
        {
            system("cls");
            cout<<"YOU ARE OUT OF THE GAME"<<endl;
            return 0;
        }
        else if(a==1)
        {
            system("cls");
            goto jump;
        }
    }
    else if(c==0)
    {
        cout<<endl<<endl;
        cout<<"PRESS ENTER"<<endl;
        cin.get();
        cin.get();
        system("cls");
        cout<<"01. RESTART THE GAME"<<endl;
        cout<<"02. EXIT"<<endl;
        cin>>a;
        if(a==2)
        {
            system("cls");
            cout<<"YOU ARE OUT OF THE GAME"<<endl;
            return 0;
        }
        else if(a==1)
        {
            system("cls");
            goto jump;
        }
    }

}
