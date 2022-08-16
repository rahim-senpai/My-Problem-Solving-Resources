#include <bits/stdc++.h>
using namespace std ;
#define endl '\n' 

int gcd(int a , int b){
	if(a == 0) {
		return b ;
	}

	return gcd(b % a , a) ;
}

int main() { 

	return 0 ;
}