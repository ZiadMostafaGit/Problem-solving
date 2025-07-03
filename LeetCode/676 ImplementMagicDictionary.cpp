#include <string>
#include<memory>
#include <vector>
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
protected:
  unique_ptr<Node> root;

public:
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
  bool search(string str) {
    int index = 0;
    Node *current = root.get();
    for (char c : str) {
      index = char_to_index(c);
      if (!current->childs[index]) {
        return false;
      }
      current = current->childs[index].get();
    }
    return true;
  }

  int char_to_index(char c) { return c - 'a'; }
};






class MagicDictionary :public Trie{
public:
    MagicDictionary():Trie(){}
    void buildDict(vector<string> dictionary) {

        for(string s:dictionary){
            insert(s);
        }
    }

    bool search(string searchWord) {
        bool res=dfs(searchWord,root.get(),0,1)    ;
       return res;
        }


        private:
        bool dfs(string searchword,Node*curr,int index, int is_ok){
		if(!curr)return false;
		if(index==searchword.size()){
			if(
				curr->is_leaf&&is_ok==0
			)
				return true;
		}

		int target=char_to_index(searchword[index]);

		for(int i=0;i<26;i++){
			if(!curr->childs[i])continue;
			if(i==target){
				if(dfs(searchword,curr->childs[i].get(),index+1,is_ok)){
					return true;
				}
			}
			else if(is_ok>0){
				if(dfs(searchword, curr->childs[i].get(), index+1, is_ok-1)){
					return true;
				}
			}
		}





//
		return false;




    }







};

/**
 * Your MagicDictionary object will be instantiated and called as such:
 * MagicDictionary* obj = new MagicDictionary();
 * obj->buildDict(dictionary);
 * bool param_2 = obj->search(searchWord);
 */
