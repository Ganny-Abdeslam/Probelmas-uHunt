#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;
int twoPointers(string s, int k, int n, char a);

int main(int argc, char const *argv[]){
    int n, k;
    string s;

    scanf("%d%d", &n, &k);
    cin >> s;

    int maxi = max(twoPointers(s, k, n, 'a'), twoPointers(s, k, n, 'b'));

    if(n <= 100000 && k <= n){
        cout << maxi;
    }
    return 0;
}

int twoPointers(string s, int k, int n, char a){
    int i = 0, j = n - 1, tJ, tZ, max = 1, auxKJ, auxKZ;
    bool fJ, fZ;
    
    for (int i = 0; i < n; i++){
        tJ = 1;
        tZ = 0;
        auxKJ = k;
        auxKZ = k;
        fJ = true;
        fZ = true;
        if(s[i] != a){
            --auxKJ;
        }
        
        for (int j = n - 1, z = i; j > i && z < n && (fJ || fZ); --j, ++z){
            if (!(s[j] == a) && auxKJ < 1){
                fJ = false;
            }else if(!(s[j] == a) && auxKJ > 0){
                --auxKJ;
            }

            if (!(s[z] == a) && auxKZ < 1 && fZ){
                fZ = false;
                i = z;
            }else if(!(s[z] == a) && auxKZ > 0){
                --auxKZ;
            }

            if (fJ){
                ++tJ;   
            }
            
            if (fZ){
                ++tZ;
            }
            
            if (j-1 == i && fJ){
                if (max < tJ){
                    max = tJ;
                }
            }

            if (fZ){
                if (max < tZ){
                    max = tZ;
                }
            }
            //cout << fJ << "--------" << fZ << "-----" << a << "Y k: " << auxKJ << auxKZ << "\n";    
        }
        if (max > (n-i)){
            return max;
        }
        
    }
    
    return max;
}