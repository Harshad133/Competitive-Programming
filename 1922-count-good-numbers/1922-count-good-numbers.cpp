long long m = 1e9+7;

class Solution {
public:

long long myPow(long long x, long long n) {
        if(n == 1)
            return x;

        if(n == 0)
            return 1;

        if(n % 2 == 0)
            return myPow((x*x)%m,n/2);
        else
            return (x * myPow((x*x)%m,(n-1)/2))%m;
}
   
long long countGoodNumbers(long long n) {
    long long o = n/2;
    long long e = n-o;
    long long f = myPow(5,e);
    long long fo =myPow(4,o);

    cout<<" f = "<<f<<" fo = "<<fo<<endl;
    return (int)(f*fo % m);
}

};