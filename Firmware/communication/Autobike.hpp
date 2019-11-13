#ifndef __AUTOBIKE_H
#define __AUTOBIKE_H

namespace AutoBike {

	static const uint8_t WATCHDOG = 0;
	static const uint8_t CHECK_ERROR = 1;
	static const uint8_t REQUEST_STATE = 2;
	static const uint8_t STATE_FEEDBACK = 3;
	static const uint8_t FEEDBACK = 4;
	static const uint8_t TRAJECTORY = 5;
	static const uint8_t RAMPEDVEL = 6;


    struct dataPacket 
	{
		uint8_t action :3;
		uint8_t axis :1;
		uint8_t clearError :1;
		uint8_t spare :3;
		
		int16_t value;

    };
	struct returnValue 
	{
		uint8_t startB;
		uint8_t action :3;
		uint8_t axis :1;
		uint8_t Error :2;
		uint8_t spare :2;

		int32_t data;
		char endB; // \0 for ending a string
	};
}

#endif /* __AUTOBIKE_H */