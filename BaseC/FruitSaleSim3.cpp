#include <iostream>
using namespace std;

class FruitSeller
{
private:
	const int APPLE_PRICE;
	int numOfApples;
	int myMoney;
public:
	FruitSeller(int price, int num, int money)
		: APPLE_PRICE(price), numOfApples(num), myMoney(money)
	{
	}
	int SaleApples(int money)
	{
		// ���� FruitSaleSim2.cpp�� �����ϹǷ� �����մϴ�.
	}
	void ShowSalesResult() const
	{
		// ���� fruitSaleSim2.cpp�� �����ϹǷ� �����մϴ�.
	}
};

class FruitBuyer
{
private:
	int myMoney;
	int numOfApples;
public:
	FruitBuyer(int money)
		: myMoney(money), numOfApples(0)
	{
	}
	void BuyApples(FruitSeller& seller, int money)
	{
		// ���� fruitSaleSim2.cpp�� �����ϹǷ� �����մϴ�.
	}
	void ShowBuyResult() const
	{
		// ���� fruitSaleSim2.cpp�� �����ϹǷ� �����մϴ�.
	}
};

int main(void)
{
	// ���� fruitSaleSim2.cpp�� �����ϹǷ� �����մϴ�.
}