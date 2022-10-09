#include "MQTT_Services.h"

MQTT_ROUTER::MQTT_ROUTER(std::string address , std::string port)
{
    this->IPAddress = address;
    this->Port = port;
}


MQTT_ROUTER::MQTT_ROUTER(std::string address , std::string port, std::string CliID)
{
    this->IPAddress = address;
    this->Port = port;
    this->ClientID = CliID;
}


void MQTT_ROUTER::Subscribe(std::string Topic, int QOS)
{
    std::string Sub = "mosquitto_sub -h " + MQTT_ROUTER::IPAddress + " -t " + Topic;
    const char* c = Sub.c_str();
    system(c);
    
}

void MQTT_ROUTER::Publish(std::string Topic , char Message[], int QOS)
{
    std::string Pub = "mosquitto_pub -h "+ MQTT_ROUTER::IPAddress + " -t " + Topic + " -m " + Message;
    const char* c = Pub.c_str();
    system(c);
}

void MQTT_ROUTER::SubscribeOnTerm(std::string Topic, int QOS)
{
    std::string Sub = "lxterminal --command=\"//bin//bash -c  \'mosquitto_sub -h "+MQTT_ROUTER::IPAddress + " -t \"" + Topic + "\"\'\"";
    std::cout << Sub << std::endl;
    const char* c = Sub.c_str();
    system(c);
}


// mosquitto_sub -h ADDRESS -t TOPIC
// mosquitto_pub -h ADDRESS -t TOPIC -m MESSAGE
