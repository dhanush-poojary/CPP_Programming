#include<iostream> //leetcode  211  Design Add and Search Words Data Structure
#include<unordered_map>
using namespace std;
class Node{//Node of the Trie
   public:
    char data;//each character represents different node
    unordered_map<char,Node*> children;//it represent left and right child nodes
    bool terminal;//it tells us whether any of the word ends here or not
    Node(char data){
       this->data = data;
       terminal = false;
    }
};
class WordDictionary {
public:
   Node* root; 
    WordDictionary() {
        root = new Node('\0');//root of Trie contains NULL
    }
    
    void addWord(string word) {//new Node word insertion in Trie
        Node* curr = root;//make this otherwise root will be lost
        for(int i=0;i<word.size();i++){
            char ch = word[i];//current element to be inserted into trie
            if( curr->children.find(ch)!= curr->children.end()){//checking whether it already has created Node with ch data
               curr =  curr->children[ch];
            }
            else{//if it does not have children with ch data then create a Node
                 Node* child = new Node(ch);//Node created
                   curr->children[ch] = child;//connecting Node to curr
                   curr = child;//go to that Node
            }
        }
            //after this loop ends curr will be at out last character of word
        curr->terminal = true;//make it as end of word 
    }

     bool dfs(Node* curr,string &word,int index){//it will ignore . and check if all character present in any depth of Trie

          if(index == word.size()) return curr->terminal;//when array reaches end then if our curr is standing at any words ending then return true ,if no words ending here then return false
             char ch = word[index];
             if(ch == '.'){//if .  means explore all possibilities bcz after . any character can be present or not
                 for(auto p : curr->children){//traverse each nodes each children to now 
                     if(dfs(p.second,word,index+1))return true;//element present then return true
                 }
                return false;//otherwise false if not present
             }
             else{//if any other character other then .
                if(curr->children.find(ch) == curr->children.end()) return false;//if ch is not found then return false
                return dfs(curr->children[ch],word,index+1);//go to next character 
             }
          
          return true;//means while word is present
     }
    bool search(string word) {//it will return true if word is entirely present if any 1 character is not present then false
        return dfs(root,word,0);
    }
};
int main(){
//   ["WordDictionary","addWord","addWord","addWord","search","search","search","search"]
// [[],["bad"],["dad"],["mad"],["pad"],["bad"],[".ad"],["b.."]]
// Output
// [null,null,null,null,false,true,true,true]

    WordDictionary trie;
    trie.addWord("bad");
    trie.addWord("dad");
    trie.addWord("mad");
   cout<<trie.search("pad")<<endl;
    cout<<trie.search("bad")<<endl;
   cout<< trie.search(".ad")<<endl;
    cout<<trie.search("b..")<<endl;
  }