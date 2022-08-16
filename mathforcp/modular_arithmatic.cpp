#include <bits/stdc++.h>
using namespace std ;
#define endl '\n' 

/*

	Some Example of modular arithmatic is 
		
	Even + Even  = Even 
	Even + Odd  = Odd
	Odd + Odd  = Even 

	Even * Even = Even 
	Even * Odd = Even 
	Odd * Odd  = Odd 

	Uses of mod , 

	(a + b) % m = (a % m + b % m) % m ;
	(a * b) % m = (a % m * b % m) % m ;
	(a - b) % m = (a % m - b % m + m) % m ;

*/


///Binary Exponentiaiton
//TC = O(log(b)) 
/*
	a ^ b (base case , a^0 = 1) 
	if(b is even) (a^(b / 2))^ 2
	else a*(a^(b-1 / 2))^ 2
*/
int powermod(int a , int b , int m) {
	if(b == 0) {
		return a % m ;
	}

	if(b % 2 == 0) {
		int t = powermod(a , b/2 , m) ;
		t = (1ll * t * t) % m ;
		return (1ll * t * t % m) ;
	}

	else{
		int t = powermod(a , (b - 1) / 2 , m) ;
		t = (1ll * t * t) % m ;
		return (1ll * a * t % m) ; 
	}
}

int main() { 
	int a , b , m ; /// For m is prime it's working to find the inverse mod

	cin >> a >> b >> m ;

	int res1 = (a / b) % m ;

	a = a % m ;
	int inv_b = powermod(b , m-2 , m) ; // fermats little theorem
	int res2 = a * inv_b % m ;

	cout << res1 << ' ' << res2 << endl ;
	return 0 ;
}