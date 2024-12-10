#include <vector>
#include <unordered_map>
using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>map;
        for(int i=0;i<nums.size();i++){
            int complemint=target-nums[i];

            if(map.find(complemint)!=map.end()){
                return {map[complemint],i};
            }


            map[nums[i]]=i;



        }

        return {};




    }
};
