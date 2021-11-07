#include <iostream> 
using namespace std;
int main () { 
    int n, a, b, c, d, e, f, g, h;
    cin >> n;  
    a = n / 1000; // 1 integer 
    c = n - (a * 1000); 
    b = (n - (a * 1000)) / 100; // 2 integer 
    d = (c - (b * 100)) / 10; // 3 integer
    e = (c - (b * 100));  
    f = e - (d * 10); // 4 integer 
    g = (a - f);
    h = (b - d);
    cout << (g * g + h * h) + 1 << endl; 
    
    
   return 0; 
}
