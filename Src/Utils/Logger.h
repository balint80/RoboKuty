/*
 * Logger.h
 *
 */

#ifndef SRC_UTILS_LOGGER_H_
#define SRC_UTILS_LOGGER_H_

class Logger
{
public:
	enum Severity
	{
		Error,
		Info,
		Verbose
	};

	// constructors
	Logger();
	Logger(Severity severity);
	Logger(const Logger &obj);
	void operator=(const Logger &obj);

	// destructor
	virtual ~Logger();

	// public methods
	void write(Severity severity, const char text[]) const;

private:
	Severity m_severity;

};

#endif /* SRC_UTILS_LOGGER_H_ */
