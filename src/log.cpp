#include <iostream>

// Example usage of log class
/*

	if loglevel is set to error ; only errors get printed to console
	if loglevel is set to warn ; then both error and warn gets printed
	if loglevel is set to info ; all three logs will get printed

	Log log;
	log.setLevel(log.logLevelError);
	log.error("hello");
	log.warn("hello");
	log.info("hello");
*/

class Log
{

public:
	// enums by default assigns 32 bit (4 byte) integers to values starting from zero
	// Here levelError is initialized to 0 just for readability
	enum Level
	{
		levelError = 0, levelWarn, levelInfo
	};

private:
	int m_logLevel = levelInfo;

public:
	void setLevel(int level)
	{
		m_logLevel = level;
	}

	void error(const char* message)
	{
		if (m_logLevel >= levelError)
			std::cout << "[ERROR]: " << message << std::endl;
	}

	void warn(const char* message)
	{
		if (m_logLevel >= levelWarn)
			std::cout << "[WARN]: " << message << std::endl;
	}

	void info(const char* message)
	{
		if (m_logLevel >= levelInfo)
			std::cout << "[INFO]: " << message << std::endl;
	}
};