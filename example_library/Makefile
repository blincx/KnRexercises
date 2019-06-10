CC=gcc
OBJECTS=numberlib.o asklib.o 

numberlib.o: numberlib.h
asklib.o: asklib.h

numbers: numbers.c $(OBJECTS)
	gcc numbers.c $(OBJECTS) -o numbers

clean:
	rm $(OBJECTS) numbers
