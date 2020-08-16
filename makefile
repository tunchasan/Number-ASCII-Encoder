hepsi: derle calistir
Nesneler :=  ./lib/Encoder.o ./lib/ListManager.o ./lib/Node.o ./lib/Math.o
derle:
	g++ -I ./include/ -o ./lib/Encoder.o -c ./src/Encoder.cpp
	g++ -I ./include/ -o ./lib/ListManager.o -c ./src/ListManager.cpp
	g++ -I ./include/ -o ./lib/Math.o -c ./src/Math.cpp
	g++ -I ./include/ -o ./lib/Node.o -c ./src/Node.cpp	
	g++ -I ./include/ -o ./bin/Test $(Nesneler) ./src/Main.cpp
calistir:
	./bin/test