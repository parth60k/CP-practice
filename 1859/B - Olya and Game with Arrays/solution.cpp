#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	long long t;
	cin >> t; // Read the number of test cases
	while (t--)
	{
		long long n;
		cin >> n; // Read the number of arrays in the current test case
 
		vector<long long> second_elements; // Vector to store the second smallest elements of each array
		long long lowest_first_minimum = INT_MAX; // Variable to track the smallest of the first minimums
 
		for (int i = 0; i < n; i++) // Iterate over each array
		{
			long long m;
			cin >> m; // Read the number of elements in the current array
			vector<long long> a(m); // Vector to store elements of the current array
			for (auto &x : a) // Read elements of the array
				cin >> x;
 
			sort(a.begin(), a.end()); // Sort the array to find the smallest elements
 
			second_elements.push_back(a[1]); // Store the second smallest element
			lowest_first_minimum = min(lowest_first_minimum, a[0]); // Update the smallest of the first minimums
		}
 
		sort(second_elements.begin(), second_elements.end()); // Sort the second smallest elements
 
		long long sum_of_second_elements = accumulate(second_elements.begin(), second_elements.end(), 0LL); // Calculate the sum of second smallest elements
		long long lowest_second_minimum = second_elements[0]; // Find the smallest of the second smallest elements
 
		long long answer = lowest_first_minimum + sum_of_second_elements - lowest_second_minimum; // Calculate the maximum beauty
		cout << answer << endl; // Output the result for the current test case
	}
	return 0;
}
 
// Time Complexity (TC): O(mlogm) = O(50000*log2(500000)) = O(50000*19) = O(950000) = O(10^6)
// Space Complexity (SC): O(m) = O(50000) = O(10^5)