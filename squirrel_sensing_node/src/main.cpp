#include <string>

#include "../include/squirrel_sensing_node/node.h"

using namespace std;

int main(int argc,char** argv){

    //if(argc!=2){
    //    cout << "Error starting sensing node. The node requires as input the port from where the microcontroller is connected" << endl;
    //    return -1;
    //}

    string name="sensing";  //can be read from argv

    ros::init(argc, argv, name);

    cout << "Creating " << name << " node " << endl;

    //TODO implement portname parameter passing
    //cout << "Args: " << argv << endl;

    SensingNode sensing(name,"/dev/ttyACM1"); //string(argv[1]) ); //TODO to test - ??? This parameter has to be set 0 check the port of Arduino!!

    cout << "Executing " << name << " node " << endl;

    sensing.run();

    cout << name << " node has terminated his execution" << endl;
}
