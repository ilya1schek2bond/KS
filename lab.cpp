#include <iostream>
#include <vector>

using namespace std;

// Функція для обчислення арифметичної прогресії від 1 до n
vector<int> arithmeticProgression(int n) {
    vector<int> result = {1};
    int diff = 1; // Різниця між сусідніми членами прогресії
    for (int i = 1; i < n; i++) {
        result.push_back(result.back() + diff);
    }
    return result;
}

int main() {
    for (int i = 1; i <= 100000; i++) {
        vector<int> result = arithmeticProgression(i);
        // Виведення елементів арифметичної прогресії
        //cout << "AP(" << i << ") = ";
        //for (int j = 0; j < result.size(); j++) {
            //cout << result[j] << " ";
        //}
        //cout << endl;
    }
    return 0;
}
