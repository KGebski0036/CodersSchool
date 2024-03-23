#pragma once

#include <array>
#include <cstdint>
#include <utility>
#include <iostream>
#include <vector>

constexpr int height = 32;
constexpr int width = 32;

using compresedImage = std::vector<std::pair<uint8_t, uint8_t>>;
using decompresedImage = std::array<std::array<uint8_t, width>, height>;

compresedImage compressGrayscale(const decompresedImage image);
decompresedImage decompressGrayscale(const compresedImage compresedImg);

void printMap(const decompresedImage& map);
