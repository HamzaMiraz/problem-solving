#include <vector>
#include <cstdio>
#include <cstring>
using namespace std;

#define MAX 66001
bool P[MAX];
vector< int > Prime;
void Sieve() {
    int r;
    memset(P, true, sizeof P);
    P[0] = P[1] = false;
    for (int i = 2; i * i <= MAX; i++) {
        if (P[i]) {
            Prime.push_back(i);
            if(MAX/i >= i){
            for (int j = i * i; j <= MAX; j += i*2)
                P[j] = false;
            }
        }
    }
}

int main() {
    Sieve();

    int T;
    scanf("%d", &T);
    while (T--) {
        int L, U;
        scanf("%d%d", &L, &U);
        int Div = 1, Num = L;
        for (int i = L; i <= U; i++) {
            int N = i, D = 1;
            for (int j = 0; j < Prime.size(); j++) {
                if (N % Prime[j] == 0) {
                    int C = 0;
                    while (N % Prime[j] == 0) {
                        ++C;
                        N /= Prime[j];
                    }
                    D *= (C + 1);
                }
            }
            if (D > Div) {
                Div = D;
                Num = i;
            }
        }
        printf("Between %d and %d, %d has a maximum of %d divisors.\n", L, U, Num, Div);
    }
    return 0;
}
