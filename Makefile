CFLAGS=-Wall -g

all: create

clean:
	rm -f b.hack

create:
	cc exercise.c 
	./a.out

see:
	cat b.hack
