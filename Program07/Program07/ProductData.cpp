#include "pch.h"
#include "ProductData.h"


ProductData::ProductData(int productNumber, const string& descriptionString, double cost)
	:productID(productNumber), price(cost) {
	setDescription(descriptionString);
}

void ProductData::setProductID(int productNumber) {
	productID = productNumber;
}
int ProductData::getProductID() const { return productID; }

void ProductData::setDescription(const string& descriptionString) {
	/*size_t length{ descriptionString.size() };
	length = (length < 20 ? length : 19);
	descriptionString.copy(description, length);
	description[length] = '\0';*/

	description = string(descriptionString);
}
string ProductData::getDescription() const { return description; }

void ProductData::setPrice(double cost) {
	price = cost;
}
double ProductData::getPrice() const { return price; }

