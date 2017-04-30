#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

#define max(a, b) ((a > b) ? (a) : (b))
#define min(a, b) ((a < b) ? (a) : (b))
#define abs(a, b) (a > b ? (a - b) : (b - a))

#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define RFOR(i, a, b) for (int i = (b-1); i >= (a); i--)
#define REP(i, n) FOR(i, 0, n)
#define RREP(i, n) RFOR(i, 0, n)

int a = 1;
int b = 2;

void solve(){
    printf("%d\n", a + b);
}

int main(int argc, char *argv[]){
    solve();
    return 0;
}
