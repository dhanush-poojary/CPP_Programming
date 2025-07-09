#include <iostream>//To print the subsets of a given string
#include<vector>
using namespace std;  //same logic as subset
void subset(string ans,string str,vector<string>&v){
    if(str == ""){//when str becpmes empty then end function
      v.push_back(ans);//and also push it back in vector string
       // cout<<ans<<" ";//it will print ans and 
        return;
    }
    char ch = str[0];//it will give 0  element of modifed str
    //in these calles str will be changed
    subset(ans+ch,str.substr(1),v);//we are appending that character in ans string
    subset(ans,str.substr(1),v);//in this we are not appending it in

}
int main()
{  string str = "abc";//for this there will be 2 to the power 3 = 8 subsets
   vector<string>v;//this is for storing string
    subset("",str,v);//function called with empty string 
    for(int i=0;i<v.size();i++){//print the vector string
        cout<<"{ "<<v[i]<<" } ";
    }
}