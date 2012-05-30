#ifndef __rtmp_h
#define __rtmp_h

#define PORT	1935

#define CHUNK_LEN	128

#define PACKED	__attribute__((packed))

#define HANDSHAKE_PLAINTEXT	0x03

#define SIG_LENGTH	1536

#define MSG_NUM_BYTES		0x03
#define MSG_PING		0x04
#define MSG_RESPONSE		0x05
#define MSG_REQUEST		0x06
#define MSG_AUDIO		0x08
#define MSG_VIDEO		0x09
#define MSG_NOTIFY		0x12
#define MSG_OBJECT		0x13
#define MSG_INVOKE		0x14

#define CONTROL_ID		0
#define STREAM_ID		1337

struct RTMP_Header {
	uint8_t flags;
	char timestamp[3];
	char msg_len[3];
	uint8_t msg_type;
	char endpoint[4]; /* Note, this is little-endian while others are BE */
} PACKED;

#endif