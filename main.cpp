#include <iostream>
#include "MQTT_Services.h"
#include <string>
using namespace std;


int main(int argc, char *argv[])
{
	char t[] = {"hello_world"};
	MQTT_ROUTER test("192.168.0.22" , "1883", "clement");
	test.SubscribeOnTerm("test" , 2 );
	std::string wait;
	std::getline(std::cin, wait);
	std::string text;
	

	
	test.Publish("test" , t , 2);

	std::getline(std::cin, wait);
}
