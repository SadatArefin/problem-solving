#include<bits/stdc++.h>
using std::cin;
using std::cout;
using std::string;
int main(){
    int iteration;
    string word;
    cin >> iteration;
    for (int i = 0; i < iteration; i++)
    {
        cin >> word;
    if (word.length() <= 10)
        cout << word<<"\n";
    else
        cout << word[0] << word.length() - 2 << word[word.length() - 1]<<"\n";
    }
}