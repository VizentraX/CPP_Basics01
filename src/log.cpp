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
	const int logLevelError = 0;
	const int logLevelWarn = 1;
	const int logLevelInfo = 2;
private:
	int m_logLevel = logLevelInfo;

public:
	void setLevel(int level)
	{
		m_logLevel = level;
	}

	void error(const char* message)
	{
		if (m_logLevel >= 0)
			std::cout << "[ERROR]: " << message << std::endl;
	}

	void warn(const char* message)
	{
		if (m_logLevel >= 1)
			std::cout << "[WARN]: " << message << std::endl;
	}

	void info(const char* message)
	{
		if (m_logLevel >= 2)
			std::cout << "[INFO]: " << message << std::endl;
	}
};