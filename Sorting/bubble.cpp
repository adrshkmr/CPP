#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int swapped;
    int count = 0;
    for(int i=0; i<n-1; i++){
        swapped = 0;
            for(int j=0; j<n-1-i; j++){
                if(arr[j] > arr[j+1]){
                    swap(arr[j], arr[j+1]);
                    swapped = 1;
            }
        }
        if(swapped == 0) break;
        else count++;
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    cout << count << endl;

    return 0;
}