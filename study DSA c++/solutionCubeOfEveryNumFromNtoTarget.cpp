#include <bits/stdc++.h>
using namespace std;
long long sum = 0;
long long cubeOfeveryNumFromNtoTarget(long long n)
{
    if (n==0) return sum;
    cubeOfeveryNumFromNtoTarget(n-1);
    sum += pow(n, 3);
    return sum;
}

int main()
{
    long long n ;
    cin>>n;
    cout<<cubeOfeveryNumFromNtoTarget(n);

    return 0;
}