DED_FLAGS=-Wall -Wextra -Weffc++ -Wcast-align -Wcast-qual -Wconversion -Wctor-dtor-privacy -Wempty-body -Wfloat-equal -Wformat-security -Wformat=2 -Wignored-qualifiers -Winit-self -Winline -Wlogical-op -Wmain -Wmissing-declarations -Wno-missing-field-initializers -Wmissing-include-dirs -Wnon-virtual-dtor -Woverloaded-virtual -Wpointer-arith -Wredundant-decls -Wshadow -Wsign-promo -Wstack-usage=8192 -Wstrict-aliasing -Wstrict-null-sentinel -Wswitch-default -Wswitch-enum -Wtype-limits -Wundef -Wunreachable-code -Wwrite-strings -fexceptions -g -pipe -D_DEBUG -D_EJUDGE_CLIENT_SIDE -D_EJC
FILE_OBJECTS=main.o comparisons.o sorting.o open.o text_processing.o printing_file.o

all: onegin

onegin: main.o comparisons.o sorting.o open.o text_processing.o printing_file.o
	@g++ $(DED_FLAGS) $(FILE_OBJECTS) -o onegin

main.o: main.cpp
	@g++ $(DED_FLAGS) -c main.cpp -o main.o
	@echo "[CXX] main"

conparisons.o: conparisons.cpp
	@g++ $(DED_FLAGS) -c conparisons.cpp -o conparisons.o
	@echo "[CXX] conparisons"

sorting.o: sorting.cpp
	@g++ $(DED_FLAGS) -c sorting.cpp -o sorting.o
	@echo "[CXX] sorting"

open.o: open.cpp
	@g++ $(DED_FLAGS) -c open.cpp -o open.o
	@echo "[CXX] open"

text_processing.o: text_processing.cpp
	@g++ $(DED_FLAGS) -c text_processing.cpp -o text_processing.o
	@echo "[CXX] text_processing"

printing_file.o: printing_file.cpp
	@g++ $(DED_FLAGS) -c printing_file.cpp -o printing_file.o
	@echo "[CXX] printing_file"

clean:
	rm -rf *.o
	rm -rf *.exe