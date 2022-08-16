#include <bits/stdc++.h> 
using namespace std ;
#define endl '\n'

void solve() {

	int n ; cin >> n ; 

	int count = 0 ; 

	/// time complexity O(sqrt(n)) 
	for(int i =  1 ; i * i <= n ; i++){
		if(i * i == n) count ++ ; // for perfect number count should be 1
		else if(n % i == 0) count += 2 ;
	}

	cout << count << endl ;
}

int main() {
	solve() ;
	return 0 ;
}