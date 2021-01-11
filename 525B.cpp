#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

int main() {

    int n, k;
    cin >> n >> k;
    long long int curr_min = 0, curr;
    long long int to_sub = 0;
    vector<long long int> arr;
    int a;
    for (int i = 0; i < n; ++i) {
        cin >> a;
        arr.push_back(a); 
    }
    
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n;) {
        if (arr[i] != 0) {
            if (k-- == 0)
                break;
            curr = arr[i]; 
            curr_min = arr[i] - to_sub;
            if (curr_min < 0)
                curr_min = 0;
            cout << curr_min << endl;
            to_sub += curr_min ;
            while(arr[i] == curr) {
                arr[i] = 0;
                ++i;
            }
        }
        else 
            ++i;
    }
    if (k > 0) {
        curr_min = arr[arr.size()-1];
        while (k > 0) {
            cout << curr_min << endl;
            k--;
        }
    }
    return 0;
}
