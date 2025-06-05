#include <vector>
#include <algorithm>
#include <math.h>
#include <set>
#include <string>
#include <unordered_map>
using namespace std;



class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string,vector<string>>map;
        vector<vector<string>>resulte;

        for(auto &temp:strs){

            string key=temp;
            sort(key.begin(),key.end());
            map[key].push_back(temp);

        }

        for (auto &pair:map){

            resulte.push_back(pair.second);

        }


        return resulte;

    }
};
