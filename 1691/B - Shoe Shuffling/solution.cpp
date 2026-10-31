#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int t;
	cin >> t; // Read the number of test cases
	while (t--)
	{
		long long n;
		cin >> n; // Read the number of students
		vector<long long> sizes(n);
		for (int i = 0; i < n; i++) // Read the shoe sizes for each student
			cin >> sizes[i];
 
		map<long long, long long> freq; // Map to store frequency of each shoe size
		for (int i = 0; i < n; i++) // Count frequency of each shoe size
			freq[sizes[i]]++;
 
		long long flag = 0; // Flag to check if a valid shuffling is possible
		for (auto i : freq)
		{
			if (i.second == 1) // If any shoe size appears only once, shuffling is not possible
			{
				flag = 1;
				break;
			}
		}
 
		if (flag)
		{
			cout << -1 << endl; // Output -1 if shuffling is not possible
			continue;
		}
 
		vector<long long> students(n); // Vector to store the permutation of students
		for (int i = 0; i < n; i++) // Initialize the permutation with student indices
			students[i] = i + 1;
 
		long long l = 0, r = 0;
		while (r < n) // Iterate over the shoe sizes
		{
			if (sizes[l] == sizes[r])
				r++;
			else
			{
				// Rotate the segment of students to ensure no student gets their own shoes
				rotate(students.begin() + l, students.begin() + l + 1, students.begin() + r);
				l = r;
			}
		}
		// Rotate the last segment
		rotate(students.begin() + l, students.begin() + l + 1, students.begin() + r);
 
		for (auto i : students) // Output the permutation
			cout << i << " ";
		cout << endl;
	}
	return 0;
}
 
// Time Complexity (TC): O(nlogn) = O(10^5*log2(10^5)) = O(10^5*17) = O(10^6)
// Space Complexity (SC): O(n) = O(10^5)