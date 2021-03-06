#include <vector>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <ctime>
#include <cstring>
#include <map>

using namespace std;

map<int, string> maps;

int main() {
    int n, x, q;
    char y[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d ", &x);
        fgets(y, 1000, stdin);
        y[strlen(y) - 1] = '\0'; // remove endline
        string tmpString(y);
        maps[x] = tmpString;
    }
    scanf("%d", &q);
    while (q--) {
        scanf("%d", &x);
        if (maps.find(x) != maps.end()) {
            printf("%s\n", maps[x].c_str());
        } else {
            printf("Not found\n");
        }
    }
}