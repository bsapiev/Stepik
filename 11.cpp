#include <iostream> 
using namespace std;
int main() {
    int h1, m1, s1, h2, m2, s2, a, b; 
    cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
    a = (h2 * 3600 + m2 * 60 + s2) - (h1 * 3600 + m1 * 60 + s1); 
    cout << a; 
    return 0; 
} 
