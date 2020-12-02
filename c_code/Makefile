all:
	gcc -fPIC -I/usr/lib/jvm/jdk-8-oracle-arm32-vfp-hflt/include -I/usr/lib/jvm/jdk-8-oracle-arm32-vfp-hflt/include/linux -I./include -c src/JavaButton.c -o src/JavaButton.o
	gcc -shared -o libbuttonnative.so src/JavaButton.o -lhardware
	mv libbuttonnative.so ../build
	mv src/JavaButton.o ../build

	gcc -fPIC -I/usr/lib/jvm/jdk-8-oracle-arm32-vfp-hflt/include -I/usr/lib/jvm/jdk-8-oracle-arm32-vfp-hflt/include/linux -I./include -c src/JavaLED.c -o src/JavaLED.o
	gcc -shared -o liblednative.so src/JavaLED.o -lhardware
	mv liblednative.so ../build
	mv src/JavaLED.o ../build

