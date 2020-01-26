CC = gcc
CFLAGS = -Wall
CFLAGS2 = -Wextra
SRC = flop.o
EXEC  = flop.exe 
EXEC2 = tp1
SRC2 = tp1.c



tp1  : tp1.c flop.o
	 gcc -Wall -Wextra -std=c11  -I/usr/include/CUnit -L/usr/lib64 -lcunit -o tp1 tp1.c flop.o
	./tp1


.PHONY: clean

clean :
	ls
	rm -f tp1 tp1.zip
	ls

lib :
	 wget https://github.com/guyfrancoeur/INF3135_H2020/blob/master/tp/tp1.zip
	unzip tp1.zip

test :  
	 ./tp1
