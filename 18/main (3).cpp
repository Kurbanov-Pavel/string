#include <iostream>
#include <string>
#include <array>

using namespace std;

int main(){
    string text;
    getline(cin, text);
    int k;
    cin >> k;
    text.erase(k-1, 1);
    cout << text;

return 0;
}
