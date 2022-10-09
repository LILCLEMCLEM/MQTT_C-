#include <iostream>
#include "MQTT_Services.h"
#include <string>
using namespace std;


int main(int argc, char *argv[])
{
	char str[] = {"hello_world"};  	//idk why but space don't work actually
	MQTT_ROUTER test("192.168.0.22" , "1883", "test"); // (address , (unused)port , user) 
	test.SubscribeOnTerm("/example" , 2 );	//subscribe on a new terminal  (qos is unused)
	std::string wait;
	std::getline(std::cin, wait);
	
	test.Publish("/example" , str , 2); //(topic , message , (unused)qos)

	std::getline(std::cin, wait);
}
