#include<bits/stdc++.h>
using std::cin;
using std::cout;
int main(){
    int problems, petya, vasya, tonya, solved=0;
    cin >> problems;
    for (int i = 0; i < problems; i++)
    {
        cin >> petya >> vasya >> tonya;
        if (petya+vasya+tonya>=2)
        {
            solved++;
        }
    }
    cout << solved;
}