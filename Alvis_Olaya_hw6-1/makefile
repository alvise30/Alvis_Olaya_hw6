a.out: main.o solve.o functions.o runge-kutta.o
	@cc -lm main.o solve.o functions.o runge-kutta.o
	@./a.out
	@python plot.py

main.o: main.c
	@cc -c main.c

solve.o: solve.c
	@cc -c solve.c

functions.o: functions.c
	@cc -c functions.c

runge-kutta.o: runge-kutta.c
	@cc -c runge-kutta.c

all: a.out

clean: 
	@rm -f *.o
	@rm -f a.out
	@rm -f *.pdf
	@rm -f *.dat

