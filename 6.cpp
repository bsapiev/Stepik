#include <iostream> 
using namespace std; 
int main(){ 
    int n, b, k, c, a; 
    cin >> n; 
    b = n % 100;
    k = (n - b) / 100; 
    c = b % 10; 
    a = (b - c) / 10; 
    cout << k + a + c; 
    return 0;
} 
