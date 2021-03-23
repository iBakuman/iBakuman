#include <bits/stdc++.h>

using namespace std;

// class Solution {
// public:
// 	void setZeroes (vector<vector<int>>& matrix) {
// 		vector<bool> recordR(matrix.size(), false);
// 		vector<bool> recordC(matrix[0].size(), false);
// 		for (int i = 0; i < matrix.size(); ++i) {
// 			for (int j = 0; j < matrix[i].size(); ++j) {
// 				if (matrix[i][j] == 0)
// 					recordC[j] = recordR[i] = true;
// 			}
// 		}
// 	}
//
// 	void fill (vector<vector<int>>& matrix, int row, int column) {
// 		if (row >= 0 && row < matrix.size()) {
// 			for (int i         = 0; i < matrix[row].size(); ++i)
// 				matrix[row][i] = 0;
// 		}
//
// 		if (column >= 0 && column < matrix[0].size()) {
// 			for (int i            = 0; i < matrix.size(); ++i)
// 				matrix[i][column] = 0;
// 		}
//
// 	}
// };

/**
 * // This is the interface that allows for creating nested lists.
 * // You should not implement it, or speculate about its implementation
 * class NestedInteger {
 *   public:
 *     // Return true if this NestedInteger holds a single integer, rather than a nested list.
 *     bool isInteger() const;
 *
 *     // Return the single integer that this NestedInteger holds, if it holds a single integer
 *     // The result is undefined if this NestedInteger holds a nested list
 *     int getInteger() const;
 *
 *     // Return the nested list that this NestedInteger holds, if it holds a nested list
 *     // The result is undefined if this NestedInteger holds a single integer
 *     const vector<NestedInteger> &getList() const;
 * };
 */

int fun() {
	return 1;
}


/**
 * Your NestedIterator object will be instantiated and called as such:
 * NestedIterator i(nestedList);
 * while (i.hasNext()) cout << i.next();
 */
