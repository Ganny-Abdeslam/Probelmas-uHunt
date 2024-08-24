#include <iostream>
using namespace std;
int ciclos(int n, int cout);

int main() {
    int t, a, b, c;

    while (cin >> a >> b){
        if (a > b){
            c = a;
            a = b;
            b = c;
            c = 0;
        }

        c = ciclos(a, 0);
        for (int i = a+1; i <= b; i++){
            t = ciclos(i, 0);
            if (t > c){
                c = t;
            }            
        }

        cout << a << " " << b << " " << c;
        cout << endl;
    }
    
    return 0;
}

int ciclos(int n, int count){
    if (1 == n){
        count++;

        return count;
    }

    if (n % 2 != 0){
        n = n*3 + 1;
    }else{
        n = n/2;
    }

    count += ciclos(n, count);
    count++;

    return count;
}