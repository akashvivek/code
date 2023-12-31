
//Algorithm

//Add current value in sum 
//Check if sum is greater than maxi or not
//if it is greater then replace maxi with sum
//Now check is sum is postive or not 
//if negative then make sum=0
//as if negative then sumation of negative with any other number will decrease sum value as compare with its individual value 

//repeat above process till loop execute

#include <bits/stdc++.h>
using namespace std;

long long maxSubarraySum(int arr[], int n) {
    long long maxi = LONG_MIN; 
    long long sum = 0;

    for (int i = 0; i < n; i++) {

        sum += arr[i];

        if (sum > maxi) {
            maxi = sum;
        }

        if (sum < 0) {
            sum = 0;
        }
    }

    return maxi;
}

int main()
{
    int arr[] = { -2, -1, 3, -2, 1, 2, 1, -2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    long long maxSum = maxSubarraySum(arr, n);
    cout << "The maximum subarray sum is: " << maxSum << endl;
    return 0;
}
