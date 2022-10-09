# MQTT_C-
C++ mqtt for linux


NEED MOSQUITTO_MQTT CLIENT

void MQTT_ROUTER::SubscribeOnTerm(std::string Topic, int QOS)
{
    std::string Sub = "lxterminal --command=\"//bin//bash -c  \'mosquitto_sub -h "+MQTT_ROUTER::IPAddress + " -t \"" + Topic + "\"\'\""; <- this code use lxterm
      for start a subscribe on another terminal. you can change it with your terminal (example for gnome termial : gnome-terminal -x bash -c "<command>; exec bash". don't forget to use escape char in your line.
      use this only for testing your mqtt server in c++.
    {...}
}
