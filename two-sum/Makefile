# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -Wall -g -lgtest -lgtest_main -pthread

# Target executable
TARGET = test

# For deleting the target
TARGET_DEL = main.exe

# Source files
SRCS = test.cpp solution.cpp

# Default rule to build and run the executable
all: $(TARGET) run

# Rule to compile source files directly into the target executeable
$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(TARGET)

# Rule to compile .cpp files into .o files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Rule to run the executable
run: $(TARGET)
	./$(TARGET)

# Clean rule to remove generated files
clean:
	rm -f $(TARGET)