CXX = clang++
CXXFLAGS = -std=c++20 -Wall -Wextra -gdwarf-4

SRC_DIR = src
INC_DIR = headers
BIN_DIR = bin
TEST_DIR = tests

SRC = $(addprefix $(SRC_DIR)/, driver.cpp uni_stud_info_prog.cpp)
OBJ = $(addprefix $(BIN_DIR)/, $(notdir $(SRC:.cpp=.o)))
EXECUTABLE = $(BIN_DIR)/StudInfo

all: $(BIN_DIR) $(EXECUTABLE)

$(BIN_DIR) $(TEST_DIR):
	mkdir -p $@

$(BIN_DIR)/%.o: $(SRC_DIR)/%.cpp $(INC_DIR)/uni_stud_info.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(EXECUTABLE): $(OBJ)
	$(CXX) $(OBJ) -o $@

clean:
	rm -f $(BIN_DIR)/* $(EXECUTABLE)
