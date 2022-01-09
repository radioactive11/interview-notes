#include <iostream>


using namespace std;


void merge(int arr[], int low, int mid, int high)
{
    // L-> arr[low: mid]
    // R-> arr[mid+1: high]

    int n1 = mid-low+1;
    int n2 = high-mid;

    int L[n1], R[n2];

    for(int i=0; i<n1; i++) L[i] = arr[low+i];
    for(int i=0; i<n2; i++) R[i] = arr[mid+1 +i];

    int i=0, j=0, k=low;

    while(i<n1 && j<n2)
    {
        if(L[i] <= R[j]) arr[k++] = L[i++];
        else arr[k++] = R[j++];
    }

    while(i<n1) arr[k++] = L[i++];
    while(j<n2) arr[k++] = R[j++];

}


void merge_sort(int arr[], int low, int high)
{
    if(low<high)
    {
        // mid will be the point of split of the array
        int mid = low + (high-low)/2;

        merge_sort(arr, low, mid);
        merge_sort(arr, mid+1, high);

        // now merge the sorted arrays
        merge(arr, low, mid, high);
    }
}


int main()
{
    int arr[] = {6, 5, 12, 10, 9, 1};
    int n = sizeof(arr)/sizeof(int);

    merge_sort(arr, 0, n);

    for(auto x: arr) cout << x << ' ';

    return 0;
}
