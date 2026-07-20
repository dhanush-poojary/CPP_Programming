#include<iostream>//Leetcoded 1804 Implement Trie II (Prefix Tree) 
#include<unordered_map>//Leetcode premium
using namespace std;
class Node{//Node of the Trie
   public:
   char data;//each character represents different node

   bool terminal;//it tells us whether any of the word ends here or not

   unordered_map<char,Node*> children;//it represent left and right child nodes

   int countNodeEnding;//it represents no of words ending from here

   int countNodeStarting;//it represents no of words starting from here i.e for all nodes

   Node(char data){
      this->data = data;
      this->terminal = false;
   countNodeEnding = 0;
   countNodeStarting = 0;
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
            curr =  curr->children[ch];//go to that Node
            curr->countNodeStarting++;//for each node increament it
           }
           else{//if it does not have children with ch data then create a Node
              Node* child = new Node(ch); //Node created
              curr->children[ch] = child;//connecting Node to curr
              curr = child;//go to that Node
              curr->countNodeStarting++;//for each node increament it
           }

         }
         //after this loop ends curr will be at out last character of word
         curr->terminal = true;//make it as end of word 
        
         curr->countNodeEnding++;//after loop curr will be stading at terminal node so increament ending
    }
    
    int countNordsEqualTo(string word) {//it will tell no of words starting from current position
          Node* curr = root;
         for(int i=0;i<word.length();i++){
           char ch = word[i];
             if(curr->children.find(ch) != curr->children.end()){//only if ch is present then go to next node
            curr =  curr->children[ch];
           }
           else{//if not present then return  0
              return 0 ;
           }
         }
        return curr->countNodeEnding;//after loop curr will be stading at terminal node so increament ending
    }
    
   int countNordsStartWith(string word) {//it will tell no of words starting from current position
          Node* curr = root;
         for(int i=0;i<word.length();i++){
           char ch = word[i];
             if(curr->children.find(ch) != curr->children.end()){//only if ch is present then go to next node
            curr =  curr->children[ch];
           }
           else{//if ch is not present then return 0
              return 0 ;
           }
         }
        return curr->countNodeStarting; //return terminal nodes starting value 
      }
    void erase(string word){//it wont remove the characters but count of starting and ending words
      Node* curr = root;
         for(int i=0;i<word.length();i++){
           char ch = word[i];
           curr =  curr->children[ch];//go to next node
           curr->countNodeStarting--;//decreament start count
         }
        curr->countNodeEnding--;//decreament end count bcz 1 word is erased
      }
      };
int main(){
//    ["Trie","insert","insert","countWordsEqualTo","countWordsStartingWith","erase","countWordsEqualTo","countWordsStartingWith"]
// [[],["apple"],["apple"],["apple"],["app"],["apple"],["apple"],["app"]]
//output ->[null,null,null,2,2,null,1,1]
   Trie t;
   t.insert("apple");
   t.insert("apple");
   cout<<t.countNordsEqualTo("apple")<<endl;
   cout<<t.countNordsStartWith("app")<<endl;
   t.erase("apple");
   cout<<t.countNordsEqualTo("apple")<<endl;
   cout<<t.countNordsStartWith("app")<<endl;
}
