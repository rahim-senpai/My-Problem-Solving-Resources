/*
	Problem Link : https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1
*/
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // coode here
        int zero , one , two ; 
        zero = one = two = 0 ;
        
        for(int i = 0 ; i < n ; i++){
            if(a[i] == 0) zero++ ; 
            if(a[i] == 1) one++ ;
            if(a[i] == 2) two++ ; 
        }
        
        one += zero ; two += one ; 
        for(int i = 0 ; i < zero ; i++) a[i]= 0 ;
        for(int i = zero ; i < one ; i++) a[i] = 1 ;
        for(int i = one ; i < two ; i++) a[i] = 2 ;
    }
    
};

