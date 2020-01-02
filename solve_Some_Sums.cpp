#include <iostream>
using namespace std;

int A,B,N,ans = 0,tmp = 0;

int ch(int t){
    int a = t % 10;
    a += (t / 10) % 10;
    a += ((t / 10)/10) % 10;
    a += (((t / 10)/10)/10) % 10;
    a += ((((t / 10)/10)/10)/10) % 10;
    return a;
}

int main(){
    cin >> N >> A >> B;
    for (int i = 1; i <= N;i++){
        int t = ch(i);
    if(A <= t && t <= B)
        ans += i;
    }
    cout << ans << endl;
    return 0;
}
