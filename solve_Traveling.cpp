#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

int N;
vector<int> t,x,y;

int main(){
    string ans = "Yes";
    cin >> N;
    t.resize(N+1);
    x.resize(N+1);
    y.resize(N+1);
    t[0] = 0;
    x[0] = 0;
    y[0] = 0;
    for (int i = 1; i <= N;i++){
        cin >> t[i] >> x[i] >> y[i];
    }
    for (int i = 0; i < N;i++){
        int dt = t[i + 1] - t[i];
        int dis = abs(x[i + 1] - x[i]) + abs(y[i + 1] - y[i]);
        if(dt < dis){
            ans = "No";
            break;
        }
        if ((dt % 2) != (dis % 2))
        {
            ans = "No";
            break;
        }
    }
        cout << ans << endl;
    return 0;
}
