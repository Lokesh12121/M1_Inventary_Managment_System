PROJECT_NAME = IMS

BUILD_DIR = Build

SRC = src/pharma_add.c\
src/pharma_delete.c\
src/pharma_display.c\
src/pharma_modify.c\
src/pharma_search.c\
0
TEST_SRC = test/pharma_test.c\
unity/unity.c\

TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).out

INC = -Iinc\
-Iunity

ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
          EXEC = out
   endif
endif

# Project Output name
PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).out

# Document files
DOCUMENTATION_OUTPUT = doc/html

# Default target built
$(PROJECT_NAME):all

# Makefile will not run target command if the name with file already exists. To override, use .PHONY
.PHONY : all test coverage run clean doc

all:$(BUILD_DIR)
	gcc pharma.c $(SRC) $(INC) -o $(call FixPath,$(BUILD_DIR)/$(PROJECT_NAME).$(EXEC))

coverageCheck:$(BUILD_DIR)
	g++ -fprofile-arcs -ftest-coverage -fPIC -O0 $(TEST_SRC) $(INC) -o $(TEST_OUTPUT)
	./$(TEST_OUTPUT)

run: all
	$(call FixPath,$(BUILD_DIR)/$(PROJECT_NAME).$(EXEC))

doc:
	make -C doc

$(BUILD_DIR):
	mkdir $(BUILD_DIR)

clean:
	$(RM) $(call FixPath,$(BUILD_DIR)/*)
	make clean -C doc
	rmdir $(BUILD_DIR) doc/html

