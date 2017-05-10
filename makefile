polytest2: poly2.o polytest2.o
	g++ poly2.o polytest2.o -g -o polytest2

polyexam2: poly2.o polyexam2.o
	g++ poly2.o polyexam2.o -g -o polyexam2

poly2.o: poly2.cxx poly2.h
	g++ poly2.cxx -c

polyexam2.o: polyexam2.cxx poly2.h
	g++ polytest2.cxx -c

polytest2.o: polytest2.cxx poly2.h
	g++ polytest2.cxx -c

clean:
	rm hello polyexam.o polytest2.o
