CC=gcc
CFLAGS=-Wall -g -lm
all: default

default:
	$(CC) $(CFLAGS) exe2.1.c -o exe2.1
	$(CC) $(CFLAGS) exe2.2.c -o exe2.2
	$(CC) $(CFLAGS) exe2.3.c -o exe2.3
	$(CC) $(CFLAGS) exe2.4.c -o exe2.4
	$(CC) $(CFLAGS) exe2.5.c -o exe2.5
	$(CC) $(CFLAGS) exe2.6.c -o exe2.6
	$(CC) $(CFLAGS) example2.5.c -o example2.5
	$(CC) $(CFLAGS) example2.7.c -o example2.7
	$(CC) $(CFLAGS) example2.8.c -o example2.8
	$(CC) $(CFLAGS) example2.9.c -o example2.9
	$(CC) $(CFLAGS) bits.c -o bits
	$(CC) $(CFLAGS) base.c -o base
	$(CC) $(CFLAGS) recur.c -o recur
clean:
	rm -f a.out
	rm -fr *.dSYM
	rm -f example2.5
	rm -f example2.7
	rm -f example2.8
	rm -f example2.9
	rm -f exe2.1
	rm -f exe2.2
	rm -f exe2.3
	rm -f exe2.4
	rm -f exe2.5
	rm -f exe2.6
	rm -f base
	rm -f bits 
	rm -f recur
