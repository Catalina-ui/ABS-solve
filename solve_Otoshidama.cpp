#include <iostream>
using namespace std;

int N, Y;

int main(){
    cin >> N >> Y;
    int x = -1, y = -1, z = -1;
    for (int i = 0; i <= N;i++)
        for (int j = 0; j <= N-i;j++)
                if (i * 10000 + j * 5000 + (N - i - j) * 1000 == Y)
                {
                    x = i;
                    y = j;
                    z = N - i - j;
                }
    cout << x <<" "<< y <<" "<< z << endl;
    return 0;
}
