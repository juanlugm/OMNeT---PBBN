
INET_LOCATION = ../inet
test: checkINET rebuildINET cleanTest
	cd $(INET_LOCATION)/Pruebas/Tester && ./Check.sh
	cd $(INET_LOCATION)/Pruebas/RSTP && ./Check.sh
	cd $(INET_LOCATION)/Pruebas/MVRP && ./Check.sh
	cd $(INET_LOCATION)/Pruebas/EthernetHost && ./Check.sh
	cd $(INET_LOCATION)/Pruebas/Bridge1Q && ./Check.sh
	cd $(INET_LOCATION)/Pruebas/Bridge1AD && ./Check.sh
	cd $(INET_LOCATION)/Pruebas/Bridge1AH && ./Check.sh
	cd $(INET_LOCATION)/Pruebas/Generales && ./Check.sh
	@echo 'Tests finished.'

cleanTest: checkINET
	cd $(INET_LOCATION)/Pruebas/Tester && ./Check.sh clean
	cd $(INET_LOCATION)/Pruebas/RSTP && ./Check.sh clean
	cd $(INET_LOCATION)/Pruebas/MVRP && ./Check.sh clean
	cd $(INET_LOCATION)/Pruebas/EthernetHost && ./Check.sh clean
	cd $(INET_LOCATION)/Pruebas/Bridge1Q && ./Check.sh clean
	cd $(INET_LOCATION)/Pruebas/Bridge1AD && ./Check.sh clean
	cd $(INET_LOCATION)/Pruebas/Bridge1AH && ./Check.sh clean
	cd $(INET_LOCATION)/Pruebas/Generales && ./Check.sh clean


rebuildINET: checkINET
	cd $(INET_LOCATION) && $(MAKE)

checkINET: $(INET_LOCATION)/src 
	@echo ' INET PROJECT FOUND!';

install: src/ Pruebas/ checkINET
	cp -r ./src $(INET_LOCATION)/
	cp -r ./Pruebas $(INET_LOCATION)/
	@echo "IEEE 802.1ah model succesfully installed."

cleanInet: checkINET
	cd $(INET_LOCATION) && make clean

makefiles: checkINET
	cd $(INET_LOCATION) && make makefiles

$(INET_LOCATION)/src:
	$(error INET_LOCATION must be correctly set. Please specify inet location (relative to this Makefile). Ex: make INET_LOCATION=../inet)
