# Compilador e flags
CC = gcc
CFLAGS = -I./include

# Diretórios
SRC_DIR = ./src
BIN_DIR = ./bin
LIB_DIR = ./lib

# Arquivos
APP = app
LIB_STATIC = $(LIB_DIR)/libmath.a
MAIN_OBJ = $(BIN_DIR)/main.o
MATH_OBJ = $(BIN_DIR)/mathlib.o

# Alvo padrão
all: $(APP)

# Compila o executável linkando com a lib estática
$(APP): $(MAIN_OBJ) $(LIB_STATIC)
	$(CC) $(MAIN_OBJ) -L$(LIB_DIR) -lmath -o $(APP)

# Compila main.c em objeto
$(MAIN_OBJ): $(SRC_DIR)/main.c
	$(CC) $(CFLAGS) -c $(SRC_DIR)/main.c -o $(MAIN_OBJ)

# Cria a biblioteca estática
$(LIB_STATIC): $(MATH_OBJ)
	ar rcs $(LIB_STATIC) $(MATH_OBJ)

# Compila mathlib.c em objeto
$(MATH_OBJ): $(SRC_DIR)/mathlib.c
	$(CC) $(CFLAGS) -c $(SRC_DIR)/mathlib.c -o $(MATH_OBJ)

# Limpa arquivos compilados
clean:
	rm -f $(BIN_DIR)/*.o $(APP) $(LIB_STATIC)

# Executa o app
run: $(APP)
	./$(APP)

# =================================================================

# Use `make` para compilar tudo
# Use `make run` para executar `./app`
# Use `make clean` para excluir os objetos e binários