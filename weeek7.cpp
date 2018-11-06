#include <iostream> 

#include <time.h>
using namespace std;
int main ()
{
  
int x,y,Amount,bet,win,lose; 
  
Amount = 500;
cout << "##" << endl; 
cout << "Welcome" << endl;
cout << "$$$$$$$" << endl;
    do
    {
         cout << "Money for Gamble = " << Amount << endl; 
      cout << "Select number 1 or 0 = "; 
       cin >> x;
 cout << "bet amount = "; 
        cin>>bet;

         if (bet > Amount)  

{
         cout << "Ooopss you lose try again" << endl;
              cout << "You are cashing out" << endl;
              return 0;
}

         if (x == 0) 
{
         cout << "Ooopss you lose try again" << endl;
                       lose = Amount - bet;
            cout << "Amount left for bet = " << lose << endl;
                 Amount = lose;
               cout<<"Press 1 to play Again"<<endl;
                  cin>>y;
}
       else if (x == 1) 
	
{
               cout << "yuppee you won" << endl;
             win = 2 * bet + Amount;
              Amount = win ;
            cout << "Amount after win = " <<win<< endl;
               cout <<"Press 1 to play Again"<<endl;
                 cin >>y;
}
      
         else
	
	{
         cout << "Ooopss you lose try again" << endl;
         cout << "You are cashing out" << endl;
          return 0;
  }     
}
           while (y ==1); 
          while(bet>=Amount || lose==Amount)
           return 0;
           }