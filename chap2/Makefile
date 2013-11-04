CC=gcc
CFLAGS=-Wall
all: default

default:
	$(CC) $(CFLAGS) exe2.1.c -o exe2.1
	$(CC) $(CFLAGS) exe2.2.c -o exe2.2
	$(CC) $(CFLAGS) example2.5.c -o example2.5
	$(CC) $(CFLAGS) example2.7.c -o example2.7
clean:
	rm -f a.out
	rm -fr *.dSYM
	rm -f example2.5
	rm -f example2.7
	rm -f exe2.1
	rm -f exe2.2
