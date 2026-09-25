#include<iostream>//Array of objects usage
using namespace std;
class cricketor{//class declaration
     public:
     string name;
     int matches;
     int runs;
};
int main(){
  int n;
  cout<<"Enter how many cricketors details to insert: ";
  cin>>n;//user input

  // cricketor dhoni;
  // dhoni.name = "Dhoni";
  // dhoni.matches = 100;
  // dhoni.runs = 10000;

  // cricketor virat;
  // virat.name = "Goli";
  // virat.matches = 49;
  // virat.runs =  69;
  // cricketor cricketors[2] = {dhoni,virat};//we can mannually declare array inside objects like this
  // cout<<cricketors[0].name<<endl;
  // cout<<cricketors[1].name<<endl;

  cricketor cricketors[n];//or we can do using an for loop n number of objects created
  //by the name of index of the array
   
  for(int i=0;i<n;i++){//taking input of all the attributes of n cricketors
    cout<<"\t\tCricketor no "<<i+1<<endl;
    cout<<"Enter the name: "<<endl;
    cin>> cricketors[i].name;
    cout<<"Enter the no of mathches: "<<endl;
    cin>>cricketors[i].matches;
    cout<<"Enter the no of runs: "<<endl;
    cin>>cricketors[i].runs;
    cout<<endl;
  }
  cout<<"THE CRICKETORS DETAILS"<<endl;
  for(int i=0;i<n;i++){//printing all the attributes of n cricketors
      cout<<"\t\tCricketor no "<<i+1<<endl;
    cout<<"Name: "<<cricketors[i].name<<endl;
    cout<<"No Of Mathches: "<<cricketors[i].matches<<endl;
    cout<<"The No Of Runs: "<<cricketors[i].runs<<endl;
    cout<<endl;
  }

}