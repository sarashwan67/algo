#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& A, int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<int> L(n1), R(n2);

    for (int i = 0; i < n1; i++)
        L[i] = A[left + i];

    for (int j = 0; j < n2; j++)
        R[j] = A[mid + 1 + j];

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            A[k] = L[i];
            i++;
        }
        else
        {
            A[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        A[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        A[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int>& A, int left, int right)
{
    if (left >= right)
        return;

    int mid = (left + right) / 2;

    mergeSort(A, left, mid);
    mergeSort(A, mid + 1, right);

    merge(A, left, mid, right);
}

int checkTriangle(vector<int>& A, int i)
{
    int N = A.size();

    if (i > N - 3)
        return 0;

    if ((long long)A[i] + A[i + 1] > A[i + 2])
        return 1;

    return checkTriangle(A, i + 1);
}

int triangle(vector<int>& A)
{
    int N = A.size();

    if (N < 3)
        return 0;

    mergeSort(A, 0, N - 1);

    return checkTriangle(A, 0);
}

int main()
{
    vector<int> A = {10, 2, 5, 1, 8, 20};

    cout << triangle(A);

    return 0;
}
