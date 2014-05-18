all: clean isPrimeNaive isPrimeFast isPrime allprimenumbersbelown ds linkedlisttest
isPrimeNaive:
	gcc -c -Wall -Werror -lm -fPIC isPrimeNaive.c
	gcc -shared -o ../sharedlib/libmathplusplus.so.1.1 isPrimeNaive.o
isPrimeFast:
	gcc -c -Wall -Werror -lm -fPIC isPrimeFast.c
	gcc -shared -o ../sharedlib/libmathplusplus.so.1.2 isPrimeFast.o -lm
rmldlinks_prime:
	rm ../sharedlib/libmathplusplus.so.1
	rm ../sharedlib/libmathplusplus.so
updateIsPrimeWithNaive: rmldlinks_prime
	ln -s libmathplusplus.so.1.1 ../sharedlib/libmathplusplus.so.1
	ln -s libmathplusplus.so.1 ../sharedlib/libmathplusplus.so
updateIsPrimeWithFast: rmldlinks_prime
	ln -s libmathplusplus.so.1.2 ../sharedlib/libmathplusplus.so.1
	ln -s libmathplusplus.so.1 ../sharedlib/libmathplusplus.so
isPrime:
	gcc -L/home/alagu/programming/c/cexercises/sharedlib -Wall isPrime.c -o isPrime -lmathplusplus 
allprimenumbersbelown:
	gcc -L/home/alagu/programming/c/cexercises/sharedlib -Wall allprimenumbersbelown.c -o allprimenumbersbelown -lmathplusplus 
rmldlinks_ds:
	-rm ../sharedlib/libds.so.1
	-rm ../sharedlib/libds.so
updateDs: rmldlinks_ds
	ln -s libds.so.1.1 ../sharedlib/libds.so.1
	ln -s libds.so.1 ../sharedlib/libds.so
ds:
	gcc -c -Wall -Werror -lm -fPIC ds.c
	gcc -shared -o ../sharedlib/libds.so.1.1 ds.o
linkedlisttest:
	gcc -L/home/alagu/programming/c/cexercises/sharedlib -Wall linkedlisttest.c -o linkedlisttest -lds 
clean:
	-rm -r isPrime isPrimeNaive.o isPrimeFast.o ../sharedlib/libmathplusplus.so.1.1 ../sharedlib/libmathplusplus.so.1.2 allprimenumbersbelown ds.o ../sharedlib/libds.so.1.1 linkedlisttest 

.PHONY: clean updateIsPrimeWithNaive updateIsPrimeWithFast rmldlinks_prime updateDs rmldlinks_ds
