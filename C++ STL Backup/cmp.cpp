bool cmp(const int &a , const int &b){
	return a > b ; 
}
//Use any other variable in place of (int)

//we can sort this way too in sort func... 

///sort(x.begin() , x.end() ,greater<char>()) ; //char or some other variable. 
 
bool cmpp(const int &a , const int &b){
	return a % 2 < b % 2 ; // Even first , odd last 
}