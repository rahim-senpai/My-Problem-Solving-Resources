/*
 * Problem LInk : https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/ 
*/
//First Solution 
class Solution {
public:
    vector<int> twoSum(vector<int>& v, int target) {
        for(int i = 1 ; i < v.size() ; i++) {
            int x = target - v[i] ;
            int lo = lower_bound(v.begin() , v.begin() + i - 1 , x) - v.begin() ;
                
            if(v[i] + v[lo] == target) {
                return {lo + 1 , i + 1} ;
            }
        }
        
        return {-1,-1} ;
    }
};

// Second Solution 
class Solution {
public:
    vector<int> twoSum(vector<int>& v, int target) {
        int i = 0 , j = v.size() - 1 ;
        
        while(i < j) {
            if(v[i] + v[j] == target) {
                break ;
            }
            else if(v[i] + v[j] > target) {
                j -- ;
            }
            else{
                i ++ ;
            }
        }
        
        return {i + 1, j + 1} ;
    }
};
