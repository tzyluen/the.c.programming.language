CC=gcc
CFLAGS=-Wall -g
all: example4.2

exe4.1:
	$(CC) $(CFLAGS) exe4.1.c -o exe4.1

example4.2:
	$(CC) $(CFLAGS) example4.2.c -o example4.2 -I ../

clean:
	rm -fr exe4.1
	rm -fr exe4.2
	rm -fr example4.2
	rm -fr *.dSYM
	rm -fr *.out
