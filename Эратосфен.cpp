#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool lr[n];
    for(int i = 2; i < n + 1; i ++) lr[i] = true;
    for(int i = 2; i < n + 1; i++){
        if(lr[i]) for(int j = i*2; j < n +1; j+=i) lr[j] = 0;
    }
    for(int i = 2; i < n + 1; i ++) if(lr[i]) cout << i << endl;
    return 0;
}
