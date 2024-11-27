test : TESTnearestDots.cc nearestDots.cc
	rm -f *.o;
	clang++ TESTnearestDots.cc  -o test -lgtest -lgtest_main -lpthread \
	&& ./test

near : nearestDots.cc
	rm -f *.o;
	clang++ nearestDots.cc -o nearest && ./nearest

clear : 
	rm -f *.o
