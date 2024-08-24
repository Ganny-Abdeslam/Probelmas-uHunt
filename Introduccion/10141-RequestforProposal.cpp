#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char const *argv[]){

    int n, p, count = 0;

    while(scanf("%d %d", &n, &p), n){
        int tempCant, cant = -1;
        double tempPrice, price = -1.0;
        string name, basura, tempName;
        bool f = true;

        if (count != 0){
            cout << "\n";
        }

        cin.ignore();
        
        for (int i = 0; i < n; i++){
            getline(cin, basura);
        }
        
        for (int i = 0; i < p; i++){

            getline(cin, tempName);
        
            cin >> tempPrice >> tempCant;

            cin.ignore();

            for (int i = 0; i < tempCant; ++i){
                getline(cin, basura);
            }
        
            if (tempCant > cant || (tempCant == cant && tempPrice < price)){
                name = tempName;
                price = tempPrice;
                cant = tempCant;
            }
        }

        ++count;
        cout << "RFP #" << count << "\n" << name << "\n";
    }

    return 0;
}