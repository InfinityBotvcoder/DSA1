#include <iostream>
using namespace std;

void explainPair() {
    pair<int, int> p1 = {1, 3};
     cout << p1.first << " " << p1.second << endl;

    pair<int, pair<int, int>> p2 = {1, {2, 3}};
    cout << p2.first << " " << p2.second.second << " " << p2.second.first << endl;

    pair<int, int> arr[3] = {{1, 2}, {3, 4}, {5, 6}};
    for (int i = 0; i < 3; i++) {
        cout << arr[i].first << " " << arr[i].second << endl;
    }
}

int main() {
    explainPair();
    return 0;
}   