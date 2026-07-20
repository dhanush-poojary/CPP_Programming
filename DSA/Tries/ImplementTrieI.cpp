#include<iostream>       //Leetcoded 208  Implement Trie (Prefix Tree)
#include<unordered_map> //prefix data structure
using namespace std;
class Node{//Node of the Trie
   public:
   char data;//each character represents different node
   
   bool terminal;//it tells us whether any of the word ends here or not

   unordered_map<char,Node*> children;//it represent left and right child nodes
   Node(char data){
      this->data = data;
      this->terminal = false;
   }
   void makeTerminal(){//it makes a node as terminal node for any one word
    this->terminal = true;
   }
   bool isTerminal(){//Node represents end of the any one word not Trie 
     return this->terminal == true;
   }
};
class Trie {
public:
    Node* root;
    Trie() {
       root = new Node('\0');//root of Trie contains NULL
    }
    
    void insert(string word) {//new Node word insertion in Trie
         Node* curr = root;//make this otherwise root will be lost
         for(int i=0;i<word.length();i++){//traverse in word and create a node for each alphabet

           char ch = word[i];//current element to be inserted into trie
           if(curr->children.find(ch) != curr->children.end()){//checking whether it already has created Node with ch data
            curr =  curr->children[ch];
           }
           else{//if it does not have children with ch data then create a Node
              Node* child = new Node(ch); //Node created
              curr->children[ch] = child;//connecting Node to curr
              curr = child;//go to that Node
           }

         }
         //after this loop ends curr will be at out last character of word
         curr->makeTerminal();//make it as end of word 
    }
    
    bool search(string word) {//if a word is completely present then returns true , if we try to search prefix then even if the entry is there ans will be false
          Node* curr = root;//make this otherwise root will be lost
         for(int i=0;i<word.length();i++){
           char ch = word[i];//current element to be searched
             if(curr->children.find(ch) != curr->children.end()){//checking whether it already has created Node with ch data
            curr =  curr->children[ch];//then go to that Node
           }
           else{//if it does not have children with ch data then return false
              return false;
           }
         }
        return curr->isTerminal();//if we reached end of the word and curr is at the terminal then return true otherwise return false
    }
    
    bool startsWith(string word) {//specifies whether WORD starting with word is present in Trie or not

           Node* curr = root;//make this otherwise root will be lost
         for(int i=0;i<word.length();i++){
           char ch = word[i];//current element to be searched
             if(curr->children.find(ch) != curr->children.end()){//checking whether it already has created Node with ch data
            curr =  curr->children[ch];//then go to that Node
           }
           else{//if not exisits in map then return false bcz this character is not present  as of now ,Not in Entire tree
              return false;
           }
         }
           return true;//if all character present of word then return true

    }
};
int main(){
//     ["Trie", "insert", "search", "search", "startsWith", "insert", "search"]
// [[], ["apple"], ["apple"], ["app"], ["app"], ["app"], ["app"]]
// Output
// [null, null, true, false, true, null, true]

  Trie t;
  t.insert("apple"); 
  cout<<t.search("apple");
  cout<<t.search("app");
  cout<<t.startsWith("app");
  t.insert("app");
  cout<<t.search("app");

}
