#include <iostream>
using namespace std;

int main()
{
    int arr[] = {-2, -5, 6, -2, -3, 1, 5, -6};
    int n = 8;

    int currentSum = arr[0];
    int maxSum = arr[0];

    for (int i = 1; i < n; i++)
    {
        currentSum = max(arr[i], currentSum + arr[i]);
        maxSum = max(maxSum, currentSum);
    }

    cout << "Maximum Subarray Sum = " << maxSum;

    return 0;
}
