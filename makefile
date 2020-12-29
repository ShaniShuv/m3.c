FLAGS = -Wall 

all: mains maind libmyMath.a libmyMath.so
mains: main.o libmyMath.a	
	gcc $(FLAGS) -o mains main.o libmyMath.a
		
maind: main.o libmyMath.so
	gcc $(FLAGS) -o maind main.o ./libmyMath.so
	
main.o: main.c myMath.h
	gcc $(FLAGS) -c main.c

power.o: power.c myMath.h
	gcc $(FLAGS) -c power.c
basicMath.o: basicMath.c myMath.h
	gcc $(FLAGS) -c basicMath.c

mymaths: libmyMath.a 
	
libmyMath.a: power.o basicMath.o 
	ar -rcs libmyMath.a power.o basicMath.o

mymathd: libmyMath.so 

libmyMath.so: power.o basicMath.o 
	gcc $(FLAGS) -shared -o libmyMath.so power.o basicMath.o
	
.PHONY: clean all

clean:
	rm -f main *.o *.a *.so maind mains
