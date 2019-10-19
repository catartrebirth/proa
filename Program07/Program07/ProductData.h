#pragma once
#include <string>
using namespace std;
class ProductData
{
public:
	ProductData(int = 0, const string& = " ", double = 0.0);

	void setProductID(int);
	int getProductID() const;

	void setDescription(const string&);
	string getDescription() const;

	void setPrice(double);
	double getPrice() const;

private:
	int productID;
	string description;
	double price;
};

