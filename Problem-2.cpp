#include <bits/stdc++.h>
using namespace std;
void generateSeries(int a) {
    int num = 1;
    for (int i = 0; i < a; i++) {
        std::cout << num << " ";
        num += 2;
    }
}

int main() {
    int input;
    cout << "Enter the value of 'a': ";
    cin >> input;
    
    cout << "Output: ";
    generateSeries(input);
    
    return 0;
}
