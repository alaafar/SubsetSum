#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

// Function to find the number of ways to calculate
// a target number using only array elements and
// addition or subtraction operator.
int countSubsetSumWays(vector<int> arr, int i, int target)
{
	// If all elements are processed and
	// target is not reached, return 0
	if (i >= arr.size() && target != 0)
		return 0;

	// If target is reached, return 1
	if (target == 0)
		return 1;

	// Return total count of three cases
	// 1. Don't consider current element
	// 2. Consider current element and subtract it from target
	return countSubsetSumWays(arr, i + 1, target)
		+ countSubsetSumWays(arr, i + 1, target- arr[i]);
}

// Driver Program
int main()
{
    int arr[] = {1,3,4,5};
    vector<int> vec (arr, arr + 4) ;
	//vector <int> arr { -3, 1, 3, 5, 7 } ;

	// target number
	int target = 5;

	cout << countSubsetSumWays(vec , 0, target) << endl;

	return 0;
}
/*int countSubsetSumWays(set<int> &set1, int target);

int main() {
	set<int> sampleSet;
	for (int i = 0 ; i < 10 ; i++ )
        {sampleSet.insert(10-i) ; }
        set<int>::iterator it ;
     //   it = sampleSet.find(6) ;
       // sampleSet.erase(it) ;
        for (set<int>::iterator it=sampleSet.begin();it!=sampleSet.end() ; it++ )
        {
            cout << *it << endl ;
        }
	cout << countSubsetSumWays(sampleSet, 5) << endl;
	cout << countSubsetSumWays(sampleSet, 16) << endl;
}

int countSubsetSumWays(set<int> &set1, int target) {
	if (set1.empty() && target != 0) {
		return 0;
	}
	else if (set1.empty() && target == 0)
	{
		return 1;
	}
	 else
	{
        int element = set1.begin() ;
		set<int> rest = set1 - element;
	 	return countSubsetSumWays(rest, target) + countSubsetSumWays(rest, target - element);
	}
}
	bool subsetSumExists(Set<int> &set, int target) {
		if (set.isEmpty() {
			return target == 0;
		} else {
			int element = set.first();
			Set<int> rest = set - element;
			return subsetSumExists(rest, target) || subsetSumExists(rest, target - element);
		}
	}
*/
