    #include <iostream>
    #include <vector>
    using namespace std;
     
    int N,ans = 30,tmp = 0,A = 0;
     
    int main(){
        cin >> N;
        for (int i = 0; i < N;i++){
            cin >> A;
            tmp = 0;
            while(!(A % 2)){
                A = A / 2;
                tmp++;
            }
            if(ans > tmp)
                ans = tmp;
        }
        cout << ans << endl;
    }
