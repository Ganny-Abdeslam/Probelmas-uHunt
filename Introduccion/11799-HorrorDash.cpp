#include <iostream>
#include<queue>
using namespace std;

int main(int argc, char const *argv[]){
    int T;
    queue<int> R;

    cin >> T;

    for (int i = 0; i < T; i++){
        
        int N, max = 0;
        
        cin >> N;
        
        for (int j = 0; j < N; j++){
            int e;
            
            cin >> e;

            if (e > max){
                max = e;
            }
        }
        R.push(max);
    }
    
    int count = 1;

    while (!R.empty()) {
        cout << "Case " << count << ": " << R.front() << endl;
        R.pop();
        count++;
    }

    return 0;
}