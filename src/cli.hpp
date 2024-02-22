#ifndef CLI_HPP
#define CLI_HPP

#include <string>

namespace cli {
void parseArguments(int argc, char *argv[]);
void parseOption(std::string key);
void parseCommand(std::string key, std::string value);
} // namespace cli

#endif // !CLI_HPP
