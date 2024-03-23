#include "compression.hpp"


compresedImage compressGrayscale(const decompresedImage image) {
	compresedImage result;

	for (const auto& row : image) {
		std::pair<uint8_t, uint8_t> data = {0, 0};
		for (const auto& el : row) {

			if (data.second == 0) {
				data.first = el;
				data.second = 1;
				continue;
			}

			if (data.first == el)
				data.second++;
			else
			{
				result.push_back(data);
				data.first = el;
				data.second = 1;
			}

		}
		result.push_back(data);
	}

	result.shrink_to_fit();
	return result;
}

decompresedImage decompressGrayscale(const compresedImage compresedImg) {
	decompresedImage result;

	auto data = compresedImg.begin();

	size_t counter = 0;

	for (auto& row : result)
	{
		for (auto& el : row) {
			el = (*data).first;
			counter++;

			if (counter == (*data).second)
			{
				counter = 0;
				data++;
			}
		}
	}

	return result;
}

void printMap(const decompresedImage& map) {
	//PGM heder
	std::cout << "P2\n# feep.pgm\n"<< map.size() << " " << map[0].size() << "\n255\n";
	for (const auto& row : map) {
		for (const auto& el : row) {
			std::cout << unsigned(el) << " ";
		}
		std::cout << '\n';
	}
}
