// https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1
// use above link to test code....add aditional variable, int k=val, val is no. of rotation.

// Best Sol: T.C O(n) and Aux Space: O(1).
void reverse(int arr[],int low, int high)
{
    while(low<high)
    {
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}
void rotate(int arr[], int n,int k)
{
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    reverse(arr,0,n-1);
}

/*
Naive Solution: T.C. O(n^2).

void rotate(int arr[], int n,int k)
{
    for(int j=0;j<k;j++)
    {
        int prev=arr[0];
        for(int i=n-1;i>=0;i--)
        {
            int curr = arr[i];
            arr[i]=prev;
            prev=curr;
        }
    }    
}

Better Sol: T.C. O(k+n-k+n)=O(2n)=O(n)  , Aux Space: O(k)

void rotate(int arr[], int n)
{
    int k=4;
    int ar1[k];
    for(int j=0;j<k;j++)
    {
        ar1[j] = arr[j];
    } 
    int prev=arr[0];
    for(int i=0;i<n-k;i++)
    {
        arr[i]=arr[i+k];
    }

    for(int i=k;i<n;i++)
        arr[i]=ar1[i];
}

*/
