DED_FLAGS=-Wall -Wextra -Weffc++ -Wcast-align -Wcast-qual -Wconversion -Wctor-dtor-privacy -Wempty-body -Wfloat-equal -Wformat-security -Wformat=2 -Wignored-qualifiers -Winit-self -Winline -Wlogical-op -Wmain -Wmissing-declarations -Wno-missing-field-initializers -Wmissing-include-dirs -Wnon-virtual-dtor -Woverloaded-virtual -Wpointer-arith -Wredundant-decls -Wshadow -Wsign-promo -Wstack-usage=8192 -Wstrict-aliasing -Wstrict-null-sentinel -Wswitch-default -Wswitch-enum -Wtype-limits -Wundef -Wunreachable-code -Wwrite-strings -fexceptions -g -pipe -D_DEBUG -D_EJUDGE_CLIENT_SIDE -D_EJC
FILE_OBJECTS=lecture3.o comparisons.o printing.o sorting.o

all: onegin

onegin: lecture3.o comparisons.o printing.o sorting.o
	@g++ $(DED_FLAGS) $(FILE_OBJECTS) -o onegin

lecture3.o: lecture3.cpp
	@g++ $(DED_FLAGS) -c lecture3.cpp -o lecture3.o
	@echo "[CXX] lecture3"

conparisons.o: conparisons.cpp
	@g++ $(DED_FLAGS) -c conparisons.cpp -o conparisons.o
	@echo "[CXX] conparisons"

printing.o: printing.cpp
	@g++ $(DED_FLAGS) -c printing.cpp -o printing.o
	@echo "[CXX] printing"

sorting.o: sorting.cpp
	@g++ $(DED_FLAGS) -c sorting.cpp -o sorting.o
	@echo "[CXX] sorting"

clean:
	rm -rf *.o
	rm -rf *.exe