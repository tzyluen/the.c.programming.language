CC=gcc
CFLAGS=-Wall -g
all: default

default:
	$(CC) $(CFLAGS) exe2.1.c -o exe2.1
	$(CC) $(CFLAGS) exe2.2.c -o exe2.2
	$(CC) $(CFLAGS) exe2.3.c -o exe2.3
	$(CC) $(CFLAGS) exe2.4.c -o exe2.4
	$(CC) $(CFLAGS) exe2.5.c -o exe2.5
	$(CC) $(CFLAGS) example2.5.c -o example2.5
	$(CC) $(CFLAGS) example2.7.c -o example2.7
	$(CC) $(CFLAGS) example2.8.c -o example2.8
	$(CC) $(CFLAGS) base.c -o base
clean:
	rm -f a.out
	rm -fr *.dSYM
	rm -f example2.5
	rm -f example2.7
	rm -f example2.8
	rm -f exe2.1
	rm -f exe2.2
	rm -f exe2.3
	rm -f exe2.4
	rm -f exe2.5
	rm -f base
