#include <iostream>
#include <vector>

using namespace std;

// A function to calculate the geometric progression from 1 to n
vector<int> geometricProgression(int n) {
    vector<int> result = {1};
    for (int i = 1; i <= n; i++) {
        result.push_back(result.back() * (i - 1));
    }
    return result;
}

int main() {
    for (int i = 1; i <= 100000; i++) {
        vector<int> result = geometricProgression(i);
    }
    return 0;
}
