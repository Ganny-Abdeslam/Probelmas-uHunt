#include <bits/stdc++.h> 
using namespace std;
void SieveOfEratosthenes(int n, vector<int>& pVec);
 
int main(){
    vector<int> p, numeros;
	
    do{
        numeros.clear();
        string linea;
        
        //cout << "Ingrese una línea de números con espacios: ";
        getline(cin, linea);

        istringstream stream(linea);
        int numero, sum = 1;

        while (stream >> numero) {
            numeros.push_back(numero);
            sum *= numero;
        }
        
        --sum;

        if(numeros.front() == 0){
            return 0;
        }

        SieveOfEratosthenes(sum, p);
        
    } while(numeros.front() != 0);
    
	return 0;
}

void SieveOfEratosthenes(int n, vector<int>& pVec){
	bool prime[n + 1];
	memset(prime, true, sizeof(prime)); 

	for (int p = 2; p * p <= n; p++) {
		if (prime[p] == true) {
			for (int i = p * p; i <= n; i += p) 
				prime[i] = false; 
		} 
	} 

	// Print all prime numbers 
	for (int p = 2; p <= n; p++) 
		if (prime[p]) 
            pVec.push_back(p);
			//cout << p << " ";
}