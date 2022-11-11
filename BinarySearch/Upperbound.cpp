#include <bits/stdc++.h> 
#define endl '\n' 
using namespace std ;

int a[] = {1 , 2 , 2 , 2 , 3 , 3 , 3 , 4} ;

int main(){
	int l = 0 , r = 7 , target = 3 ;
	int lowerbound = 8 ; 

	while(l <= r) {
		int mid = (l + r) / 2 ;

		if(a[mid] >= target) {
			lowerbound = min(lowerbound , mid) ;
			r = mid - 1 ;
		}

		else l = mid + 1; 
	}

	cout << lowerbound << endl ;
	return 0 ;
}
