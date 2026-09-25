#include<iostream>//Practice question of employee workspace management system;
#include<vector>
using namespace std;
class Employee{
   public://data members
   string name;
   int emp_id;
   int salary;
   
   int getsalary(){//getter for retriving salary of specific object
    return salary;
   }
   void display(){//it will display the attributes of a specific object
     cout<<"  "<<name<<" "<<emp_id<<" "<<salary<<endl;
   }

   double AvgWages(vector<Employee> &v){//here calculating the salary of each object and then dividing total salary with sizeof vector
         double totalsal;
         for(int i=0;i<v.size();i++){
               totalsal+= v[i].getsalary();
         }
         return (totalsal / v.size());//average salary
   }
   int maxsal(vector<Employee> &v){
         int maxsal = 0;
         for(int i=0;i<v.size();i++){//here taking the minimum of all salary
             maxsal = max(maxsal,v[i].getsalary());
         }
         return maxsal;
   }
};
int main(){
//making a employee type of vector to store multiple objects      
 vector<Employee> v = {
  {"Ram",77,10000},{"Syam",76,10000},{"Bheem",75,10000},{"sitha",80,12000},{"hanuman",90,19000}
 };

 for(int i=0;i<v.size();i++){//here calling the display function for each object
     cout<<"Emp "<<i+1;
     v[i].display();
  }
  
  //here we can use any of the object of employee class
  cout<<endl<<"The average Wages are: "<<v[0].AvgWages(v)<<endl;//calling avgwages function using a object of employee 
  cout<<endl<<"The maximum salary of a employee: "<<v[0].maxsal(v)<<endl;//calling maxsal function using a object of employee
  
 
}
