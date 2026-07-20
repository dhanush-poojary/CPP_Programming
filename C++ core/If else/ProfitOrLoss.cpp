#include<iostream>//print if a user made profit or loss upon selling
using namespace std;
int main(){
  int product_price,selling_price;//actual cost and selling cost
  cout<<"Enter the product's price: ";
  cin>>product_price;//user input
  cout<<"Enter the selling price: ";
  cin>>selling_price;//user input

  if(selling_price>product_price){//sp > pp means profit
     cout<<"You made a profit!"<<endl;
     cout<<"Profit = "<<selling_price-product_price;//this will print the exact value of profit by minusing sp with pp
    }
   else if(product_price>selling_price){//pp>sp means loss
      cout<<"You made a Loss!"<<endl;
//here maintaining the order while minusing is important otherwise it will result in negetive
      cout<<"Loss = "<<product_price-selling_price;//this will print the exact value of loss by minusing pp with sp
  } 
  else{//this condtion is for if both pp and sp are same means 50 and 50 the this block will execute
     cout<<"Neither Profit nor Loss!";
  }
   
}