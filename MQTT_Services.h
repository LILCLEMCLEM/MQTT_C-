#include <iostream>


class MQTT_ROUTER
{
   

    private:
        std::string IPAddress ;
        std::string Port;
        std::string ClientID = "";

    public:
    //constructeur
        MQTT_ROUTER(std::string address , std::string port);
        MQTT_ROUTER(std::string address , std::string port, std::string CliID);
    //end

    void Subscribe(std::string Topic , int QOS);
    void Publish(std::string Topic , char Message[], int QOS);
    void SubscribeOnTerm(std::string Topic , int QOS);

};


// mosquitto_sub -h ADDRESS -t TOPIC
// mosquitto_pub -h ADDRESS -t TOPIC -m MESSAGE
