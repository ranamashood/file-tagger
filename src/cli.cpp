#include "cli.hpp"
#include <iostream>

void printHelp();
void printVersion();

void cli::parseArguments(int argc, char *argv[]) {
  for (int i = 1; i < argc; i++) {
    if (i != argc - 1 && argv[i + 1][0] != '-') {
      parseCommand(argv[i], argv[i + 1]);
      i++;
    } else {
      parseOption(argv[i]);
    }
  }
}

void cli::parseOption(std::string key) {
  std::cout << "Option: " << key << "\n";

  if (key == "-h" || key == "--help") {
    printHelp();
  } else if (key == "-v" || key == "--version") {
    printVersion();
  }

  std::cout << "\n\n";
}

void cli::parseCommand(std::string key, std::string value) {
  std::cout << "Command: " << key << " " << value << "\n";

  if (key == "-t" || key == "--tag") {
    std::cout << "WIP - tag";
  }

  std::cout << "\n\n";
}

void printHelp() { std::cout << "WIP - Help"; }

void printVersion() { std::cout << "WIP - version"; }
