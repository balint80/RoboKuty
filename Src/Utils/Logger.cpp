/*
 * Logger.cpp
 *
 */

#include <Utils/Logger.h>
#include <Arduino.h>

Logger::Logger()
{
	m_severity = Info;
	Serial.begin(9600);
}

Logger::Logger(Severity severity)
{
	m_severity = severity;
	Serial.begin(9600);
}

Logger::Logger(const Logger &obj)
{
	m_severity = obj.m_severity;
}

void Logger::operator=(const Logger &obj)
{
	m_severity = obj.m_severity;
}

/*
 * Write the given text in the log if its severity is at
 * least what the Logger was initialized with.
 */
void Logger::write(Severity severity, const char text[]) const
{
	if (severity <= m_severity)
	{
		Serial.println(text);
	}
}

Logger::~Logger()
{
	// TODO Auto-generated destructor stub
}

