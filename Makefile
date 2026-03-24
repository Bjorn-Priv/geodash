CXX = g++
FLAGS = -Wall -Wextra

OBJ = build/swordsman.o build/entity.o build/archer.o build/mage.o build/assassin.o

all: rpg

build:
	mkdir -p build

rpg: $(OBJ) build/main.o | build
	$(CXX) $(FLAGS) -o $@ $^

build/main.o : main.cc | build
	$(CXX) $(FLAGS) -c $< -o $@

build/%.o: src/%.cc | build
	$(CXX) $(FLAGS) -c $< -o $@

clean:
	rm -rf build rpg
