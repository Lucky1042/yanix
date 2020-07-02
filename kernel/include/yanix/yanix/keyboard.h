#ifndef _YANIX_YANIX_KEYBOARD_H
#define _YANIX_YANIX_KEYBOARD_H

#define KEYMODE_PRESSED    0
#define KEYMODE_RELEASED   1
#define KEYMODE_AUTOREPEAT 2

struct input_kb_pkt
{
	uint32_t scancode;   /* Scancode of pressed key */
	uint16_t mode;       /* Mode of press */
	uint16_t translated; /* Translated key */
};

#endif /* _YANIX_YANIX_KEYBOARD_H */