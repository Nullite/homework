#include <iostream>
using std::cin;
using std::cout;

int rangeSum(int firstNum, int secondNum)
{
	int result = 0;

	if (firstNum > secondNum)
	{
		int temp = secondNum;
		secondNum = firstNum;
		firstNum = temp;
	}

	for (int i = firstNum + 1; i < secondNum; i++)
	{
		result += i;
	}
	return result;
}

int main()
{
	cout << rangeSum(4, 10);
}

