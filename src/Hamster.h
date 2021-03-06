
#if defined(__AVR_ATmega328P__)
#else
#error "Sorry, this Chip-Type isn't supported yet!"
#endif

#ifndef __HAMSTER_H
#define HAMSTER_H

#include "backend/Motors.h"
#include "backend/TimerControl.h"
#include "backend/Movement.h"
#include "backend/LComs.h"

namespace Hamster {
	void postBattery();

	void begin(float Geschwindigkeit);

	void vor();
	void linksUm();

	bool vornFrei();
}

#endif
