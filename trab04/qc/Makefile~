NAME = trab04q01

SRC_DIR = src
INC_DIR = include
OBJ_DIR = obj
BIN_DIR = bin

TARGET = $(BIN_DIR)/$(NAME)

CC = gcc
CFLAGSS = -shared
CFLAGS = -Wall -g -fPIC -Wl,-rpath,./$(INC_DIR) 

SRC = ${wildcard $(SRC_DIR)/*.c}
OBJ = ${addprefix $(OBJ_DIR)/, ${notdir ${SRC:.c=.o}}}

.PHONY: clean dist-clean

all:
	@mkdir -p $(OBJ_DIR) $(BIN_DIR)
	$(MAKE) $(TARGET)
	
sharedobj: $(OBJ)
	$(CC) $(CFLAGSS) -o $(INC_DIR)/libseno.so $(OBJ)
	
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@echo construindo o objeto $@
	@echo comando: 
	@echo $(CC) -c $(CFLAGS) -I$(INC_DIR) $< -o $@
	$(CC) -c $(CFLAGS) -I$(INC_DIR) $< -o $@

$(TARGET): $(OBJ) sharedobj
	@echo criando executável
	@echo comando target:
	@echo $(CC) $(OBJ) $(CFLAGS) -o  $@
	$(CC) $(OBJ_DIR)/main.o -L./$(INC_DIR) -lseno $(CFLAGS) -o $@
	@echo terminado

clean:
	@echo limpando...
	@find . -name *.o -exec rm {} \;
	@rm -rf *~ *.o prog out.txt

dist-clean: clean
	@echo Limpando com dist-clean
	@rm -f $(TARGET)
	@rm -rf $(BIN_DIR)
