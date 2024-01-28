#include<iostream>
#include<cmath>
#include<vector>
#include<queue>
#include<stack>
#include<math.h>
#include<algorithm>
using namespace std;


void solve(int* arr, int n, string output, string *ans, int currI, int &outI)
{
    if(currI == n)
    {
        ans[outI]= output;
        outI++;
        return;
    }

    solve(arr, n, output, ans, currI+1, outI);

    output += to_string(arr[currI]) + " ";

    solve(arr, n, output, ans, currI+1, outI);
}


int main(){

    int n; cin>>n;
    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    string output= "";
    string *ans = new string[int(pow(2, (double)n))];

    int outI=0;
    solve(arr, n, output, ans, 0, outI);


    for (int i = 0; i < pow(2,n); i++)
    {
        cout<< ans[i] <<endl;
    }
    
    

    return 0;
}

