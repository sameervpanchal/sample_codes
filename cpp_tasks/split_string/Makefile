IDIR =./inc
SDIR =./src
BUILD=./build
CPP=g++
BINARY_NAME=split_string
BINARY_PATH=$(BUILD)/$(BINARY_NAME)
CC_DFLAGS=-g -Wall
CFLAGS=-I $(IDIR) -std=gnu++0x
LIBS=
ODIR=$(BUILD)
OBJ=$(SDIR)/*.cpp

$(BINARY_PATH): $(OBJ) 
	@mkdir -p $(BUILD)
	$(CPP) $(CFLAGS) $? -o $@ $(LIBS)

install:
	#Install binary

clean:
	@rm $(BUILD)/*
