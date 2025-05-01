#pragma once

#include <algorithm>
#include <map>
#include <string>
#include <vector>

float consultMax(const std::string& search_term, const std::map<std::string, std::vector<float>>& data) {
    if (data.empty()) {
        return -1;
    }
    bool search_term_exist = false;
    for (auto input : data ) {
        if (input.first == search_term) {
            search_term_exist = true;
        }
    }
    if (!search_term_exist){
        return -1;
    }
    std::vector<float> data_vector = data.at(search_term);
    float max = 0;
    for (float& num : data_vector) {
        if (num > max) {
            max = num;
        }
    }
    return max;

}

std::map<std::string, float> returnMaxMap(const std::map<std::string, std::vector<float>>& in_map) {
    if (in_map.empty()) {
        return {};
    }  
    std::map<std::string, float> maxMap = {};
    float max = 0;
    for (auto normalMap : in_map) {
        for (float& num : normalMap.second ) {
            if (num > max) {
                max = num;
            }
        }
        maxMap.emplace(normalMap.first, max);
        max = 0;
    }
    return maxMap;
}