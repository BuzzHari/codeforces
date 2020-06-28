#include <iostream>
#include <map>
#include <algorithm>
#include <typeinfo>
using namespace std;

int main() {
    
    map<string, int> game;

    int t;
    scanf("%d", &t);
    string s[10000];
    int a[10000];
    for(int i = 0; i < t; i++) {
        cin>>s[i]>>a[i];
        game[s[i]] += a[i];
    }
    
    auto max_it = max_element(game.begin(), game.end(), [](const pair<string, int>& a, const pair<string, int>& b)->bool{
               return (a.second < b.second); 
            });


    map<string, int> game2;
    
    for(int i=0; i < t; i++) {
        game2[s[i]] += a[i];

        if(game2[s[i]] >= max_it->second && game[s[i]] == max_it->second) {
            cout<<s[i];
            break;
        }
    }

    return 0;
}

