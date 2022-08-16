#include <bits/stdc++.h>
using namespace std ;
#define endl '\n' 

int main() { 

	// We wiil iterating by multiples. 
	int n ; cin >> n ;

	vector <int> div(n + 1) ; 

	for(int i = 1 ; i <= n ; i++){
		for(int j = i ; j <= n ; j += i){
			div[j] ++ ; /// i is the divisor of j
		}
	}

	for(int i = 1 ; i <= n ; i++){
		cout << i << " = " << div[i] << endl ;
	}

	return 0; 	
}

/// Time complexity = Nlog(N)	