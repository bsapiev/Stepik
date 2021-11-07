#include <iostream>
using namespace std;
int main(){ 
    int n, h, m, s, m1, m2, a, s1, s2, h1;
    cin >> n; 
    h = n / 3600;
    h1 = h - ((h / 24) * 24);
    a = n - (h * 3600);
    m = (n - (h * 3600)) / 60;
    m1 = m / 10; 
    m2 = m % 10;
    s = a - (m * 60);
    s1 = s / 10;
    s2 = s % 10;
    cout << h1 << ":" << m1 << m2 << ":" << s1 << s2;
    return 0;
}
