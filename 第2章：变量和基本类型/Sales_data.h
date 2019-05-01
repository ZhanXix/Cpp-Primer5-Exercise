#ifndef SALES_DATA_H
#define SALES_DATA_H 
#include <string>
struct Sales_data{
	std::string ISBN;	//ISBN号
	int count=0;	//售出的册数 
	double money=0;	//单价 
}; 
#endif //SALES_DATA_H
