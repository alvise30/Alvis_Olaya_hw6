all: particle_in_field.x trayectoria_1_30.dat trayectoria_1_30.pdf

trayectoria_1_30.pdf:trayectoria_1_30.dat
	python plot_trayectoria.py trayectoria_1_30.dat
trayectoria_1_30.dat:particle_in_field.x
	./particle_in_field.x 1 30
particle_in_field.x:particle_in_field.c
	gcc particle_in_field.c -lm -o particle_in_field.x

clean:
	rm -f *.dat *.pdf *.x

