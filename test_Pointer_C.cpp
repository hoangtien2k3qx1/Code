

#include<iostream>
#include<string>
using namespace std;


int solution(int *p, int n) {
    int maxvalue = p[0];
    for(int i=0; i<n; i++) {
        if (p[i] > maxvalue) {
            maxvalue = p[i];
        }
    }
    return maxvalue;
}

int main() {
    int n;
    cin >> n;
    int arr[100];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }


    cout << "Maxvalue: " << solution(arr, n) << endl;

    return 0;
}