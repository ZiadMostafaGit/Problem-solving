#include <vector>
#include <memory>
#include <string>
using namespace std;
class Node {
public:
  unique_ptr<Node> childs[26];
  bool is_leaf;

  Node() {
    is_leaf = false;
    for (int i = 0; i < 26; i++) {
      childs[i] = nullptr;
    }
  }
};

class Trie {

public:

unique_ptr<Node> root;
  Trie() { root = make_unique<Node>(); }

  void insert(string str) {
    Node *current = root.get();

    int index = 0;
    for (char c : str) {
      index = char_to_index(c);
      if (!current->childs[index]) {
        current->childs[index] = make_unique<Node>();
      }
      current = current->childs[index].get();
    }
    current->is_leaf = true;
  }
  int search(string str) {
    int index = 0;
    Node *current = root.get();
    int size=0;
    for (char c : str) {
        if(current->is_leaf){
            return size;
        }
      index = char_to_index(c);
      if (!current->childs[index]) {
          return -1;
      }
      current = current->childs[index].get();
      size++;
    }
    return -1;
  }

  int char_to_index(char c) { return c - 'a'; }


  vector<string> split_by_whitespace(const string& s) {
      vector<std::string> words;
      int i = 0;

      while (i < s.size()) {
          while (i < s.size() && s[i] == ' ') {
              i++;
          }

          int j = i;
          while (j < s.size() && s[j] != ' ') {
              j++;
          }

          if (i < j) {
              words.push_back(s.substr(i, j - i));
          }

          i = j;
      }

      return words;
  }

  string solve(string s){
      string res;
      vector<string>words;
      words=split_by_whitespace(s);
      for (string str:words){
       int index=search(str);
       if(index!=-1){
           res+=str.substr(0,index)+" ";
       }else{
           res+=str+" ";
       }

   }
   res=res.substr(0,res.size()-1);
   return res;
  }




};







class Solution {
    private:
    Trie t=Trie();
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        for(string word :dictionary){
            t.insert(word);
        }
        string res=t.solve(sentence);

        return res;



    }
};
