/*
 * HtmlBase.cpp
 *
 *  Created on: 24.07.2017
 *      Author: Johannes
 */

#include "HtmlBase.h"
#include <fstream>
#include <iostream>

namespace Maze
{

namespace generator
{

HtmlBase::HtmlBase(string head, string body)
{
	this->head = head;
	this->body = body;
}

HtmlBase::~HtmlBase()
{
	// TODO Auto-generated destructor stub
}

void HtmlBase::generate(string pageTitle)
{
	fstream file;
	file.open((savePath + pageTitle).c_str(), ios::out);
	if (file.fail())
	{
		cout << "File could not opened" << endl;
//		string ex = "File could not opened!";
//		throw ex;
	}

	file << "<html>\n<head>\n" << head << "\n</head>\n<body>\n" << body
			<< "\n</body>\n</html>";
	file.close();
}

}/* namespace generator */

} /* namespace Maze */

int main()
{
	Maze::generator::HtmlBase test("head", "body");

	test.generate("Test.html");

	std::cout << "hello world";
	return 0;
}
