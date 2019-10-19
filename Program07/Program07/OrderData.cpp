#include "pch.h"
#include "OrderData.h"


OrderData::OrderData(int orderNumber, int customerAccount, int productNumber, int amount, int amountTotal)
	:orderID(orderNumber), customerID(customerAccount), productID(productNumber), quantity(amount), orderTotal(amountTotal){

}

void OrderData::setOrderID(int orderNumber) {
	orderID = orderNumber;
}
int OrderData::getOrderID() const { return orderID; }

void OrderData::setCustomerID(int customerAccount) {
	customerID = customerAccount;
}
int OrderData::getCustomerID() const { return customerID; }

void OrderData::setProductID(int productNumber) {
	productID = productNumber;
}
int OrderData::getProductID() const { return productID; }

void OrderData::setQuantity(int amount) {
	quantity = amount;
}
int OrderData::getQuantity() const { return quantity; }

void OrderData::setOrderTotal(int amountTotal) {
	orderTotal = amountTotal;
}
int OrderData::getOrderTotal() const { return orderTotal; }
