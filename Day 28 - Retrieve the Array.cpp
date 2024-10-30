#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        long long bArr[N];
        
        long long sumB = 0, sumA = 0;
        
        for(int i=0; i<N; i++){
            cin >> bArr[i];
            sumB += bArr[i];
        }
        sumA = sumB / (N+1);
        for(int i=0; i<N; i++){
            cout << bArr[i] - sumA << " ";
        }
        cout << endl;
    }
    return 0;
}
