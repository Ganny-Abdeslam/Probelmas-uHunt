#include <iostream>
using namespace std;
int two_pointers(int number[], int n);

int main(){
    int n;

    cin >> n;

    int number[n];

    for (int i = 0; i < n; i++){
        cin >> number[i];
    }
    
    int r = two_pointers(number, n);

    cout << r;

    return 0;
}

int two_pointers(int number[], int n){
    int i = 0, j = n-1;
    int posMin = 0, posMax = n-1;
    int distMax = 1;
    bool min = false, max = false;
    while (i <= j && (!max || !min)){
        if(number[i] == 1 && !min){
            posMin = i;
            min = true;
        }
        
        if (number[j] == 1 && !min){
            posMin = j;
            min = true;
        }
        
        if(number[i] == n && !max){
            posMax = i;
            max = true;
        }
        
        if (number[j] == n && !max){
            posMax = j;
            max = true;
        }

        ++i;
        --j;
    }
    int aux;
    if(posMin > posMax){
        aux = posMin;
        posMin = posMax;
        posMax = aux;
    }
    
    int x, y;

    x = abs(0-posMax) >= abs(n-1-posMax) ? 0 : n-1;
    y = abs(0-posMin) >= abs(n-1-posMin) ? 0 : n-1;
    
    int a = abs(y-posMin) > abs(posMax-x) ? 1 : -1;

    if (a > 0){
        posMax = y;
    }else{
        posMin = x;
    }

    return posMin-posMax > posMax-posMin ? posMin-posMax : posMax-posMin;
}