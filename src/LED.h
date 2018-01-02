/*
 .----------------.  .----------------.  .-----------------. .----------------.
| .--------------. || .--------------. || .--------------. || .--------------. |
| |   ________   | || |     _____    | || | ____  _____  | || |     ____     | |
| |  |  __   _|  | || |    |_   _|   | || ||_   \|_   _| | || |   .'    `.   | |
| |  |_/  / /    | || |      | |     | || |  |   \ | |   | || |  /  .--.  \  | |
| |     .'.' _   | || |      | |     | || |  | |\ \| |   | || |  | |    | |  | |
| |   _/ /__/ |  | || |     _| |_    | || | _| |_\   |_  | || |  \  `--'  /  | |
| |  |________|  | || |    |_____|   | || ||_____|\____| | || |   `.____.'   | |
| |              | || |              | || |              | || |              | |
| '--------------' || '--------------' || '--------------' || '--------------' |
 '----------------'  '----------------'  '----------------'  '----------------'

 Created by: Saleem Hadad
 Date: 2/1/2018
 Github: https://github.com/saleem-hadad/zino
*/

#ifndef ZINO_LED_H
#define ZINO_LED_H

#include "Pin.h"

class LED
{
public:
	/*
	LED constructor:
	@params:
	void
	@return:
	void
	*/
	LED();

	/*
	init method:
	@params:
	Pin pin
	@return:
	void
	---
	*/
	void init(Pin pin);

    /*
    on method:
    @params:
    void
    @return:
    void
    ---
    */
    void on();

    /*
    off method:
    @params:
    void
    @return:
    void
    ---
    */
    void off();

    /*
    toggle method:
    @params:
    void
    @return:
    void
    ---
    */
    void toggle();
private:
    enum LEDStatus {
        On,
        Off
    };
	// The pin object used to be set as output.
	Pin* _pin;

    LEDStatus _status = Off;

	// Used to track if the blinky object initialized or not.
	bool _initialized = false;
};

#endif
