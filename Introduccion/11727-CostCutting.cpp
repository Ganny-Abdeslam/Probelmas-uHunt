#include <iostream>
using namespace std;
int traer(int a, int b, int c);

int main(int argc, char const *argv[]){
    int n;
    int i = 0;
    int a, b, c;
    int max;

    cin >> n;

    int vector[n];

    while (n > i){
        cin >> a >> b >> c;
        max = traer(a, b, c);
        vector[i] = max;
        i++;
    }

    for (int j = 0; j < n; j++){
        cout << "Case " << j+1 << ": " << vector[j] << "\n";
    }
    
    
    return 0;
}

int traer(int a, int b, int c){
    if ((a >= b && a <= c) || (a <= b && a >= c))
        return a;
    else if ((b >= a && b <= c) || (b <= a && b >= c))
        return b;
    return c;
}