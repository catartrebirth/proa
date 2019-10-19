// Program07.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include "CustomerData.h"
#include "ProductData.h"
#include "OrderData.h"
using namespace std;
enum class Choice{ADDPRODUCT =1, ADDORDER, LISTCITY, LISTSTATE, RECORDBYCITY, RECORDBYSTATE, ORDERBYCUSTOMERID, ORDERBYZIPCODE, END};


Choice enterChoice();


void addProduct(fstream&);
void addOrder(fstream&);
void listCity(fstream&);
void listStates(fstream&);
void customerRecordsByCity(fstream&);
void customerRecordsByState(fstream&);
void orderByCustomerID(fstream&);
void orderByZipCode(fstream&);
void outputLine(ostream&, const CustomerData&);
int getProductNumber(const char* const);

int main()
{
	/*int account;
	string name;
	double balance;*/

	//ifstream inFile("CustomerMaster.txt", ios::in);
	//ifstream inFile("clients.txt", ios::in);
	//ofstream outFile{ "clients.txt", ios::out };

	fstream dataFile{ "Test.txt", ios::in | ios::out | ios::binary };
	if (!dataFile) {
		cerr << "File could not be opened." << endl;
		exit(EXIT_FAILURE);
	}

	

	Choice choice;
	while ((choice = enterChoice()) != Choice::END) {
		switch (choice) {
		case Choice::ADDPRODUCT:
			addProduct(dataFile);
			break;
		case Choice::ADDORDER:
			addOrder(dataFile);
			break;
		case Choice::LISTCITY:
			listCity(dataFile);
			break;
		case Choice::LISTSTATE:
			listStates(dataFile);
			break;
		case Choice::RECORDBYCITY:
			customerRecordsByCity(dataFile);
			break;
		case Choice::RECORDBYSTATE:
			customerRecordsByState(dataFile);
			break;
		case Choice::ORDERBYCUSTOMERID:
			orderByCustomerID(dataFile);
			break;
		case Choice::ORDERBYZIPCODE:
			orderByZipCode(dataFile);
			break;
		default:
			cerr << "Invalid Choice" << endl;
			break;
		}
		dataFile.clear();
	}

}
//Enable user to input menu choice
Choice enterChoice() {

	
	//display available options
	cout << "\nSelection\n"
		<< "1 - Add Product\n"
		<< "2 - Add Order\n"
		<< "3 - List Cities\n"
		<< "4 - List States\n"
		<< "5 - List Customer Records in a City\n"
		<< "6 - List Customer Records in a State\n"
		<< "7 - List Order by Customer ID\n"
		<< "8 - List order by Customer ZipCode\n" << endl;
	cout << "Enter choice: ";

	int menuChoice;
	
	cin >> menuChoice;
	return static_cast<Choice>(menuChoice);
}

void addProduct(fstream& addProduce) {

	/*int productID;
	string description;
	double price;

	ofstream outProductfile("products.txt", ios::out);
	if (!outProductfile) {
		cerr << "file could not be opened." << endl;
		exit(EXIT_FAILURE);
	}

	cout << "enter the product id, description, and price.\n"
		<< "enter end-of-file to end input.\n? ";

	while (cin >> productID >> description >> price) {
		outProductfile << productID << '%' << description << '%' << price << endl;
		cout << "? ";
	}*/

	int productNumber{ getProductNumber("Enter new Product ID") };
	addProduce.seekg((productNumber - 1) * sizeof(ProductData));

	ProductData product;
	addProduce.read(reinterpret_cast<char*>(&product), sizeof(ProductData));

	if (product.getProductID() == 0) {
		string description;
		double price;


		cout << "Enter Product Description, and price.\n?";
		cin >> setw(20) >> description;
		cin >> price;

		product.setDescription(description);
		product.setPrice(price);
		product.setProductID(productNumber);

		addProduce.seekp((productNumber - 1) * sizeof(ProductData));

		addProduce.write(reinterpret_cast<const char*>(&product), sizeof(ProductData));
	}
	else {
		cerr << "Item #" << productNumber
			<< " already contains information." << endl;
	}

}

void addOrder(fstream& addOrder) {
	cout << "hello";
}

void listCity(fstream& lookupcity) {

}

void listStates(fstream& lookupstate) {

}
void customerRecordsByCity(fstream& recordByCity) {

}
void customerRecordsByState(fstream& recordByState) {

}
void orderByCustomerID(fstream& byCustomerID) {

}
void orderByZipCode(fstream& byZipCode) {

}


void outputLine(ostream& output, const CustomerData& record) {
	output << left << setw(10) << record.getCustomerID()
		<< setw(11) << record.getFirstName()
		<< setw(16) << record.getLastName();
}

int getProductNumber(const char* const prompt) {
	int productNumber;

	do {
		cout << prompt << " (1-100): ";
		cin >> productNumber;
	} while (productNumber < 1 || productNumber > 100);
	return productNumber;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file


/*int productID;
	string description;
	double price;

	ofstream outPrintFile("Products.txt", ios::out);
	if (!outPrintFile) {
		cerr << "File could not be opened." << endl;
		exit(EXIT_FAILURE);
	}

	outPrintFile << left << setw(10) << "ProductID" << setw(16)
		<< "Description" << setw(11) << "Price" << setw(10) << endl;

	addProduct.seekg(0);

	CustomerData customer;
	addProduct.read(
		reinterpret_cast<char*>(&customer), sizeof(CustomerData));

	while (!addProduct.eof()) {
		if (customer.getAccountNumber() != 0) {
			outputLine(outPrintFile, customer);
		}

		addProduct.read(
			reinterpret_cast<char*>(&customer), sizeof(CustomerData));
	}*/




	////input to file
	//if (!outFile) {
	//	cerr << "File could not be opened" << endl;
	//	exit(EXIT_FAILURE);
	//}

	//cout << "Enter the account, name, and balance.\n"
	//	<< "Enter end-of-file to end input.\n? ";
	//while (cin >> account >> name >> balance) {
	//	outFile << account << ' ' << name << ' ' << balance << endl;
	//	cout << "?";
	//}

	//cout << endl;
	//// read file
	//if (!inFile) {
	//	cerr << "File could not be opened" << endl;
	//	exit(EXIT_FAILURE);
	//}

	//cout << left << setw(10) << "Account" << setw(13)
	//	<< "Name" << "Balance\n" << fixed << showpoint;


	//while (inFile >> account >> name >> balance) {
	//	outputLine(account, name, balance);
	//}

/*if (!(cin)) {
		cin.clear();
	}*/

