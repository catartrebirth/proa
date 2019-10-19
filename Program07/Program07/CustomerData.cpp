#include "pch.h"
#include "CustomerData.h"


CustomerData::CustomerData(int customerAccount, const string& firstNameString, const string& lastNameString,
	const string& streetAddressString, const string& cityString, const string& stateString, const string& zipCodeString)
	: customerID(customerAccount) {
	setFirstName(firstNameString);
	setLastName(lastNameString);
	setStreetAddress(streetAddressString);
	setCity(cityString);
	setState(stateString);
	setZipCode(zipCodeString);
}

void CustomerData::setCustomerID(int customerAccount) {
	customerID = customerAccount;
}

int CustomerData::getCustomerID() const { return customerID; }

void CustomerData::setFirstName(const string& firstNameString) {
	/*size_t length{ firstNameString.size() };
	length = (length < 10 ? length : 9);
	firstNameString.copy(firstName, length);
	firstName[length] = '\0';*/

	firstName = string(firstNameString);
}

string CustomerData::getFirstName() const { return firstName; }

void CustomerData::setLastName(const string& lastNameString) {
	/*size_t length{ lastNameString.size() };
	length = (length < 15 ? length : 14);
	lastNameString.copy(lastName, length);
	lastName[length] = '\0';*/

	lastName = string(lastNameString);
}

string CustomerData::getLastName() const { return lastName; }

void CustomerData::setStreetAddress(const string& streetAddressString) {
	/*size_t length{ streetAddressString.size() };
	length = (length < 50 ? length : 49);
	streetAddressString.copy(streetAddress, length);
	streetAddress[length] = '\0';*/

	streetAddress = string(streetAddressString);
}

string CustomerData::getStreetAddress() const { return streetAddress; }

void CustomerData::setCity(const string& cityString) {
	/*size_t length{ cityString.size() };
	length = (length < 20 ? length : 19);
	cityString.copy(city, length);
	city[length] = '\0';*/
	
	city = string(cityString);
}

string CustomerData::getCity() const { return city; }

void CustomerData::setState(const string& stateString) {
	/*size_t length{ stateString.size() };
	length = (length < 2 ? length : 1);
	stateString.copy(state, length);
	state[length] = '\0';*/

	state = string(stateString);
}

string CustomerData::getState() const { return state; }

void CustomerData::setZipCode(const string& zipCodeString) {
	/*size_t length{ zipCodeString.size() };
	length = (length < 5 ? length : 4);
	zipCodeString.copy(zipCode, length);
	zipCode[length] = '\0';*/

	zipCode = string(zipCodeString);
}

string CustomerData::getZipCode() const { return zipCode; }


