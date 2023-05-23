/**
  * Daphne 以 10% 的单利投资了 100 美元。也就是说，每一年的利润都是投资额的 10%，即每年 10 美元；
  *
  * 利息 = 0.10 X 原始存款
  *
  * 而 Cleo 以 5% 的复利投资了 100 美元。也就是说，利息是当前存款（包括获得的利息）的5%，
  *
  *	利息 = 0.05 X 当前存款
  *
  *	Cleo 在第一年投资 100 美元的盈利是 5%——得到了105美元。下一年是 105美元的 5% ———— 即 5.25 美元， 依此类推。
  *
  * 请编写一个程序，计算多少年后， Cleo 的投资价值才能超过 Daphne 的投资价值，并显示此时两个人的投资价值。
  */

#include<iostream>

int main594()
{
	float daphneMoney = 100.0f;
	const float DaphneRate = 0.1f;
	float cleoMoney = 100.0f;
	const float CleoRate = 0.05f;
	int year = 0;
	while (cleoMoney <= daphneMoney)
	{
		year++;
		daphneMoney = 100 * DaphneRate + daphneMoney;
		cleoMoney = cleoMoney + cleoMoney * CleoRate;
	}
	std::cout << "第" << year << "年" << std::endl;
	std::cout << "Daphne's Money = " << daphneMoney << std::endl;
	std::cout << "Cleo's Money = " << cleoMoney << std::endl;

	return 0;
}