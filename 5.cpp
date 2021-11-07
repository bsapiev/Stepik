#include <iostream> 
using namespace std; 
int main(){ 
    int n, k, b; 
    cin >> n; 
    k = n % 100;
    b = k % 10; 
    cout << (k - b) / 10;  
    return 0; 
}  
