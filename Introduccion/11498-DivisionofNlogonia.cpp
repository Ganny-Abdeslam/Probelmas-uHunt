#include <iostream>
using namespace std;
void coordenadas(int n, int a, int b);

int main(int argc, char const *argv[])
{
    int n;
    int a, b;

    do
    {
        cin >> n;
        if (n != 0){
            cin >> a >> b;
            coordenadas(n, a, b);
        }
        
    } while (n != 0);

    return 0;
}

void coordenadas(int n, int a, int b){
    int i = 0;
    int x, y;

    while (n > i){
        cin >> x >> y;

        if (x == a || y == b){
            cout << "divisa\n";
        }else if (x > a && y > b){
            cout << "NE\n";
        }else if (x < a && y > b){
            cout << "NO\n";
        }else if (x < a && y < b){
            cout << "SO\n";
        }else{
            cout << "SE\n";
        }
        
        i++;
    }
}