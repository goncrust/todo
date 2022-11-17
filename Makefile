CXX ?= g++
TARGET_EXEC ?= a.out

# paths
SRC_PATH := src
BUILD_PATH := build
BIN_PATH := $(BUILD_PATH)/bin

# sources
SOURCES := $(shell find $(SRC_PATH) -name *.cpp)
#OBJS := $(SOURCES:%=$(BIN_PATH)/%.o)
OBJS := $(patsubst %, $(BIN_PATH)/%.o, $(SOURCES))

#includes
INCLUDE_PATH := include
INCLUDE_FLAG := $(addprefix -I, $(INCLUDE_PATH))

#flags
CPPFLAGS ?= $(INCLUDE_FLAG)

$(BUILD_PATH)/$(TARGET_EXEC): $(OBJS)
	$(CXX) $(OBJS) -o $@ $(LDFLAGS)

$(BIN_PATH)/%.cpp.o: %.cpp
	mkdir -p $(dir $@)
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c $< -o $@
	
clean:
	$(RM) -r $(BUILD_PATH)
