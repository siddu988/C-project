ABC.exe: big2.o fact.o rev.o main.o
	gcc -o ABC.exe big2.o fact.o rev.o main.o

big2.o: big2.c
	gcc -c big2.c

fact.o: fact.c
	gcc -c fact.c

rev.o: rev.c
	gcc -c rev.c

main.o: main.c
	gcc -c main.c
