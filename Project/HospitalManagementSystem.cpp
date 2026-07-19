#include<iostream>//Hospital Management System                      //Project 2
#include<vector>
using namespace std;
int pid = 1501;
int did = 2501;
class patient{
  public:
     string name;
     int age;
     int ID;
     patient(string name,int age){
        ID = pid;
        pid++;
        this->name = name;
        this->age = age;
     }
};
class doctor{
   public:
  string name;
     int age;
     int ID;
     doctor(string name,int age){
        ID = did;
        did++;
        this->name = name;
       this->age = age;
     }
};
class appointment{
  public:
  int patientId;
  int doctorId;
  string Date;
   appointment(int pid,int Did,string date){
       patientId = pid;
    doctorId = Did;
    Date = date;
   }
};

vector<patient> allpatient;
vector<doctor> alldoctor;
vector<appointment> allappointment;
bool Ispatient(int id){
    for(int i=0;i<allpatient.size();i++){
       if(id == allpatient[i].ID) return true;
    }
    return false;
}
bool Isdoctor(int id){
    for(int i=0;i<alldoctor.size();i++){
       if(id == alldoctor[i].ID) return true;
    }
    return false;
}
void Addpatient(){
  string s;
  cout<<"Enter Patient name: "<<endl;
  cin>>s;
  int n;
  cout<<"Enter Patient Age: "<<endl;
  cin>>n;
  patient p(s,n);
  allpatient.push_back(p);
  cout<<"new Patient added successfully"<<endl;
}
void Adddoctor(){
 string s;
  cout<<"Enter doctor name: "<<endl;
  cin>>s;
  int n;
  cout<<"Enter Doctor Age: "<<endl;
  cin>>n;
  doctor d(s,n);
  alldoctor.push_back(d);
  cout<<"new doctor added successfully"<<endl;
}
void ScheduleAppointment(){
  int a,b;
  string s;
   cout<<"Enter the patient ID: ";
   cin>>a;
   if(Ispatient(a)){
      cout<<"Invalid patient ID!!!"<<endl;
         cout<<"Appointment scheduling unsuccessfully"<<endl;
         return;
        }
        cout<<"Enter the Doctor ID: ";
        cin>>b;
        if(Isdoctor(b)){
          cout<<"Invalid doctor ID!!!"<<endl;
          cout<<"Appointment scheduling unsuccessfully"<<endl;
      return;
   }
   cout<<"Enter the Date (DD-MM-YYYY): ";
   cin>>s;
   appointment ap(a,b,s);
   allappointment.push_back(ap);
   cout<<"Appointment scheduled successfully"<<endl;
}
void Viewpatient(){
  cout<<endl<<"::::::::::::Patient Details:::::::::::"<<endl;
   for(int i=0;i<allpatient.size();i++){
    cout<<"Patient Number "<<i+1<<endl;
    cout<<"Patient ID: "<<allpatient[i].ID<<endl;
       cout<<"Patient name: "<<allpatient[i].name<<endl;
       cout<<"Patient Age: "<<allpatient[i].age<<endl;
       cout<<"__________________________________"<<endl<<endl;
   }
}
void Viewdoctor(){
    cout<<endl<<"::::::::::::Doctor Details:::::::::::"<<endl;
   for(int i=0;i<alldoctor.size();i++){
    cout<<"Doctor ID: "<<alldoctor[i].ID<<endl;
       cout<<"Doctor name: "<<alldoctor[i].name<<endl;
       cout<<"Doctor Age: "<<alldoctor[i].age<<endl;
       cout<<"__________________________________"<<endl<<endl;
   }
}
void Viewappointment(){
    cout<<endl<<"::::::::::::Appointment Details:::::::::::"<<endl;
   for(int i=0;i<allappointment.size();i++){
    cout<<"Patient ID: "<<allappointment[i].patientId<<endl;
       cout<<"Doctor Name "<<allappointment[i].doctorId<<endl;
       cout<<"Appointment Date: "<<allappointment[i].Date<<endl;
       cout<<"__________________________________"<<endl<<endl;
   }
}

int main(){
 cout<<"---------------Hospital Management System------------------------"<<endl; 
  while(true){
    cout<<"1. Add patient"<<endl;
    cout<<"2. Add Doctor"<<endl;
    cout<<"3. Schedule Appointment"<<endl;
    cout<<"4. View Patient"<<endl;
    cout<<"5. View Doctor"<<endl;
    cout<<"6. View Appointment"<<endl;
    cout<<"7. Exit"<<endl;

    int choice;
    cout<<"Enter your choice: ";
    cin>>choice;
     switch(choice){
      case 1:
             Addpatient();
               break;
       case 2:
            Adddoctor();
               break;
        case 3:
            ScheduleAppointment();

               break;
       case 4:
              Viewpatient();
               break;
       case 5:
             Viewdoctor();
               break;
      case 6:
           Viewappointment();
           break;
      case 7:
         cout<<"Exisitng......";
         exit(0);
      default:
         cout<<"invalid choice !!!"<<endl<<endl<<endl;
         break; 
     }
  }
}