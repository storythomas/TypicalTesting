/*
 * Sales_data.h 
 */

// If Sales_data.h is already included, skip everything.
// This protects against errors derived from the same code coppied twice.
#ifndef SALES_DATA_H
#define SALES_DATA_H

// We use the string library.
#include <string>


// Custom class to hold an isbn number, units sold, and revenue made.
struct Sales_data {
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

// End of protection.
#endif