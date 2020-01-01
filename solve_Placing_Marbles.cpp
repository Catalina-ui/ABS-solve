    #include <iostream>
    using namespace std;
     
    int main(){
        int input;
        cin >> input;
        int s = 0;
        s += input % 10;
        s += input / 10 % 10;
        s += input / 100 % 10;
        cout << s << endl;
        return 0;
    }
