#include <iostream>
#include <string>

using namespace std;

int fact(int n) {
    if (n <= 1)
        return 1;
    return n * fact(n - 1);
}

int Find_Lexicographical_ranking(string s) {
    int n = s.length();
    int rank = 1;

    for (int i = 0; i < n - 1; i++) {
        int countSmaller = 0;
        for (int j = i + 1; j < n; j++) {
            if (s[j] < s[i]) {
                countSmaller++;
            }
        }
        rank += countSmaller * fact(n - i - 1);
    }

    return rank;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    int result = Find_Lexicographical_ranking(input);
    cout << "Lexicographical ranking: " << result << endl;

    return 0;
}
