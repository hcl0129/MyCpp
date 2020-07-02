#include "rapidjson/document.h"
#include <iostream>
#include <string>

using namespace rapidjson;

int main()
{

	const char* json = " { \"hello\" : \"world\", \"t\" : true , \"f\" : false, \"n\": null, \"i\":123, \"pi\": 3.1416, \"a\":[1, 2, 3, 4] } ";	
	
	std::cout << json << std::endl;
	Document document;
	document.Parse(json);
	assert(document.IsObject());
	assert(document.HasMember("hello"));
	assert(document["hello"].IsString());
	std::cout << document["hello"].GetString() << std::endl;
	std::cout << document["t"].GetBool() << std::endl;
}
