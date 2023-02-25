out: factorialR.o
	g++ factorialR.o -o out


factorialR.o: factorialR.cpp
	g++ -c factorialR.cpp 


clean: 
	rm *.o
