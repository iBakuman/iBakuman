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

class Solution {
public:
	int hammingWeight(uint32_t n) {
		int res = 0;
		while(n) {
			n = n & (n - 1);
			res++;
		}
		cout << "hello world" << endl;
		cout << "C++" << endl;
		return res;
	}
};
