CC=gcc
CFLAGS=-Wall -g
all: chapter1 chapter2

chapter1:
	$(CC) $(CFLAGS) chap1/hello.c -o hello
	$(CC) $(CFLAGS) chap1/fahrenheit-celsius.c -o fahrenheit-celsius
	$(CC) $(CFLAGS) chap1/exe1.4.c -o exe1.4
	$(CC) $(CFLAGS) chap1/example1.4.c -o example1.4
	$(CC) $(CFLAGS) chap1/example1.5.1.c -o example1.5.1
	$(CC) $(CFLAGS) chap1/example1.5.2.c -o example1.5.2
	$(CC) $(CFLAGS) chap1/example1.5.3.c -o example1.5.3
	$(CC) $(CFLAGS) chap1/example1.5.4.c -o example1.5.4
	$(CC) $(CFLAGS) chap1/exe1.6.c -o exe1.6
	$(CC) $(CFLAGS) chap1/exe1.8.c -o exe1.8
	$(CC) $(CFLAGS) chap1/exe1.9.c -o exe1.9
	$(CC) $(CFLAGS) chap1/exe1.9.c -o exe1.9
	$(CC) $(CFLAGS) chap1/exe1.10.c -o exe1.10
chapter2:
	$(CC) $(CFLAGS) chap2/exe2.1.c -o exe2.1
clean:
	rm -f fahrenheit-celsius
	rm -f hello
	rm -f example1.4
	rm -f example1.5.1
	rm -f example1.5.2
	rm -f example1.5.3
	rm -f example1.5.4
	rm -f exe1.4
	rm -f exe1.6
	rm -f exe1.8
	rm -f exe1.9
	rm -f exe1.10
	rm -f exe2.1
	rm -fr *.dSYM
