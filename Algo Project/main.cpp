#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void insertion_sort(vector<int>& arr)
{
    int n = arr.size();
    for(int i = 1; i < n; i++){
        int k = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > k){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = k;
    }
}

int triangle(vector<int> arr)
{
    if(arr.size() < 3)
        return 0;

    insertion_sort(arr);

    for(int i = 2; i < (int)arr.size(); i++){
        if((long long)arr[i-2] + arr[i-1] > arr[i])
            return 1;
    }
    return 0;
}

void printResult(vector<int>& a)
{
    for(int i = 0; i < (int)a.size(); i++){
        cout << a[i] << " ";
    }
    cout << endl;
    if (triangle(a))
        cout << "Triangular triplet found." << endl;
    else
        cout << "No triangular triplet found." << endl;
}
int main(){
    vector<int> A1 = {10, 2, 5, 1, 8, 20};
    cout << "Example 1:" << endl;
    printResult(A1);

    cout << endl;

    vector<int> A2 = {1, 2, 4, 8, 16};
    cout << "Example 2:" << endl;
    printResult(A2);

    return 0;

}
