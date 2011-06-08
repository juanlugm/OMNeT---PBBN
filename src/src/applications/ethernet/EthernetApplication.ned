package inet.applications.ethernet;

//******************************************************
// @file EthernetApplication.cc
// @brief Simple traffic generator.
// It generates Etherapp requests and responses. Based in EtherAppCli and EtherAppSrv.
//
// @author Juan Luis Garrote Molinero
// @version 1.0
// @date Feb 2011
//
//
//******************************************************/
simple EthernetApplication
{
    parameters:
        string destAddress = default("");  // destination MAC address, or module path name of destination station; empty means off
        double startTime @unit("s") = default(this.waitTime);  // time to send the first request
        volatile double waitTime @unit("s") = default(uniform(0s,1s));  // interval between sending requests
        volatile int reqLength @unit(B) = default(100B);  // length of request packets
        volatile int respLength @unit(B) = default(1KB);  // length of response packets
     	@display("i=block/app");
    gates:
        input in @labels(Ieee802Ctrl/up);
        output out @labels(Ieee802Ctrl/down);
}
