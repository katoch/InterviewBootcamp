/*
 * Given a non-empty array of digits representing a non-negative integer, plus one to the integer.

The digits are stored such that the most significant digit is at the head of the list, and each element in the array contain a single digit.

You may assume the integer does not contain any leading zero, except the number 0 itself.

Example 1:

Input: [1,2,3]
Output: [1,2,4]
Explanation: The array represents the integer 123.
Example 2:

Input: [4,3,2,1]
Output: [4,3,2,2]
Explanation: The array represents the integer 4321.
*/

#include <vector>
#include <cassert>

using namespace std;

vector<int> plusOne(vector<int>& digits)
{
  for (int i=digits.size()-1; i >=0; --i)
  {
    if (digits[i] == 9) {
      digits[i] = 0;
    } else {
      ++digits[i];
      return digits;
    }
  }

  digits[0] = 1;
  digits.push_back(0);
  return digits;
}

int main()
{
  vector<int> digits = {1,2,3};
  vector<int> res = {1,2,4};
  assert(plusOne(digits) == res);

  return 0;

}
