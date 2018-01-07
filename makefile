objects=test.o make_test.o

edits : $(objects)
	cc -o main $(objects)
test.o : make_test.h
	cc -c test.c
make_test.h : make_test.h
	cc -c make_test.c
clean:
	rm $(objects)
