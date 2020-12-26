FLAGS = -Wall -g

all: isort txtfind

sort.o: sort.c sort.h
	gcc $(FLAGS) -c sort.c

isort: sort.o sort.h
	gcc $(FLAGS) -o isort sort.o
	
find.o: find.c find.h
	gcc $(FLAGS) -c find.c

txtfind: find.o find.h
	gcc $(FLAGS) -o txtfind find.o 

	
.PHONY: clean all

clean:
	rm -f *.o isort txtfind
