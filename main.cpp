#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<vector<int>> moves = {
    {4, 6},
    {6, 8},
    {7, 9},
    {4, 8},
    {3, 9, 0},
    {},
    {1, 7, 0},
    {2, 6},
    {1, 3},
    {2, 4}
};


int countMovsRey(int start, int movIzq, unordered_map<string, int>& memo) {
    if (movIzq == 0) return 1;

    string key = to_string(start) + "," + to_string(movIzq);
    if (memo.find(key) != memo.end()) return memo[key];

    int count = 0;
    for (int move : moves[start]) {
        count += countMovsRey(move, movIzq - 1, memo);
    }

    memo[key] = count;
    return count;
}

int main() {
    int numMovimientos;
    cout << "Cantidad de movimientos: ";
    cin >> numMovimientos;

    unordered_map<string, int> memo;
    int MovTotales = 0;

    for (int i = 0; i <= 9; ++i) {
        MovTotales += countMovsRey(i, numMovimientos, memo);
    }

    cout << "Cantidad de movimientos posibles: " << MovTotales << endl;

    return 0;
}
