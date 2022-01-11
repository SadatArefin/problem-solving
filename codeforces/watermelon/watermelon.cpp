#include<bits/stdc++.h>
using std::cin;
using std::cout;
int main(){
    int weight;
    cin >> weight;
    if (weight >= 4 && weight%2 == 0)
        cout << "YES";
    else
        cout << "NO";
}
