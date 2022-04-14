vector <int> prefixSum(vector<int> v , int n) //Takes vector and size (return type vector) 
{
    //Similar array for sum 
    vector <int> prefix(n + 1) ; 
    prefix[0] = 0 ; 

    for(int i = 1 ; i <= n ; i++){
        prefix[i] = prefix[i - 1] + prefix[i - 1] ; //Sums Up previous value 
    }

    return prefix ; 
}

//I have to call this in main Function
//vector <int> c = prefixSum(v , v.size()) ; 

///Quick Style
/*
    vector<int> prefix = a;
    partial_sum(prefix.begin(), prefix.end(), prefix.begin()); //The prefix sum would be stored in the vector

*/ 

