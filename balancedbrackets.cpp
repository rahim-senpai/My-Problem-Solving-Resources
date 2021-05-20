bool isBalanced(const char a ,const char b)
{
	return (a == '(' && b == ')') || (a == '{' && b == '}') || (a == '[' && b == ']') ; 
}

bool balancedOrnot()
{
	string str ; 
	cin >> str ; 

	stack <char> s ; 
	bool pass = true ; 

	for(auto u : str){
		if(u == '(' || u == '{' || u == '[') s.push(u) ; 
		else{
			if( s.empty() ){
				pass = false ; 
				break ; 
			}
			else{
				if(isBalanced(s.top() , u)){
					s.pop() ; 	
				}
				else{
					pass = 0 ; 
					break ; 
				}
			}
		}
	}

	if(!s.empty()) pass = 0 ; 

	return (pass ? 1 : 0) ; 
}