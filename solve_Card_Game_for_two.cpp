#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N,ans = 0,tmp = 0;
vector<int> A;

int main(){
    cin >> N;
    A.resize(N);
    for (int i = 0; i < N;i++)
        cin >> A[i];
    sort(A.begin(), A.end());
    int b = 0, c = 0;
    for (int i = N - 1; i >= 0; i -= 2)
        b += A[i];
    for (int i = N - 2; i >= 0;i -= 2)
        c += A[i];
    ans = b - c;
    cout << ans << endl;
    return 0;
}
