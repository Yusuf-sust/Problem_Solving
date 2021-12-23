#include <bits/stdc++.h>
using namespace std;

int a[100000];

void merge_sort(int low, int high);
void merge(int low, int mid, int high);

int main()
{
    int i, j, n;
    while(cin>>n)
    {
        for(i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        merge_sort(0, n-1);
        for(i = 0; i < n; i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }

    return 0;
}

void merge_sort(int low, int high)
{
    int mid;
    if(low < high)
    {
        mid = (low + high) / 2;
        merge_sort(low, mid);
        merge_sort(mid+1, high);
        merge(low, mid, high);
    }
}

void merge(int low, int mid, int high)
{
    int left[10], right[10], i, j, k, n, m;
    n = mid - low + 1;
    m = high - mid;
    for(i = 0; i < n; i++)
    {
        left[i] = a[low+i];
    }
    for(j = 0; j < m; j++)
    {
        right[j] = a[mid + j + 1];
    }
    left[i] = 99999999;
    right[j] = 99999999;
    i = 0, j = 0;
    for(k = low; k <= high; k++)
    {
        if(left[i] <= right[j])
            a[k] = left[i++];
        else
        {
            a[k] = right[j++];
        }
    }

}
