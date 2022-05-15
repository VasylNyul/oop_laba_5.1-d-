#include <iostream>
#include <string>
#include <exception>;

#pragma once
using namespace std;

class Error_ex : public exception
{
	string message;
public:
	Error_ex(string msg) :message(msg) {}

	string What() { return message; }
};
