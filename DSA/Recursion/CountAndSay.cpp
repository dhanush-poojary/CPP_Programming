#include<iostream>//Leetcode 38                  Count and Say
#include<string>
using namespace std;
string say(int n){
    if(n == 1) return "1";//at the begining of the sequence there will be "1"
    string str = say(n-1);//recursion call

    int freak = 1;//set the freak to 1 bcz atleast 1 element will be guranteed present
    char ch = str[0];//1st character of string
    string res = "";

    for(int i=1;i<str.length();i++){
        char dh = str[i];//2nd character of string
        if(ch == dh){//if 1st and 2nd character are same then freak++
            freak++;
        }
        else{//otherwise append freak and ch to res string
            res+= (to_string(freak) + ch);
            freak = 1;//reset the frequency
            ch = dh; //it can also be str[i]
        }
    }
    //even after finishing the loop once again append freak and ch to res
    res+= (to_string(freak) + ch);
    return res;//then return res string

}
int main(){
    //3322251 -> 23321511
    int n = 4; //n = 4 -> 1 2 1 1
    cout<<say(n);
}