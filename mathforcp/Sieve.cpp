#include <bits/stdc++.h>
using namespace std ;
#define endl '\n' 

int main() { 
	int n ; cin >> n ; 

	std::vector<int> prime(n + 1 , 1); 

	///complexity is N(log(log(n)))
	prime[1] = 0 ; 
	for(int i =  2 ; i <= n ; i++) {
		if(!prime[i]) continue ;
		for(int j = i * i ; j <= n ; j += i){
			prime[j] = 0 ; 
		}
	}

	/// Prime[x] stores is x is prime or not	
	int c = 0 ;
	for(auto u : prime) {
		cout << c << " = " << u << endl ; c ++ ; 
	}
	return 0 ;
}