CC = g++
CFLAGS = -Wall

SRC_DIR = src
BUILD_DIR = build

SRC_FILES = $(wildcard $(SRC_DIR)/*.cpp)
OBJ_FILES = $(patsubst $(SRC_DIR)/%.cpp,$(BUILD_DIR)/%.o,$(SRC_FILES))
TARGET = $(BUILD_DIR)/$(LINK)
LINK = ft

all: $(BUILD_DIR) $(TARGET) $(LINK)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

$(TARGET): $(OBJ_FILES)
	$(CC) $(CFLAGS) $^ -o $@

$(LINK):
	ln -sf $(TARGET) $(LINK)

clean:
	rm -rf $(BUILD_DIR) $(LINK)
