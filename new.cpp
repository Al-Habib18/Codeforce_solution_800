#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int n, k , l ,c , d, p, nl, np;
    int toast = 0;
    cin  >> n >> k >> l >> c >> d >> p >> nl >> np;

    int drink = k *l ;  // amount of drinks
    int limes = c * d;  // amount of limes
    int salt = p;       // amount of salt


    while((drink >= nl) && (limes >= 1) && (salt >= np) ){
        drink -= nl;
        limes -= 1;
        salt -= np;
        ++toast;
    }
   
    int res = toast / n;
    cout << res << endl;
    return 0;
}