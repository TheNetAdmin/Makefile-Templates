# tool marcros
CC := g++
CCFLAG := -std=c++14
CCOBJFLAG := $(CCFLAG) -c

# path marcros
BIN_PATH := bin
OBJ_PATH := obj
SRC_PATH := src
DBG_PATH := debug

# compile marcros
TARGET := small.exe
MAIN_SRC := src/main.cpp

# src files & obj files
SRC := $(foreach x, $(SRC_PATH), $(wildcard $(addprefix $(x)/*,.c*)))
OBJ := $(addprefix $(OBJ_PATH)/, $(addsuffix .o, $(notdir $(basename $(SRC)))))

# clean files list
DISTCLEAN_LIST := $(OBJ_PATH)/*
CLEAN_LIST := $(BIN_PATH)/$(TARGET) \
			  $(BIN_PATH)/$(TARGET).exe \
			  $(DISTCLEAN_LIST)

# default rule
default: all

# non-phony targets
$(TARGET): $(OBJ)
	$(CC) $(CCFLAG) -o $(BIN_PATH)/$@ $?

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c*
	$(CC) $(CCOBJFLAG) -o $@ $<

# phony rules
.PHONY: all
all: $(TARGET)

.PHONY: clean
clean:
	@rm -f $(CLEAN_LIST)

.PHONY: distclean
distclean:
	@rm -f $(DISTCLEAN_LIST)