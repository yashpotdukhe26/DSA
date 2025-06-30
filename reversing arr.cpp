#include <iostream>
using namespace std;

int main() {
    int arr[9] = {1,2,3,4,5,6,7,8,9};
    int n = 9;
    int k = 3;

    int partSize = n / k;

    for(int i =0; i<n; i+=partSize) {  
        int left = i;
        int right = i + partSize - 1;

        while(left < right) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i];
    }

    return 0;
}
