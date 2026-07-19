#include<iostream>//Number Guessing Game                 //Project 1
using namespace std;
class guesser{
  int guessed_No;
  public:
  int TakeGuessInput(){
    int x;
    cout<<"Give the number for the guesser: ";
    cin>>x;
    guessed_No = x;
    return x;
  }
};
class player{
    int player_No;
   public:
   int TakePlayerInput(){
     int x;
     cin>>x;
     player_No = x;
     return x; 
  }
};
class umpire{
  public:
   int G_No;
   int pno1,pno2,pno3;
   public:
   void GetGuesserNo(){
       guesser g;
    int x = g.TakeGuessInput();
    cout<<"Number Guessed by Guesser: "<<x<<endl;
    G_No = x;
   }
   void GetPlayerNo(){
       player p1,p2,p3;
   cout<<"Give the number guessed by player  1: ";
   pno1 = p1.TakePlayerInput();
     cout<<"Give the number guessed by player  2: ";
   pno2 = p2.TakePlayerInput();
     cout<<"Give the number guessed by player  3: ";
   pno3 = p3.TakePlayerInput(); 
  }

   void PrintResult(){
     if(pno1 == G_No){
          if(pno2 == G_No){
              if(pno3 == G_No){
                  cout<<"ALL player won the game"<<endl;
               }
               else{
                   cout<<"Player 1 and 2 has won the game"<<endl;
               }
              }
          else{
              if(pno3 == G_No){
                    cout<<"Player 1 and 3 has won the game"<<endl;
              }
              else{
                 cout<<"Player 1 has won the game"<<endl;
              }
          }
     
    }
    else if(pno2 ==G_No){
            if(pno3 == G_No){
               cout<<"Player 2 and 3 has Won the Game"<<endl;
            }
            else{
               cout<<"Player 2 has Won the Game"<<endl;
            }
    }
    else if(pno3 == G_No){
       cout<<"Player 3 has Won the Game"<<endl;
    }
    else{
        cout<<"All player Lost the game"<<endl;
    }
   }


};
int main(){
    cout<<"--------------------Let's Start The Game--------------------------"<<endl;  
    umpire u;
    u.GetGuesserNo();
    u.GetPlayerNo();

    cout<<"\n\n";
    
    u.PrintResult();
    cout<<"--------------------End Game--------------------------"<<endl;       
  
}