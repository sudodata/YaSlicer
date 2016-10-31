#pragma once
#define GLM_FORCE_RADIANS
#include <glm/glm.hpp>
#include <glm/ext.hpp>

#include <vector>
#include <functional>
#include <cstdint>


void SplitMesh(std::vector<float>& vb, std::vector<float>& nb, std::vector<uint32_t>& ib, const uint32_t maxVertsInBuffer,
	const std::function<void(const std::vector<float>& vb, const std::vector<float>& nb, const std::vector<uint32_t>& ib)>& onMesh);

void ConvertToFloat16(const std::vector<float>& in, std::vector<glm::float16>& out);

std::vector<float> CalculateNormals(const std::vector<float>& vb, const std::vector<uint32_t>& ib);