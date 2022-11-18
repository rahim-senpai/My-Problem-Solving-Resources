
/*
    Problem link : https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1
*/

//This function is completed
void rotate(int arr[], int n)
{
    int temp , t ; 
    temp = arr[n-1] ;
    for(int i = n-1 ; i >= 0 ; i--){
        arr[i] = arr[i-1] ;
        //printf("%d " ,arr[i]) ;
    }
    //printf("\n") ;
    arr[0] = temp ;
}