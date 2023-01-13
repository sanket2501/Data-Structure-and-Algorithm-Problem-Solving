#include<bits/stdc++.h>
using namespace std;

bool checkIsFibonacci(int arr[], int n)
{
    if (n == 1 || n == 2)
        return true;
 
    sort(arr, arr + n);
 
    for (int i = 2; i < n; i++)
        if ((arr[i - 1] + arr[i - 2])
            != arr[i])
            return false;
 
    return true;
}

bool checkGeometric(int n, int arr[])
{
    if (n == 1)
        return true;
 
    int ratio = arr[1] / (arr[0]);
 
    for (int i = 1; i < n; i++) {
        if ((arr[i] / (arr[i - 1])) != ratio) {
            return false;
        }
    }
    return true;
}

bool checkIsAP(int arr[], int n)
{
  if (n == 1)
    return true;
 
  sort(arr, arr + n);
 
  int d = arr[1] - arr[0];
  for (int i=2; i<n; i++)
    if (arr[i] - arr[i-1] != d)
      return false;
 
  return true;
}

int GetNextSeriesElement(int input1, int input2[])
{
    int n,i,count;
    if(checkIsFibonacci(input2, input1))
    {

    }
    else if( checkGeometric(input1, input2))
    {
        return (a * (int)(pow(r, N - 1)));
    }
    else if(checkIsAP(input2, input1))
    {

    }
    return -999;
}


int main()
{
    int input1=5;
    int input2[input1]={1,1,2,3,5};
    cout<<GetNextSeriesElement(input1, input2);
}