string tmp;
vector<string> v; /// the devil in the sky

for ( auto u : s ) {
    if ( isspace( u ) ) { //got a space?Throw string to vector 
        v.push_back ( tmp );
        tmp.clear();
    }
    
    else tmp += u; //No space.So,Generate word. 
}

v.push_back ( tmp ); //Last word got missing? Throw last word //last time