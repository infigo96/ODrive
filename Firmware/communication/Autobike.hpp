#ifndef __AUTOBIKE_H
#define __AUTOBIKE_H
namespace AutoBike {
    struct dataPacket {
		uint8_t action :3;
		uint8_t axis :1;
		uint8_t clearError :1;
		uint8_t junk :3;
		
		int16_t value

    };
}
#endif /* __AUTOBIKE_H */