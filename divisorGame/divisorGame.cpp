

#include "../include/include.hpp"


/* Alice and Bob take turns playing a game, with Alice starting first.

Initially, there is a number n on the chalkboard. On each player's turn, that player makes a move consisting of:

Choosing any x with 0 < x < n and n % x == 0.
Replacing the number n on the chalkboard with n - x.
Also, if a player cannot make a move, they lose the game.

Return true if and only if Alice wins the game, assuming both players play optimally.

Example 1:

Input: n = 2
Output: true
Explanation: Alice chooses 1, and Bob has no more moves.
Example 2:

Input: n = 3
Output: false
Explanation: Alice chooses 1, Bob chooses 1, and Alice has no more moves.

*/


class Solution
{
public:
	vector<bool> memo;

	bool divisorGame(int n)
	{
		return n % 2 == 0;
	}
};


int main()
{
	Solution ss;

	vector<int> nums = {2, 3, 4,5,6,7,8,9,10};

	for (auto num : nums)
	{
		cout << ss.divisorGame(num) << '\n';
	}

	return (0);
}
