test: example
	./example

example: example.o

example.o: trace.h

clean:
	rm -f example example.o

.PHONY: test clean
