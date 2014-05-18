all: clean reverse helloalagu hello multiplication pointers rightisoscelestriangle    sidewaystriangle  rightsideuptriangle linkedlist isPrimeNaive isPrimeFast isPrime allprimenumbersbelown 
multiplication:
helloalagu:
hello:
reverse:
rightisoscelestriangle:
rightsideuptriangle:
	gcc -g rightsideuptriangle.c -o rightsideuptriangle
isPrimeNaive:
	gcc -c -Wall -Werror -lm -fPIC isPrimeNaive.c
	gcc -shared -o sharedlib/libmathplusplus.so.1.1 isPrimeNaive.o
isPrimeFast:
	gcc -c -Wall -Werror -lm -fPIC isPrimeFast.c
	gcc -shared -o sharedlib/libmathplusplus.so.1.2 isPrimeFast.o -lm
rmldlinks:
	rm sharedlib/libmathplusplus.so.1
	rm sharedlib/libmathplusplus.so
updateIsPrimeWithNaive: rmldlinks
	ln -s libmathplusplus.so.1.1 sharedlib/libmathplusplus.so.1
	ln -s libmathplusplus.so.1 sharedlib/libmathplusplus.so
updateIsPrimeWithFast: rmldlinks
	ln -s libmathplusplus.so.1.2 sharedlib/libmathplusplus.so.1
	ln -s libmathplusplus.so.1 sharedlib/libmathplusplus.so
isPrime:
	gcc -L/home/alagu/programming/c/cexercises/sharedlib -Wall isPrime.c -o isPrime -lmathplusplus 
allprimenumbersbelown:
	gcc -L/home/alagu/programming/c/cexercises/sharedlib -Wall allprimenumbersbelown.c -o allprimenumbersbelown -lmathplusplus 
clean:
	-rm -r hello helloalagu multiplication reverse rightisoscelestriangle  pointers sidewaystriangle rightsideuptriangle linkedlist isPrime isPrimeNaive.o isPrimeFast.o sharedlib/libmathplusplus.so.1.1 sharedlib/libmathplusplus.so.1.2 allprimenumbersbelown 

.PHONY: clean updateIsPrimeWithNaive updateIsPrimeWithFast rmldlinks
