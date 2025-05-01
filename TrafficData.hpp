#pragma once

#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <sstream>

std::map<std::string, int> loadTrafficData(const std::string& filename) {
  auto filereader = std::ifstream(filename);
  if (!filereader.is_open()) {
    std::cout << "-1" << std::endl;
  }
  while (filereader.is_open()) {
    std::string content;
    filereader.getline(content, 9, "\n");
  }
}

void updateTrafficData(const std::string& filename, std::map<std::string, int>& dataMap) {
    //implement your function here!
}