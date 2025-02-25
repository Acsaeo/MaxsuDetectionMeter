#pragma once
#include "DKUtil/Config.hpp"

namespace MaxsuDetectionMeter
{
	using namespace DKUtil::Alias;

	struct MeterSettings
	{
	private:
		template <class T>
		static void PrintSettingValue(const std::string a_key, const T a_data)
		{
			INFO("Setting:\"{}\" is {}"sv, a_key, a_data);
		}

		void ScalingForResolution();

	public:
		MeterSettings();

		void Reload();

		Boolean enableDebugLog{ "EnableDebugLog", "Main" };

		Double fadeSpeed{ "FadeSpeed", "AnimatedEffect" };

		Double flashSpeed = { "FlashSpeed", "AnimatedEffect" };
		Double flashScale = { "FlashScale", "AnimatedEffect" };
		Integer flashShift = { "FlashShift", "AnimatedEffect" };

		Double minFillingSpeed = { "MinFillingSpeed", "AnimatedEffect" };
		Double maxFillingSpeed = { "MaxFillingSpeed", "AnimatedEffect" };

		Integer minTriggerLevel = { "MinTriggerLevel", "Display" };

		Double radiusX = { "RadiusX", "Display" };
		Double radiusY = { "RadiusY", "Display" };

		Integer centerOffsetX = { "CenterOffsetX", "Display" };
		Integer centerOffsetY = { "CenterOffsetY", "Display" };
	};
}
