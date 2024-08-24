#include <cstdio>
#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;
int i = 0;
int t = 0;
typedef tuple<int, int, int> num;
void restar(priority_queue<num, vector<num>, greater<num>>& pq, int e);
void imprimir(priority_queue<num, vector<num>, greater<num>>& pq);

int main(int argc, char const *argv[]){
    int k, v;
    string str;
    priority_queue<num, vector<num>, greater<num>> pq;

    cin >> str;
    while (scanf("%d%d", &k,&v)){
        pq.push({v, k, v});

        cin >> str;

        if(str.compare("#") == 0){
            scanf("%d", &t);
            priority_queue<num, vector<num>, greater<num>> copyPq = pq;
            auto &[ind, element, copyInd] = pq.top();

            while (i < t){
                restar(copyPq, ind);
                
                imprimir(copyPq);
            }

            return 0;
        }
    }
    
    return 0;
}

void restar(priority_queue<num, vector<num>, greater<num>>& pq, int e){
    
    if(pq.empty()){
        return;
    }

    num topElement = pq.top();
    pq.pop();
    
    restar(pq, e);

    int& ind = get<0>(topElement);
    ind = ind - e;

    pq.push(topElement);
}

void imprimir(priority_queue<num, vector<num>, greater<num>>& pq){
    bool flag = false;

    if(pq.empty()){
        return;
    }

    num topElement = pq.top();
    pq.pop();

    if(get<0>(topElement) <= 0 && i < t){
        ++i;
        cout << get<1>(topElement) << "\n";
        flag = true;
    }
    
    imprimir(pq);
    
    if(flag){
        pq.push({get<2>(topElement), get<1>(topElement), get<2>(topElement)});
    }
    else{
        pq.push(topElement);
    }
}