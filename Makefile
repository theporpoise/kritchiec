CFLAGS=-Wall -g

all: create

clean:
	rm -f b.hack

create:
	cc exercise.c

see:
	cat b.hack
