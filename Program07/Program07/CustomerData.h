#pragma once
#include <string>
using namespace std;
class CustomerData
{
public:
	CustomerData(int = 0, const string& = "", const string& = "", 
		const string& = "", const string& = "", const string& = "", const string& = "");

	//CustomerData(int accountNumber, const string& firstName, const string& lastName, const string& streetAddress, const string& city, const string& state, const string& zipCode);

	//accessor function for customerID
	void setCustomerID(int);
	int getCustomerID() const;

	//accessor function for FirstName
	void setFirstName(const string&);
	string getFirstName() const;

	//accessor function for LastName
	void setLastName(const string&);
	string getLastName() const;

	//accessor function for StreetAddress
	void setStreetAddress(const string&);
	string getStreetAddress() const;

	//accessor function for City
	void setCity(const string&);
	string getCity() const;

	//accessor function for State
	void setState(const string&);
	string getState() const;

	//accessor function for ZipCode
	void setZipCode(const string&);
	string getZipCode() const;

private:
	int customerID;
	string firstName;
	string lastName;
	string streetAddress;
	string city;
	string state;
	string zipCode;

	

};

