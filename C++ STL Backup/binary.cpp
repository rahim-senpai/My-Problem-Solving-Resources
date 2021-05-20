//Binary Conversion 
string convert(long long int n) 
{
	string s = "" ; 
	while(n > 0){ 
		if(n % 2 == 1) s = "1" + s ; 
		else s = "0" + s ;
		n /= 2 ; 
	}
	
	return s ;  
}

//Decimal Conversion
long long int decodeBack(string s)
{
	long long int n = 0 , p = 1 ; 
	for(int i = s.length() -1 ; i >= 0 ; i--){
		n += ((s[i] - '0') * p) ; 
		p *= 2 ; 
	}
	
	return n ; 
}
