#include <iostream>
#include <string>
#include "Sales_data.h"

int main()
{
	// Create two objects of type 'Sales_data', from my 'Sales_data.h' header.
	Sales_data data1, data2; 
	
	// Placeholder for price per book, used to calculate total revenue.
	double price = 0;


	// code to read INTO data1 and data2:

	// Read the first transaction: ISBN, number of books sold, price per book
	std::cin >> data1.bookNo >> data1.units_sold >> price;
	// Calculate total revenue from price and units_sold
	data1.revenue = data1.units_sold * price;

	// Same for second transaction:
	std::cin >> data2.bookNo >> data2.units_sold >> price;
	data2.revenue = data2.units_sold * price;


	/* 
	 * If/else statement to add the amount of books sold
	 * and the total revenue made
	 * of the same book with the same isbn number.
	 */

	// Make sure both books are the same
	if (data1.bookNo == data2.bookNo) { 

		// Add the number of books sold total.
		unsigned totalCnt = data1.units_sold + data2.units_sold;
		// Find the total revenue made.
		double totalRevenue = data1.revenue + data2.revenue;

		// Print the book number, total books sold, and the revenue made.
		std::cout << data1.bookNo << " " << totalCnt << " " << totalRevenue << " ";

		// if no books were sold, say so.
		if (totalCnt != 0)
			// Print average price per book.
			std::cout << totalRevenue / totalCnt << std::endl;
		else
			std::cout << "(no sales)" << std::endl;
		return 0;
	}
	else {
		// End of if/else, error if trying to add two different books.
		std::cerr << "Data must rever to the same ISBN" << std::endl;
		return -1;
		system("pause");
	}

	return 0;
	system("pause");
}