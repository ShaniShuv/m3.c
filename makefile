FLAGS = -Wall -g

all: isort txtfind

isort.o: isort.c isort.h
	gcc $(FLAGS) -c isort.c

isort: isort.o isort.h
	gcc $(FLAGS) -o isort isort.o
	
txtfind.o: txtfind.c txtfind.h
	gcc $(FLAGS) -c txtfind.c

txtfind: txtfind.o txtfind.h
	gcc $(FLAGS) -o txtfind txtfind.o 

	
.PHONY: clean all

clean:
	rm -f *.o isort txtfind
