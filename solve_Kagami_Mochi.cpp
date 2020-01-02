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
    tmp = A[0];
    ans = 1;
    for (int i = 0; i < N;i++){
        if(A[i] > tmp){
            tmp = A[i];
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
