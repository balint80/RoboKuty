#include <Arduino.h>
#include <Controllers/Controller.h>
#include <Utils/Logger.h>

Logger logger;

/*
 * Runs when board is reset
 */
void setup()
{
	logger = Logger(Logger::Info);
	logger.write(Logger::Info, "Here we go...");

	pinMode(13, OUTPUT);
}

/*
 * Runs over and over forever
 */
void loop()
{
	logger.write(Logger::Verbose, "New loop...");

	delay(100);
	digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
	delay(5000);              // wait for a second
	digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
	delay(10000);              // wait for a second
}

/*
 * This is where it all starts
 */
int main(void)
{
	// Initialization
	init(); // Arduino
	setup();

	// The main loop
	for (;;) {
		loop();
	}
}
