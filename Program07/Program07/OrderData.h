#pragma once
#include <string>
using namespace std;
class OrderData
{
public:
	OrderData(int = 0, int = 0, int = 0, int = 0, int = 0);

	void setOrderID(int);
	int getOrderID() const;

	void setCustomerID(int);
	int getCustomerID() const;

	void setProductID(int);
	int getProductID() const;

	void setQuantity(int);
	int getQuantity() const;

	void setOrderTotal(int);
	int getOrderTotal() const;

private:
	int orderID;
	int customerID;
	int productID;
	int quantity;
	int orderTotal;
};

