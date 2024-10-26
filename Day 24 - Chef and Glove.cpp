#include <bits/stdc++.h>

using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;

        vector < int > arr1(N);
        for (int i = 0; i < N; i++)
            cin >> arr1[i];

        vector < int > arr2(N);
        for (int i = 0; i < N; i++)
            cin >> arr2[i];

        int count = 0, count1 = 0;
        for (int i = 0; i < N; i++) {
            if (arr2[i] >= arr1[i])
                count++;
        }
        reverse(arr1.begin(), arr1.end());
        for (int i = 0; i < N; i++) {
            if (arr2[i] >= arr1[i])
                count1++;
        }

        if (count == N && count1 == N)
            cout << "both" << endl;
        else if (count == N && count1 != N)
            cout << "front" << endl;
        else if (count != N && count1 == N)
            cout << "back" << endl;
        else
            cout << "none" << endl;
    }
}