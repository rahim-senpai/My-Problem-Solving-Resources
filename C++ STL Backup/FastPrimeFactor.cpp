void primeFactors(int N)
{
    int Count=2;
    while(N > 1)
    {
        if(N % Count == 0){
        cout << Count << " " ;
        N /= Count ;
        }
        else Count ++;
    }
}
