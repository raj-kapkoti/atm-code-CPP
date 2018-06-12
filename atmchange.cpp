#include<iostream>
#include<cstring>
#include<cstdio>
#include<cstdlib>
using namespace std;
void star();    //just for boundary.
int change_pin();
int pin();

int showbalance();
int depositf();
int widrawf();
int minicilip();
int info();

int balance=0;
int  deposit, widraw;
char pass[20], p[20]={'1','9','9','0'}, sure;
char mainloop;

int main()
    {
        do{

    cout<<"\n\t\t\t\tATM PROJECT\n\nCODED BY: RAJ KAPKOTI.\nUID: 17BCS2977\nBATCH: CSE-23\nGROUP: A\n\n";

    int input;
    cout<<"\n\t\t***** LOGIN *****\n\n";
    pin();     //calling pin function. program will loop to this point until the pin is correct.

cout<<"\n\t\t*************_WELCOME_************\n"<<endl;
cout<<"enter your choice\n";
    cout<<"1. Show balance.\n"
    <<"2. Deposit money.\n"
    <<"3. Widraw money.\n"
    <<"4. mini cilip.\n"
    <<"5. Change pin.\n"
    <<"6. Account info.\n";
cout<<"\n\tyou can enter (-1) at any point to LOGOUT.\n";
star();

   do{
       cout<<"\n\ncommand: ";
       cin>>input;

    switch(input){

    case 1:  showbalance();
    star(); break;
    case 2:  depositf();
    star();    break;
    case 3:  widrawf();
    star();    break;
    case 4:  minicilip();
    star();   break;
    case 5:  change_pin();
    star();  break;
    case 6: info();
            break;
    case -1: cout<<"\n";
    star();
        break;
    default: cout<<"\n\tERROR: WRONG COMMAND";
        }
        }while(input!=-1);

        cout<<"\n\n\t\tpress any botton to login again OR press 'x' to end program :  --> ";
        cin>>mainloop;
        }while(mainloop!='x');

}

int pin()
{

            int x;
do{
         cout<<"\nENTER THE PIN: ";       //try to enter the pin.
        gets(pass);
        x=strcmp(pass,p);
     if(x==0)
       {
    return 1;
    }
    else
        cout<<"\n****wrong pin****\n\n";
 }while(pin()!=1);

return 0;
}

int showbalance()
{
    cout<<"\tbalance is: "<<balance<<endl;
}

int depositf()
{

    cout<<"\tenter deposit amount: ";
    cin>>deposit;
    cout<<"\n\tAre you sure you want to deposit Rs: "<<deposit<<" y/n ";
    cin>>sure;
    if(sure=='y'){
    cout<<"\tyou deposited Rs: "<< deposit;
    balance+=deposit;
    cout<<"\n\tNew account balance is: Rs. "<<balance<<endl;
    cout<<"\nTHANKS FOR DEPOSIT.\n";
    return 0;}
else
            cout<<"\n terminated";
}

int widrawf()
{
    cout<<"\twidraw amount: ";
    cin>>widraw;
     cout<<"\n\tAre you sure you want to widraw Rs: "<<widraw<<" y/n ";
    cin>>sure;
    if(sure=='y'){
    if(widraw>balance)
    {
        cout<<"\n what.! you trying to rob me?\n YOU DON'T HAVE THIS MUCH CASH!";
        }
        else{
    cout<<"\tyou widrawed Rs: "<<widraw;
    balance-=widraw;
        cout<<"\n\tNew account balance is: Rs. "<<balance<<endl;
         cout<<"\nTHANKS FOR WIDRAW.\n";}
        return 0;}
        else
            cout<<"\n terminated";

}

int minicilip()
{
    star();
    cout<<"\n\t\t\t**MINI STATEMENT**\n\n";
    cout<<"\t\t   **YOUR TRANSITION HISTORY**\n";
}

int change_pin()
{
    cout<<"\n\t\t\t****change pin****"<<endl;
               cout<<"\nENTER NEW PIN: "  ;               //the code to change password.
                gets(p);
                gets(p);
               cout<<"\n\n\t\t*****PIN IS CHANGED SUCCESFULLY.*****\n\n";
        return 0;
}

int info()
{
    cout<<"\n\t\t**** BANK INFO ****\n"<<endl;
}

void star()
{
    cout<<"\n";
    for(int x=0;x<30;x++)
        cout<<"* ";
}
