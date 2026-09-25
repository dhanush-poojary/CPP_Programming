#include<iostream>//The Book class that returns the count of books and if the book is present or not by using title
using namespace std;
class book{
  public:
  string name;//data  members
  int price;
  int pages;
  
  int countBooks(int p){//member functions it will return the count of books less then price
     if(price < p) return 1;
     else return 0;
  }
  bool isBookPresent(string t){//it will return true for title d book found vice verse false
        if( name == t) return true;
        else return false;
  }
};
int main(){
    book maths;//object created
    maths.name = "Gollibaje";
    maths.price = 199;
    maths.pages = 1000;
    
    cout<<maths.countBooks(100)<<endl;//calling the function by passing 100
    cout<<maths.isBookPresent("Gollibaje");//calling the function by passing tiltle
}