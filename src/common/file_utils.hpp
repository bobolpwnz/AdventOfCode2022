#pragma once

#include <filesystem>
#include <functional>
#include <string>

namespace bblp::advent_of_code_2022 {
void parseInput(const std::filesystem::path& filePath, const std::function<void(const std::string&)>& lineCallback);
}
