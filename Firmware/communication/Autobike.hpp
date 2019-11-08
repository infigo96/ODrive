#ifndef __AUTOBIKE_H
#define __AUTOBIKE_H

namespace AutoBike {

	static const uint8_t CHECK_ERROR = 1;
	static const uint8_t REQUEST_STATE = 2;
	static const uint8_t FEEDBACK = 1;
	static const uint8_t TRAJECTORY = 1;
	static const uint8_t RAMPEDVEL = 1;
	static const uint8_t SPARE = 1;


    struct dataPacket {
		uint8_t action :3;
		uint8_t axis :1;
		uint8_t clearError :1;
		uint8_t spare :3;
		
		int16_t value;

    };
	struct returnValue {
		uint8_t action :3;
		uint8_t axis :1;
		uint8_t NoError :1;
		uint8_t spare :3;

		int data;
		char end = 0;
	};
}

#endif /* __AUTOBIKE_H */