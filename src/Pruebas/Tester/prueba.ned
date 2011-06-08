package Pruebas.Tester;



import ned.DatarateChannel;
import inet.nodes.ethernet.Tester;



//
// BEB RSTP basic testing
//
network Tester2
{
    @display("bgb=689,368");
    types:
        channel C extends DatarateChannel
        {
            delay = 0.1us;
        }
    submodules:
        T0: Tester {
            parameters:
                @display("p=301,48");
            gates:
                Connection;
        }
        T1: Tester {
            parameters:
                @display("p=192,118");
            gates:
                Connection;
        }

    connections:
        T1.Connection <--> C <--> T0.Connection;
}
