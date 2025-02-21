#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    cout << "Введіть число N: ";
    cin >> n;

    for (int a = 1; a <= n; a++) {
        for (int b = a; b <= n; b++) { 
            int c2 = a * a + b * b;
            int c = sqrt(c2);
            if (c * c == c2 && c <= n) { 
                cout << "(" << a << ", " << b << ", " << c << ")\n";
            }
        }
    }

    return 0;

}