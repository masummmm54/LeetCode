

#include "../include/include.hpp"

class Solution
{
public:

	vector<vector<int>> generate(int numRows)
	{
		vector<int> row;
		vector<vector<int>> res;

		for (int i = 0; i < numRows; i++)
		{
			for (int j = 0; j <= i; j++)
			{
				if (j == 0)
					row.push_back(1);
				else if (j == i)
					row.push_back(1);
				else
					row.push_back(res[i - 1][j] + res[i - 1][j - 1]);
			}
			res.push_back(row);
			row.clear();
		}

		return res;
	}
};

int main()
{
	Solution ss;

	vector<int> nums = {1,2,3,4,5,6};//, 1, 3, 6};

	for (auto num : nums)
	{
		print_nested_container(ss.generate(num));
	}

	return (0);
}
