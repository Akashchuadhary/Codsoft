#include<iostream>
#include<time.h>
using namespace std;
int n , guesses,attempt=1;

void guess()
    {
    cout<<"\nGuesses the Number 1 to 100 ";
    srand(time(0));
    n=((rand()%100)+1);
    }
    
int main()
{
    guess();
    do{

        cout<<"\n\nEnter your gussing number : ";
        cin>>guesses;
        if(guesses<n)
        {
            cout<<"Lower Number";
        }
        else if(guesses>n)
        {
            cout<<"Higher Number";
        }
        else{
            cout<<"Got it "<<attempt<<" : attempt";
        }
        
        attempt++;
    }while(guesses!=n);

    return 0;
}
