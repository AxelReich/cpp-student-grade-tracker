# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -std=c++11

# Directories
SRC_DIR = src
BUILD_DIR = build
BIN_DIR = bin

# Source and object files
SRCS = $(SRC_DIR)/Student.cpp $(SRC_DIR)/Biology.cpp $(SRC_DIR)/ComputerScience.cpp \
       $(SRC_DIR)/Theater.cpp $(SRC_DIR)/StudentList.cpp $(SRC_DIR)/main.cpp
OBJS = $(patsubst $(SRC_DIR)/%.cpp, $(BUILD_DIR)/%.o, $(SRCS))

# Target executable
TARGET = $(BIN_DIR)/student_program

# Default target
all: $(TARGET)

# Rule to build the target executable
$(TARGET): $(OBJS) | $(BIN_DIR)
	$(CXX) $(OBJS) -o $@

# Rule to create object files only
students: $(OBJS)

# Rule to compile source files into object files
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Create directories if they don't exist
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

$(BIN_DIR):
	mkdir -p $(BIN_DIR)

# Clean up
clean:
	rm -rf $(BUILD_DIR) $(BIN_DIR)
