//program to find maximum subsequence sum using recursion
//time complexity - o(2^n)
#include <bits/stdc++.h>
using namespace std;

int max = 0; //global variable

void printArray(vector<int> arr, int n)
{
    int sum = 0;
	for (int i = 0; i < n; i++)
		sum = sum + arr[i];
	/*if(::max < sum)
	    ::max = sum;*/
	 
	 int a = (int)pow(sum, 2);
	 int b = (int)pow(::max, 2);
	 if( a > b)
	    ::max = sum;
//	cout << sum << endl;
}

// Recursive function to print all
// possible subsequences for given array
void printSubsequences(vector<int> arr, int index,
					vector<int> subarr)
{
	// Print the subsequence when reach
	// the leaf of recursion tree
	if (index == arr.size())
	{
		int l = subarr.size();

		// Condition to avoid printing
		// empty subsequence
		if (l != 0)
			printArray(subarr, l);
	}
	else
	{
		// Subsequence without including
		// the element at current index
		printSubsequences(arr, index + 1, subarr);

		subarr.push_back(arr[index]);

		// Subsequence including the element
		// at current index
		printSubsequences(arr, index + 1, subarr);
	}
	return;
}

// Driver Code
int main()
{
	vector<int> arr{1, -2};
	vector<int> b;

	printSubsequences(arr, 0, b);
    cout<<::max;
	return 0;
}
