all: projet


projet: projet.o
	g++ projet.o -o projet

projet.o: projet.cxx
	g++ -c projet.cxx


clean:
	rm -f projet.o projet