#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	long long t;
	cin >> t; // Read the number of test cases
	while (t--)
	{
		long long n, k;
		cin >> n >> k; // Read the length of the string and the number of characters to remove
		string s;
		cin >> s; // Read the string
 
		// Create a vector to store the frequency of each character ('a' to 'z')
		vector<int> frequency_of_characters(26, 0);
		for (int i = 0; i < n; i++) // Iterate over the string
			frequency_of_characters[s[i] - 'a']++; // Increment the frequency of the current character
 
		long long odd_frequency = 0; // Variable to count characters with odd frequency
		for (int i = 0; i < 26; i++) // Check each character's frequency
			odd_frequency += frequency_of_characters[i] % 2; // Count characters with odd frequency
 
		// If the number of odd frequency characters is greater than k + 1, it's not possible
		if (odd_frequency > k + 1)
			cout << "NO" << endl; // Output NO if not possible
		else
			cout << "YES" << endl; // Output YES if possible
	}
	return 0;
}