#include<iostream>
#include<conio.h>
using namespace std;

//this program is parform only two numbers 

int main()
{
    float num1,num2;
    float sum,sub,div,mul;
    char ch;
    // i am using a do - while looping for reused task when user requrement
    do{
        //  enter the details for calculate the value
    cout<<"\nEnter the first number : ";
    cin>>num1;
    cout<<"\nEnter Second number : ";
        cin>>num2;
    char choice;
    cout<<"\nEner the operater : ";
    cin>>choice;
    switch(choice)
    {   
        case '+':
        sum=num1+num2;
        cout<<sum;
        break;
        case '-':
        sub=num1-num2;
        cout<<sub;
        break;
        case '/':
        div=num1/num2;
        cout<<div;
        break;
        case '*':
        mul=num1*num2;
        cout<<mul;
        break;
        default:
        cout<<"\n!Wrong Choice !!!";
        break;

    }
    cout<<"\n YOU WANT TO CONTINUE(y/n) : ";
     ch=getch();

    }while(ch=='y'||ch=='Y');
    return 0;
}