/* Knights Move*/
#include <bits/stdc++.h>
#define endl '\n'
using namespace std ;

//Knight Move
int dx[] = {2, -2, 2, -2, 1, -1, 1, -1} ;
int dy[] = {1, 1, -1, -1, 2, 2, -2, -2} ;

bool checkInside(int x , int y) {
	return (x >= 0 && y >= 0) && (x < 8 && y < 8) ;
}

void solve() {
	char c , d ; cin >> c >> d ;

	int x = c - 'a' ;
	int y = d - '1' ;

	//cout << x << ' ' << y << endl;
	int count = 0 ;
	for(int i = 0 ; i < 8 ; i++) {
		count += checkInside(dx[i] + x , dy[i] + y) ;
	}

	cout << count << endl;
}

int main() {
	int t ; cin >> t ;
	while (t--) solve() ;
	return 0 ;
}
