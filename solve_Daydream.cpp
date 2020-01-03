#include <iostream>
#include <string>
#include <vector>
using namespace std;

string S;

int main(){
    cin >> S;
    string ans = "NO";
    unsigned int size = S.size();
    while (S.find("eraser") < size)
        S.erase(S.find("eraser"), 6);
    while (S.find("erase") < size)
        S.erase(S.find("erase"), 5);
    while (S.find("dreamer") < size)
        S.erase(S.find("dreamer"), 7);
    while (S.find("dream") < size)
        S.erase(S.find("dream"), 5);
    if(S.size() == 0)
        ans = "YES";
    cout << ans << endl;
    return 0;
}
