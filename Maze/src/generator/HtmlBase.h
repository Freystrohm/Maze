/*
 * HtmlBase.h
 *
 *  Created on: 24.07.2017
 *      Author: Johannes
 */

#ifndef HTMLBASE_H
#define HTMLBASE_H

#include <string>

using namespace std;

namespace Maze {

namespace generator {
class HtmlBase
{
private:
	string head, body;
	string savePath = "html//";
public:
	HtmlBase(string, string);
	virtual ~HtmlBase();

	void generate(string);
};

}/* namespace generator */

} /* namespace Maze */

#endif /* HTMLBASE_H_ */
