/*
 * Enum_Function_Codes.h
 *
 *  Created on: 13 okt. 2021
 *      Author: Daniel Mårtensson
 */

#ifndef CANOPEN_ENUMS_ENUM_FUNCTION_CODES_H_
#define CANOPEN_ENUMS_ENUM_FUNCTION_CODES_H_

typedef enum{
	FUNCTION_CODE_NMT = 0x0,
	FUNCTION_CODE_SYNC = 0x1,
	FUNCTION_CODE_EMCY = 0x1,
	FUNCTION_CODE_TIME = 0x2,
	FUNCTION_CODE_PDO1_TRANSMIT = 0x3,
	FUNCTION_CODE_PDO1_RECEIVE = 0x4,
	FUNCTION_CODE_PDO2_TRANSMIT = 0x5,
	FUNCTION_CODE_PDO2_RECEIVE = 0x6,
	FUNCTION_CODE_PDO3_TRANSMIT = 0x7,
	FUNCTION_CODE_PDO3_RECEIVE = 0x8,
	FUNCTION_CODE_PDO4_TRANSMIT = 0x9,
	FUNCTION_CODE_PDO4_RECEIVE = 0xA,
	FUNCTION_CODE_SDO_TRANSMIT = 0xB,
	FUNCTION_CODE_SDO_RECEIVE = 0xC,
	FUNCTION_CODE_HEARTBEAT = 0xE,
	FUNCTION_CODE_GUARD = 0xE,
	FUNCTION_CODE_LSS_TRANSMIT = 0xD,
	FUNCTION_CODE_LSS_RECEIVE = 0xF
}ENUMS;

#endif /* CANOPEN_ENUMS_ENUM_FUNCTION_CODES_H_ */
