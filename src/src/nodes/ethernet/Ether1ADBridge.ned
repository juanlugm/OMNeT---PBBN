//******************************************************
// @brief IEEE 802.1ad Bridge
// @author Juan Luis Garrote Molinero
// @version 1.0
// @date Feb 2011
//******************************************************/




package inet.nodes.ethernet;
import inet.linklayer.ieee8021AD.PortFilt1ad;
import inet.linklayer.ieee8021Q.Relay1Q;
import inet.linklayer.ieee8021Q.Cache1Q;
import inet.linklayer.ethernet.EtherMAC;
import inet.linklayer.RSTP.RSTP;
import inet.linklayer.MVRP.MVRP;

//
// Models an IEEE 802.1ad Bridge. 
//
// This model contains the RSTP (rapid spanning tree) and the MVRP (multiple vlan registration protocol) module
//
module Ether1ADBridge
{
    parameters:
        @node();
        @display("i=device/router;bgb=643,442");
    gates:
        inout ethg[];  //To the backbone
    submodules:
        relay: Relay1Q {
            parameters:
                @display("p=171,77");
            gates:
                GatesOut[sizeof(ethg)];
                GatesIn[sizeof(ethg)];
                RSTPGate;
                MVRPGate;
        }
        PortFilt[sizeof(ethg)]: PortFilt1ad {
            parameters:
                @display("p=171,248,row;q=queue");
            gates:
                GatesOut[2];
                GatesIn[2];
        }

        cache: Cache1Q {
            parameters:
                @display("p=47,174");
        }
        mac[sizeof(ethg)]: EtherMAC {
            parameters:
                promiscuous = true;
                queueModule = "";
                @display("p=171,343,row;q=queue");
        }

        rstp: RSTP {
            @display("p=47,38");
            gates:
                RSTPPort;
        }
        mvrp: MVRP {
            @display("p=47,107");
            gates:
                MVRPPort;
        }

    connections:
        for i=0..sizeof(ethg)-1 {
            ethg[i] <--> mac[i].phys;
            PortFilt[i].GatesOut[0] --> mac[i].upperLayerIn;
            PortFilt[i].GatesIn[0] <-- mac[i].upperLayerOut;
            PortFilt[i].GatesOut[1] --> relay.GatesIn[i];
            PortFilt[i].GatesIn[1] <-- relay.GatesOut[i];
        }

        rstp.RSTPPort <--> relay.RSTPGate;
        mvrp.MVRPPort <--> relay.MVRPGate;
}
