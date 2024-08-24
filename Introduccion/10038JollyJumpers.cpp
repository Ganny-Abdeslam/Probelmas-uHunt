#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <vector>

int main(int argc, char const *argv[]){
    
    int n;
    while (scanf("%d", &n) > 0){
        std::vector<bool> arr(n-1, false);
        bool f = true;
        
        int ant;
        std::cin >> ant;
        for (int i = 1; i < n; i++){
            
            int temp;
            std::cin >> temp;

            int x = abs(temp - ant);

            arr[x] = true;
            ant = temp;
        }

        for (int i = 1; i < n; ++i){
            if (!arr[i]){
                f = false;
            }
        }

        if (f){
            printf("Jolly\n");
        }else{
            printf("Not jolly\n");
        }
        
    }

    return 0;
}