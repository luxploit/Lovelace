#pragma once

#include <format>
#include <string>

class CLovelaceAbstractLogSink {
public:
	CLovelaceAbstractLogSink() = default;

	virtual ~CLovelaceAbstractLogSink() = 0;
	virtual void InnerWrite(std::string szPrefix, std::string szFormatted, uint16_t u16AccentColor) = 0;
};

