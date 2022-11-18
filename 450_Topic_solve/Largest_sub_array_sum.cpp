/*
    Problem Link : https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1
*/

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(int arr[], int n){
        
        // Your code here
        int sum = 0 , best = 0 ; 
        for(int i = 0 ; i < n ; i++){
            sum = max(arr[i] , sum + arr[i]) ;
            best = max(best , sum) ;
        }
        
        return best ; 
        
    }
};