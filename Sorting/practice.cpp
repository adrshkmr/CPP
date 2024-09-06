#include <bits/stdc++.h>
using namespace std;

int main(){
    // int arr[] = {10, 1, 1, 2, 0, 4, 3, 5, 6};
    int arr[] = {90, 80, 70, 60, 50, 40, 30, 20, 10};

    for (int i = 0; i < 9-1; i++)    //n ya n-1 kahi tak chal skta hai kyoki ulte num. ko bhi sort karne ke liye n-1 baar hi swap operation karna hota hai eg 5 to 1
        for (int j = 0; j < 9 - 1 - i; j++)
            if(arr[j] > arr[j+1])   
                swap(arr[j], arr[j + 1]);
    

    for (int i = 0; i < 9; i++)
        cout << arr[i] << " ";

    return 0;
}



// class Solution {
//   public:
//     void bubbleSort(int arr[], int n) {
//         int i, j;
//         for (i = 0; i < n - 1; i++) {
//             for (int j = 0; j < n - i - 1; j++)
//                 if (arr[j] > arr[j + 1])
//                     swap(&arr[j], &arr[j + 1]);
//         }
//     }
// };