#include<iostream>  //Student marks calculator 
#include<string.h>
using namespace std;
int main(){
  float m1,m2,m3,m4,m5,m6;
  float result;
  float percentage; //some result may be in fractional so we used float
  char grade[15];//character array declaration

  //user input of each subject marks
  cout<<"Enter the marks of sub 1:";
  cin>>m1;
  cout<<"Enter the marks of sub 2:";
  cin>>m2;
  cout<<"Enter the marks of sub 3:";
  cin>>m3;
  cout<<"Enter the marks of sub 4:";
  cin>>m4;
  cout<<"Enter the marks of sub 5:";
  cin>>m5;
  cout<<"Enter the marks of sub 6:";
  cin>>m6;

  result = m1+m2+m3+m4+m5+m6;//calculation of total
  percentage = (result/600)*100;//calculation of percentage
  cout<<endl<<"Total = "<<result<<endl;
  cout<<"Percentage = "<<percentage<<endl;

  if(m1<35 || m2<35 || m3<35 || m4<35 || m5<35 || m6<35){//this is if any subject has marks less then passing marks

 /////////////////////*impotant*///////////////////////////////////  
// we can't copy a string directly so we have to use strcpy or any loop to make a deep copy . strcpy function that requires string.h
    strcpy(grade,"Fail");
    cout<<"Grade = "<<grade;
  }
  else if(percentage>=85){
    strcpy(grade,"Distinction");
    cout<<"Grade = "<<grade;
  }
  else if(percentage>=70){
    strcpy(grade,"First class");
    cout<<"Grade = "<<grade;
  }
  else if(percentage>=50){
    strcpy(grade,"Second class");
    cout<<"Grade = "<<grade;
  }
  else{
    strcpy(grade,"Pass");//this is for if percentage is greater then 35
    cout<<"Grade = "<<grade;
  }

}