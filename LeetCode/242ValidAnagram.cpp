#include <iostream>
#include <vector>
#include <string>


//Given two strings s and t, return true if t is an anagram of s, and false otherwise.


using namespace std;

class Solution {
public:


    bool isAnagram(string s, string t) {
        pmr::vector<int>res(265,0);
        if(s.size()!=t.size()){
            return false;
        }



        for(const char&c:s){
            res[c-'a']++;

        }


        for(const char&c:t){

            res[c-'a']--;
        }

        for(int num:res){
            if(num!=0){
                return false;
            }
        }

        return true;




    }
};
