#include <iostream>
#include <sstream>
#include <string>
#include <iostream>
#include "rapidjson/document.h"
#include <stdio.h>

int main()
{
	std::stringstream ss;
    ss << "{" << std::endl;

    if(1)
    {
        const char quotes = '\"';
        ss << "\t\"InstrumentStore\":" << std::endl;
        ss << "\t{" << std::endl;
        ss << "\t\t\"Path\": " << quotes << quotes << std::endl;
        ss << "\t}," << std::endl;
		//ss << "\t\"Path\": [1,2,3,4,5]" << std::endl;
	}

    ss << "}" << std::endl;
	
	rapidjson::Document mJSON;
	const rapidjson::ParseResult retval = mJSON.Parse(ss.str().c_str());
	std::cout << retval.IsError() << std::endl;
	std::cout << (ss.str()) << std::endl;
	
	const std::string name = "InstrumentStore";
	const std::string fieldname = "Path";
	const rapidjson::Value& value = mJSON[fieldname.c_str()];

	const char* pname = name.c_str();
	std::cout << pname[1] << std::endl;

	std::cout << mJSON.HasMember("U") << std::endl;
	//rapidjson::SizeType i = 0;
	//const auto array = value.GetArray();
	//std::cout << array[i] << std::endl;
	
	/*
	for (const auto& a : array)
	{
		printf("array: %d\n", a.GetInt());
	}
	*/
}

