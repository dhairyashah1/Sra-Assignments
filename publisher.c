#include <stdio.h>
#include <mosquitto.h>

int main()
{
    struct mosquitto *mosq; //will hold client data so mosq object is a pointer
    int rc;
    mosquitto_lib_init();
    mosq = mosquitto_new("publisher-test", true, NULL);  //clients instance , {client_id, cleansession or not, ssid, pwssd}
    rc = mosquitto_connect(mosq, "localhost", 1883, 60); //{client instance, host name or IP of broker,
                                                        // PORT no of broker, keep alive time}
    //if everthing went well rc return 0 else value greater than 0
    if(rc!=0)
    {
        printf("Client could not connect due to ErrorCode: %d \n",rc);
        mosquitto_destroy(mosq); //if client cannot cconnect destory its object
        return -1;
    }                                 
    printf("Connected to the broker-Mosquitto");
    mosquitto_publish(mosq, NULL,"test/t1", 6 , "hallo",0,false ) //{client object, pointer to a message id, topic under which message is being published,
                                     //payload length in bytes, message, quality of message(QoS),retrain}                   
    mosquitto_disconnect(mosq);     //disconnect client
    mosquitto_destroy(mosq);        //destro client object
    mosquitto_lib_cleanup();        //cleanup
    return 0;
}