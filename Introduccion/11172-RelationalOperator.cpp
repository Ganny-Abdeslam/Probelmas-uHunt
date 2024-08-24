#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    int i = 0;
    int a, b;

    cin >> n;
    while (n > i){
        cin >> a >> b;
        if (a > b){
            cout << ">\n";
        }else if (a < b){
            cout << "<\n";
        }else{
            cout << "=\n";
        }
        
        i++;
    }
    
    return 0;
}
