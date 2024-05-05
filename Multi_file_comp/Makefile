fact: myMath.o math.o
	g++ myMath.o math.o -o fact

myMath.o: myMath.cpp
	g++ -c myMath.cpp

math.o: math.cpp
	g++ -c math.cpp

clean:
	rm *.o math


