CXX = clang++
CXXFlags = -std=c++20 -Wall -Wextra

SRC = driver.cpp uni_stud_info_prog.cpp
OBJ = $(SRC:.cpp=.o)
EXECUTABLE = StudInfo

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJ)
	$(CXX) $(OBJ) -o $@

%.o: %.cpp uni_stud_info.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(EXECUTABLE)