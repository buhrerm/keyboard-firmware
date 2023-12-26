#pragma once

#include "animation-utils.c"


#define TAP_FRAMES_FAYE_SHIP 12

#ifdef OLED_ENABLE
bool faye_ship(void) {
// 'faye ship FINAL-0', 128x32px
static const char faye_ship_0 [] PROGMEM = {
	0x00, 0x20, 0x00, 0x80, 0x80, 0x80, 0xc0, 0xc0, 0x40, 0x40, 0x40, 0x60, 0x60, 0x20, 0x20, 0x30, 
	0x10, 0x10, 0x10, 0x10, 0x18, 0x08, 0x09, 0x09, 0x0d, 0x0d, 0x25, 0x05, 0x05, 0x01, 0x03, 0x02, 
	0x0a, 0x0a, 0x02, 0x32, 0x43, 0x04, 0x19, 0x61, 0xa3, 0x23, 0x66, 0x46, 0xc6, 0xcc, 0xac, 0x0c, 
	0x89, 0xc9, 0xda, 0xd2, 0xa6, 0x84, 0x4c, 0x48, 0xc8, 0xd0, 0x90, 0x24, 0x24, 0x64, 0x62, 0x5a, 
	0xd3, 0xf9, 0xed, 0xfc, 0xbc, 0xcc, 0xfe, 0x01, 0x00, 0x00, 0xf8, 0x90, 0xf2, 0xb3, 0xb3, 0x66, 
	0x26, 0xa6, 0xa6, 0xa7, 0x17, 0x37, 0x07, 0x06, 0x86, 0x07, 0x27, 0xa4, 0xa0, 0xb2, 0xb3, 0x82, 
	0x82, 0x12, 0x32, 0x12, 0x26, 0x06, 0x26, 0x26, 0x0e, 0x26, 0x26, 0x06, 0x06, 0x26, 0x26, 0x26, 
	0xa6, 0xa6, 0xa6, 0x86, 0xc6, 0x66, 0x22, 0x32, 0x22, 0x62, 0x13, 0x13, 0x12, 0x90, 0x90, 0x49, 
	0xc0, 0xe0, 0x65, 0x79, 0x43, 0x00, 0x1c, 0x30, 0xa0, 0x20, 0x60, 0x20, 0x30, 0x30, 0x10, 0x50, 
	0x50, 0x48, 0x28, 0x28, 0x28, 0x08, 0x0c, 0x04, 0x14, 0x15, 0x04, 0x04, 0x04, 0x84, 0x82, 0x02, 
	0x82, 0x8a, 0xc2, 0xc3, 0xc1, 0x54, 0x6c, 0x32, 0x4b, 0x44, 0x6e, 0x75, 0x49, 0x44, 0x42, 0x61, 
	0x40, 0x60, 0x20, 0x20, 0x00, 0x60, 0xa0, 0xa4, 0x24, 0x34, 0x55, 0x95, 0x9d, 0x38, 0xfa, 0xf6, 
	0xe4, 0xc8, 0x19, 0x19, 0x33, 0x33, 0x77, 0xc8, 0x88, 0x90, 0xb7, 0x2f, 0x4f, 0x8d, 0x9f, 0x1e, 
	0xdc, 0x31, 0x03, 0x01, 0x00, 0x00, 0x00, 0x1f, 0x39, 0x7d, 0xff, 0xff, 0xfe, 0xff, 0xfc, 0x7c, 
	0x1f, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x00, 0x4c, 0x40, 0xc0, 0x00, 0x30, 0x1c, 0x9f, 0x45, 
	0x0d, 0x81, 0x11, 0x00, 0xc4, 0x22, 0x82, 0x62, 0x11, 0x09, 0x05, 0x02, 0x03, 0x61, 0x30, 0x18, 
	0x32, 0x32, 0x32, 0x32, 0x32, 0x3b, 0x18, 0x18, 0x18, 0x19, 0x18, 0x1d, 0x09, 0x0d, 0x0c, 0x0c, 
	0x0c, 0x0c, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x03, 0x03, 0x03, 0x03, 0x03, 0x01, 0x00, 0x03, 
	0x01, 0x01, 0x01, 0x07, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x0e, 0x1d, 0x1d, 0x05, 0x01, 0x01, 0x01, 0x00, 0x02, 0x04, 0x09, 0x01, 0x03, 0x0f, 
	0xff, 0xff, 0xff, 0xf0, 0x80, 0x00, 0x00, 0x00, 0x01, 0x01, 0x03, 0x86, 0x88, 0x0c, 0x99, 0xdb, 
	0xc6, 0xe0, 0x60, 0x70, 0x30, 0xb0, 0xd0, 0x92, 0x36, 0x6e, 0x26, 0x92, 0xa2, 0x90, 0xdc, 0xe4, 
	0xf6, 0xf2, 0xfa, 0xfb, 0xe9, 0x40, 0x5c, 0x3e, 0x3e, 0x07, 0xc3, 0x00, 0x00, 0x0e, 0x03, 0x60, 
	0x30, 0x18, 0x06, 0x01, 0x00, 0x80, 0x60, 0xd0, 0x34, 0xfc, 0x8c, 0x0c, 0xfc, 0x8c, 0x48, 0x78, 
	0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x80, 0x80, 0x00, 0x80, 0x80, 0x00, 0x00, 0x80, 0x00, 0x00, 0x80, 0x40, 0x40, 0x40, 0x40, 0x20, 
	0x20, 0x20, 0x20, 0x10, 0x10, 0x10, 0x00, 0x00, 0x08, 0x04, 0x02, 0x03, 0x00, 0x00, 0x20, 0x40, 
	0x4f, 0x9f, 0x4f, 0x4f, 0x27, 0x26, 0x10, 0x0a, 0x06, 0x04, 0x0d, 0x01, 0x3e, 0x60, 0x86, 0x02, 
	0x93, 0xd6, 0x07, 0x8f, 0x2f, 0x07, 0xa3, 0x61, 0x00, 0x16, 0x87, 0x03, 0x2b, 0x21, 0x25, 0x24, 
	0x90, 0x10, 0x10, 0x48, 0x84, 0x60, 0x31, 0x0d, 0x06, 0x10, 0x28, 0x4d, 0xc5, 0x85, 0x0f, 0x1a, 
	0x17, 0x2f, 0x6e, 0x6e, 0x90, 0x38, 0x72, 0x76, 0xe0, 0xe6, 0xc6, 0x86, 0x9c, 0x4d, 0x45, 0x6d
};
// 'faye ship FINAL-1', 128x32px
static const char faye_ship_1 [] PROGMEM = {
	0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0xc0, 0xc0, 0x40, 0x40, 0x40, 0x60, 0x60, 0x20, 0x20, 0x30, 
	0x10, 0x10, 0x10, 0x10, 0x18, 0x08, 0x09, 0x09, 0x0d, 0x0d, 0x05, 0x25, 0x05, 0x01, 0x03, 0x02, 
	0x0a, 0x0a, 0x02, 0x22, 0x43, 0x04, 0x19, 0x63, 0xa3, 0x22, 0x66, 0x66, 0x46, 0x4c, 0xcc, 0xcc, 
	0x29, 0x19, 0x9a, 0x92, 0xb6, 0x84, 0x4c, 0x48, 0xc8, 0xd0, 0x94, 0x24, 0x24, 0x64, 0x62, 0x5a, 
	0xd3, 0xf9, 0xed, 0xfc, 0xbc, 0xcc, 0xfe, 0x01, 0x00, 0x00, 0xf8, 0x90, 0xf2, 0xb3, 0xb3, 0x66, 
	0x26, 0xa6, 0x26, 0xa7, 0x17, 0x37, 0x07, 0x06, 0x86, 0x27, 0x27, 0xa4, 0xa0, 0xb2, 0xb3, 0x82, 
	0x82, 0x12, 0x32, 0x32, 0x26, 0x06, 0x26, 0x26, 0x0e, 0x26, 0x26, 0x06, 0x06, 0x26, 0x26, 0x26, 
	0xa6, 0xa6, 0xa6, 0x86, 0xc6, 0x66, 0x22, 0x32, 0x62, 0x22, 0x13, 0x13, 0x12, 0x90, 0x90, 0x49, 
	0xc0, 0xe0, 0x65, 0x79, 0x03, 0x00, 0x1c, 0x30, 0xb0, 0x20, 0x40, 0x20, 0x30, 0x30, 0x10, 0x50, 
	0x50, 0x48, 0x28, 0x28, 0x28, 0x08, 0x0c, 0x14, 0x14, 0x14, 0x04, 0x04, 0x04, 0x84, 0x82, 0x02, 
	0x82, 0x82, 0xc2, 0xd1, 0xd9, 0x44, 0x50, 0x4c, 0x47, 0x64, 0x66, 0x53, 0x49, 0x4d, 0x44, 0x62, 
	0x63, 0x21, 0x20, 0x20, 0x40, 0x60, 0xa0, 0xa4, 0x24, 0x34, 0x55, 0x95, 0x9d, 0x38, 0xfa, 0xf6, 
	0xe4, 0xc8, 0x19, 0x19, 0x33, 0x33, 0x67, 0xc8, 0x88, 0x90, 0xb7, 0x2f, 0x4f, 0x8d, 0x9f, 0x1e, 
	0xcc, 0x31, 0x03, 0x01, 0x00, 0x00, 0x00, 0x1f, 0x39, 0x7f, 0xff, 0xff, 0xfe, 0xfe, 0xfc, 0x7c, 
	0x1f, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x00, 0x4e, 0x40, 0xc0, 0x00, 0x30, 0x1c, 0x97, 0x45, 
	0x0d, 0x81, 0x11, 0x04, 0xc4, 0x22, 0x82, 0x62, 0x11, 0x09, 0x05, 0x03, 0x03, 0x61, 0x30, 0x18, 
	0x32, 0x32, 0x32, 0x32, 0x32, 0x3b, 0x18, 0x18, 0x18, 0x19, 0x18, 0x1d, 0x09, 0x0d, 0x0c, 0x0c, 
	0x0c, 0x0c, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x03, 0x03, 0x03, 0x03, 0x03, 0x01, 0x00, 0x03, 
	0x01, 0x01, 0x01, 0x07, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x0e, 0x1d, 0x1d, 0x05, 0x01, 0x01, 0x01, 0x00, 0x02, 0x04, 0x09, 0x01, 0x03, 0x0f, 
	0xff, 0xff, 0xff, 0xf0, 0x80, 0x00, 0x00, 0x00, 0x01, 0x01, 0x83, 0x86, 0x88, 0x0c, 0x99, 0xdb, 
	0xc6, 0xe0, 0x60, 0x70, 0x30, 0xb0, 0xd0, 0x92, 0x36, 0x6e, 0x26, 0x92, 0xa2, 0xd0, 0xfc, 0xe4, 
	0xf6, 0xfa, 0xfa, 0xfb, 0xe9, 0x40, 0x5c, 0x3e, 0x1e, 0x07, 0xc3, 0x00, 0x00, 0x0e, 0x03, 0x60, 
	0x30, 0x08, 0x06, 0x01, 0x00, 0x80, 0x60, 0xd0, 0x34, 0xfc, 0x8c, 0x0c, 0xfc, 0x8c, 0x48, 0x78, 
	0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x80, 0x00, 0x00, 0x80, 0x40, 0x40, 0x40, 0x40, 0x20, 
	0x20, 0x20, 0x20, 0x10, 0x10, 0x10, 0x00, 0x00, 0x08, 0x04, 0x02, 0x01, 0x00, 0x00, 0x20, 0x40, 
	0x4f, 0x9f, 0x4f, 0x4f, 0x27, 0x26, 0x10, 0x0a, 0x06, 0x04, 0x0d, 0x01, 0x3e, 0x60, 0x86, 0x02, 
	0x93, 0xd2, 0x07, 0x8f, 0x27, 0x07, 0xa3, 0x61, 0x00, 0x96, 0x87, 0x03, 0x2b, 0x21, 0x25, 0xa0, 
	0x94, 0x90, 0x58, 0x48, 0x84, 0x60, 0x31, 0x1c, 0x06, 0x10, 0x28, 0x4d, 0xc5, 0x85, 0x0f, 0x1a, 
	0x17, 0x2f, 0x6f, 0x6e, 0x94, 0x38, 0x73, 0x76, 0xe0, 0xe6, 0xc6, 0x86, 0x9c, 0x4d, 0x45, 0x6d
};
// 'faye ship FINAL-2', 128x32px
static const char faye_ship_2 [] PROGMEM = {
	0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0xc0, 0xc0, 0x40, 0x40, 0x40, 0x60, 0x60, 0x20, 0x20, 0x30, 
	0x10, 0x10, 0x10, 0x10, 0x18, 0x08, 0x09, 0x09, 0x0d, 0x0d, 0x05, 0x25, 0x05, 0x01, 0x03, 0x02, 
	0x02, 0x0a, 0x02, 0x32, 0x43, 0x04, 0x19, 0x61, 0xa3, 0x23, 0x26, 0x66, 0x66, 0x6c, 0x2c, 0x8c, 
	0xc9, 0x59, 0x5a, 0x72, 0x26, 0x84, 0x4c, 0x48, 0xc8, 0xd0, 0x90, 0x24, 0x24, 0x24, 0x62, 0x5a, 
	0xd3, 0xf9, 0xed, 0xfc, 0xbc, 0xcc, 0xfe, 0x03, 0x00, 0x00, 0xf8, 0x90, 0xf2, 0xb3, 0xb3, 0x66, 
	0x26, 0xa6, 0xa6, 0xa7, 0x17, 0x37, 0x27, 0x06, 0x86, 0x07, 0x27, 0xa4, 0xa0, 0xb2, 0xb3, 0x82, 
	0x82, 0x12, 0x32, 0x12, 0x22, 0x06, 0x26, 0x26, 0x0e, 0x26, 0x26, 0x06, 0x06, 0x26, 0x26, 0x26, 
	0xa6, 0xa6, 0xa6, 0x86, 0xc6, 0x66, 0x22, 0x32, 0x62, 0x62, 0x13, 0x13, 0x12, 0x90, 0x90, 0x49, 
	0xc0, 0xe0, 0x65, 0x79, 0x03, 0x00, 0x1c, 0x30, 0xa0, 0x20, 0x40, 0x20, 0x30, 0x30, 0x10, 0x50, 
	0x50, 0x48, 0x28, 0x28, 0x28, 0x08, 0x0c, 0x04, 0x14, 0x14, 0x05, 0x04, 0x04, 0x84, 0x82, 0x02, 
	0x82, 0x8a, 0xc2, 0xcb, 0xc9, 0x4c, 0x5c, 0x50, 0x53, 0x44, 0x4a, 0x4a, 0x45, 0x45, 0x45, 0x62, 
	0x62, 0x62, 0x21, 0x21, 0x01, 0x60, 0xa0, 0xa0, 0x24, 0x34, 0x75, 0x95, 0x9d, 0x38, 0xfa, 0xf6, 
	0xe4, 0xc8, 0x19, 0x19, 0x33, 0x33, 0x77, 0xc8, 0x88, 0x90, 0xb7, 0x2f, 0x4f, 0xcd, 0x9f, 0x1e, 
	0xdc, 0x31, 0x03, 0x03, 0x00, 0x00, 0x00, 0x1f, 0x39, 0x7d, 0xff, 0xff, 0xfe, 0xff, 0xfc, 0x7c, 
	0x1f, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x00, 0x4c, 0x40, 0xc0, 0x00, 0x30, 0x1c, 0x9f, 0x45, 
	0x0d, 0x81, 0x11, 0x00, 0xc4, 0x22, 0x82, 0x62, 0x11, 0x09, 0x05, 0x03, 0x83, 0x61, 0x70, 0x18, 
	0x32, 0x32, 0x32, 0x32, 0x32, 0x3b, 0x1a, 0x18, 0x18, 0x19, 0x18, 0x1d, 0x09, 0x0d, 0x0c, 0x0c, 
	0x0c, 0x0c, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x03, 0x03, 0x03, 0x03, 0x03, 0x01, 0x00, 0x03, 
	0x01, 0x01, 0x01, 0x03, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x0e, 0x1d, 0x1d, 0x05, 0x01, 0x01, 0x01, 0x00, 0x02, 0x04, 0x09, 0x01, 0x01, 0x0f, 
	0xff, 0xff, 0xff, 0xf8, 0xc0, 0x00, 0x00, 0x00, 0x01, 0x01, 0x03, 0x87, 0x88, 0x0c, 0x99, 0xdb, 
	0xd6, 0xe0, 0x60, 0x70, 0x30, 0xb0, 0xd0, 0x92, 0x36, 0x6e, 0x26, 0x92, 0xa2, 0x90, 0x9c, 0xec, 
	0xf6, 0xf2, 0xfa, 0xfb, 0xe9, 0x40, 0x5c, 0x3e, 0x3e, 0x07, 0xc3, 0x00, 0x00, 0x1e, 0x03, 0x60, 
	0x30, 0x18, 0x06, 0x01, 0x00, 0x80, 0x60, 0xd0, 0x34, 0xfc, 0x8c, 0x0c, 0xfc, 0x8c, 0x48, 0x78, 
	0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x80, 0x80, 0x00, 0x80, 0x80, 0x00, 0x00, 0x80, 0x00, 0x00, 0x80, 0x40, 0x40, 0x40, 0x40, 0x20, 
	0x20, 0x20, 0x20, 0x10, 0x10, 0x10, 0x00, 0x00, 0x08, 0x04, 0x12, 0x03, 0x00, 0x00, 0x20, 0x40, 
	0x4f, 0x9f, 0x4f, 0x4f, 0x27, 0x26, 0x10, 0x0a, 0x06, 0x04, 0x0d, 0x01, 0x3e, 0x60, 0x86, 0x02, 
	0x93, 0xd2, 0x07, 0x87, 0x2f, 0x07, 0xa3, 0xe1, 0x00, 0x16, 0x87, 0x03, 0x2b, 0x21, 0x21, 0xa4, 
	0x90, 0x90, 0x10, 0x48, 0x84, 0x60, 0x31, 0x0c, 0x06, 0x12, 0x28, 0x4d, 0xc5, 0x85, 0x0f, 0x1a, 
	0x17, 0x2f, 0x6f, 0x6e, 0x94, 0x38, 0x73, 0x76, 0xe0, 0xe6, 0xc6, 0x86, 0x9c, 0x4d, 0x45, 0x6d
};
// 'faye ship FINAL-3', 128x32px
static const char faye_ship_3 [] PROGMEM = {
	0x00, 0x00, 0x20, 0x80, 0x80, 0x80, 0xc0, 0xc0, 0x40, 0x40, 0x40, 0x60, 0x60, 0x20, 0x20, 0x30, 
	0x10, 0x10, 0x10, 0x10, 0x18, 0x08, 0x09, 0x09, 0x0d, 0x0d, 0x05, 0x25, 0x25, 0x01, 0x03, 0x02, 
	0x02, 0x0a, 0x02, 0x32, 0x43, 0x04, 0x19, 0x61, 0xa3, 0x23, 0x26, 0x66, 0x66, 0x6c, 0x6c, 0x6c, 
	0xe9, 0x69, 0xba, 0x92, 0xa6, 0x84, 0x4c, 0x48, 0xc8, 0xd0, 0x90, 0x24, 0x24, 0x24, 0x62, 0x5a, 
	0xd3, 0xf9, 0xed, 0xfc, 0xbc, 0xcc, 0xfe, 0x03, 0x00, 0x00, 0xf8, 0x90, 0xf0, 0xb3, 0xb3, 0x66, 
	0x26, 0xa6, 0xa6, 0xa7, 0x17, 0x37, 0x27, 0x06, 0x86, 0x07, 0x27, 0xa4, 0xa0, 0xb2, 0xb3, 0x82, 
	0x82, 0x12, 0x32, 0x12, 0x26, 0x06, 0x26, 0x26, 0x0e, 0x26, 0x26, 0x06, 0x06, 0x26, 0x26, 0x26, 
	0xa6, 0xa6, 0xa6, 0x86, 0xc6, 0x66, 0x22, 0x33, 0x62, 0x62, 0x33, 0x13, 0x12, 0x90, 0x90, 0x49, 
	0xc0, 0xe0, 0x65, 0x79, 0x43, 0x00, 0x1c, 0x30, 0xa0, 0x20, 0x60, 0x20, 0x30, 0x30, 0x10, 0x50, 
	0x50, 0x48, 0x48, 0x28, 0x28, 0x08, 0x0c, 0x04, 0x14, 0x14, 0x05, 0x04, 0x04, 0x84, 0x82, 0x02, 
	0x82, 0x8a, 0xc3, 0xc9, 0xc9, 0x4c, 0x4c, 0x44, 0x43, 0x44, 0x43, 0x43, 0x44, 0x47, 0x43, 0x60, 
	0x60, 0x62, 0x23, 0x22, 0x03, 0x60, 0xa0, 0xa0, 0x24, 0x34, 0x74, 0x95, 0x9d, 0x38, 0xfa, 0xf6, 
	0xe4, 0xc8, 0x19, 0x19, 0x33, 0x33, 0x77, 0xc8, 0x88, 0x90, 0xb3, 0x2f, 0x4f, 0xcd, 0x9f, 0x1e, 
	0xdc, 0x30, 0x03, 0x03, 0x00, 0x00, 0x00, 0x1f, 0x39, 0x7d, 0xff, 0xff, 0xfe, 0xff, 0xfc, 0x7c, 
	0x1f, 0x00, 0x00, 0x80, 0x80, 0x90, 0x80, 0x00, 0x4c, 0x40, 0xc0, 0x00, 0x30, 0x1c, 0x9f, 0x45, 
	0x0d, 0x81, 0x11, 0x00, 0xc4, 0x22, 0x82, 0x62, 0x11, 0x09, 0x05, 0x03, 0x83, 0x61, 0x70, 0x18, 
	0x32, 0x32, 0x32, 0x32, 0x32, 0x1b, 0x18, 0x18, 0x18, 0x19, 0x18, 0x1d, 0x09, 0x0d, 0x0c, 0x0c, 
	0x0c, 0x0c, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x03, 0x03, 0x03, 0x03, 0x03, 0x01, 0x00, 0x03, 
	0x01, 0x01, 0x01, 0x03, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x0e, 0x1d, 0x1d, 0x05, 0x01, 0x01, 0x01, 0x00, 0x02, 0x04, 0x09, 0x01, 0x01, 0x0f, 
	0xff, 0xff, 0xff, 0xf8, 0xc0, 0x00, 0x00, 0x00, 0x01, 0x01, 0x03, 0x86, 0x88, 0x0c, 0x99, 0xdb, 
	0xd6, 0xe0, 0x60, 0x70, 0x30, 0xb0, 0xd0, 0x92, 0x36, 0x6e, 0x26, 0x92, 0xa2, 0x90, 0x9c, 0xec, 
	0xf6, 0xf2, 0xfa, 0xfb, 0xe9, 0x40, 0x5c, 0x3e, 0x3e, 0x07, 0xc3, 0x00, 0x00, 0x0e, 0x03, 0x60, 
	0x30, 0x18, 0x06, 0x01, 0x00, 0x80, 0x60, 0xd0, 0x34, 0xfc, 0x8c, 0x0c, 0xfc, 0x8c, 0x08, 0x78, 
	0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x80, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x80, 0x00, 0x00, 0x80, 0x40, 0x40, 0x40, 0x40, 0x20, 
	0x20, 0x20, 0x20, 0x10, 0x10, 0x10, 0x00, 0x00, 0x08, 0x04, 0x12, 0x03, 0x00, 0x00, 0x20, 0x40, 
	0x4f, 0x9f, 0x4f, 0x4f, 0x27, 0x26, 0x10, 0x0a, 0x06, 0x04, 0x0d, 0x01, 0x3e, 0x60, 0x86, 0x02, 
	0x93, 0xd2, 0x07, 0x87, 0x2f, 0x07, 0xa3, 0xe1, 0x40, 0x16, 0x87, 0x03, 0x2b, 0x21, 0x21, 0xa4, 
	0x90, 0x10, 0x10, 0x48, 0x84, 0x60, 0x31, 0x1c, 0x06, 0x10, 0x28, 0x4d, 0xc5, 0x85, 0x0f, 0x1a, 
	0x17, 0x2f, 0x6f, 0x6e, 0x94, 0x38, 0x73, 0x76, 0xe0, 0xe6, 0xc6, 0x86, 0x9c, 0x4d, 0x45, 0x6d
};
// 'faye ship FINAL-4', 128x32px
static const char faye_ship_4 [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xc0, 0xc0, 0x40, 0x40, 0x40, 0x60, 0x60, 0x20, 0x20, 0x30, 
	0x10, 0x10, 0x10, 0x10, 0x18, 0x08, 0x09, 0x09, 0x0d, 0x0d, 0x05, 0x05, 0x25, 0x01, 0x03, 0x02, 
	0x02, 0x0a, 0x82, 0x92, 0x03, 0x04, 0x19, 0x61, 0xa3, 0x23, 0x26, 0x66, 0x66, 0x6c, 0x4c, 0xcc, 
	0xe9, 0xe9, 0xfa, 0xd2, 0xa6, 0x04, 0x4c, 0x68, 0xc8, 0xd0, 0x90, 0x24, 0x24, 0x24, 0x62, 0x5a, 
	0xd3, 0xf9, 0xed, 0xfc, 0xb8, 0xcc, 0xfe, 0x03, 0x00, 0x00, 0xf8, 0x90, 0xf2, 0xb3, 0xb3, 0x66, 
	0x26, 0xa6, 0xa6, 0xa7, 0x17, 0x36, 0x27, 0x06, 0x86, 0x07, 0x27, 0xa4, 0xa0, 0xb2, 0xb3, 0x82, 
	0x82, 0x12, 0x32, 0x12, 0x26, 0x26, 0x26, 0x26, 0x0e, 0x26, 0x26, 0x06, 0x46, 0x26, 0x26, 0x26, 
	0xa6, 0xa6, 0xa6, 0x86, 0xc6, 0x66, 0x22, 0x32, 0x62, 0x62, 0x13, 0x13, 0x12, 0x90, 0x90, 0x49, 
	0xc0, 0xe0, 0x65, 0x79, 0x03, 0x00, 0x0c, 0x30, 0xa0, 0x20, 0x60, 0x20, 0x30, 0x30, 0x10, 0x50, 
	0x50, 0x48, 0x28, 0x28, 0x28, 0x08, 0x0c, 0x04, 0x14, 0x14, 0x14, 0x04, 0x04, 0x84, 0x82, 0x02, 
	0x82, 0x8a, 0xc3, 0xc9, 0xc1, 0x44, 0x44, 0x44, 0x47, 0x44, 0x43, 0x43, 0x44, 0x44, 0x47, 0x66, 
	0x44, 0x65, 0x24, 0x24, 0x07, 0x62, 0xa0, 0xa0, 0x24, 0x34, 0x75, 0x95, 0x9d, 0x38, 0xfa, 0xf6, 
	0xe4, 0xc8, 0x19, 0x19, 0x33, 0x33, 0x77, 0xc8, 0x88, 0x90, 0xb7, 0x2f, 0x4e, 0xcf, 0x9f, 0x1e, 
	0xdc, 0x20, 0x03, 0x03, 0x00, 0x00, 0x00, 0x1f, 0x39, 0x7d, 0xff, 0xff, 0xfe, 0xff, 0xfc, 0x7c, 
	0x1f, 0x00, 0x00, 0x80, 0x80, 0x90, 0x80, 0x00, 0x4c, 0x40, 0xc0, 0x00, 0x30, 0x1c, 0x9f, 0x45, 
	0x0d, 0x81, 0x11, 0x00, 0xc4, 0x22, 0x82, 0x62, 0x11, 0x09, 0x05, 0x03, 0x83, 0x61, 0x70, 0x18, 
	0x32, 0x32, 0x32, 0x32, 0x32, 0x3b, 0x18, 0x18, 0x18, 0x19, 0x18, 0x1d, 0x09, 0x0d, 0x0c, 0x0c, 
	0x0c, 0x0c, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x03, 0x03, 0x03, 0x03, 0x03, 0x01, 0x00, 0x03, 
	0x01, 0x01, 0x01, 0x03, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x0e, 0x1f, 0x1d, 0x05, 0x01, 0x01, 0x01, 0x00, 0x02, 0x04, 0x09, 0x01, 0x01, 0x0f, 
	0xff, 0xff, 0xff, 0xf8, 0xc0, 0x00, 0x00, 0x00, 0x01, 0x01, 0x03, 0x86, 0x88, 0x0c, 0x99, 0x9b, 
	0xd6, 0xe0, 0x60, 0x70, 0x30, 0xb0, 0xd0, 0x92, 0x36, 0x6e, 0x26, 0x92, 0xa2, 0x90, 0xdc, 0xec, 
	0xf6, 0xf2, 0xfa, 0xfb, 0xe9, 0x60, 0x5c, 0x3e, 0x3e, 0x07, 0xc3, 0x00, 0x00, 0x0e, 0x03, 0x60, 
	0x30, 0x18, 0x06, 0x01, 0x00, 0x80, 0x60, 0xd0, 0x34, 0xfc, 0x8c, 0x0c, 0xfc, 0x8c, 0x08, 0x78, 
	0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x80, 0x80, 0x00, 0x80, 0x80, 0x00, 0x00, 0x80, 0x00, 0x00, 0x80, 0x40, 0x40, 0x40, 0x40, 0x20, 
	0x20, 0x20, 0x00, 0x10, 0x10, 0x10, 0x00, 0x00, 0x08, 0x04, 0x12, 0x03, 0x00, 0x00, 0x20, 0x40, 
	0x4f, 0x9f, 0x4f, 0x4f, 0x27, 0x26, 0x10, 0x0a, 0x06, 0x04, 0x0d, 0x01, 0x3e, 0x60, 0x86, 0x02, 
	0x93, 0xd2, 0x06, 0x87, 0x2f, 0x07, 0xa3, 0x61, 0x40, 0x16, 0x87, 0x03, 0x2b, 0x21, 0x21, 0x24, 
	0x94, 0x90, 0x10, 0x48, 0x84, 0x60, 0x31, 0x0c, 0x06, 0x12, 0x28, 0x4d, 0xc5, 0x85, 0x0f, 0x1a, 
	0x17, 0x2f, 0x6f, 0x6e, 0x94, 0x38, 0x73, 0x76, 0xe0, 0xe6, 0xc6, 0x86, 0x9c, 0x0d, 0x45, 0x6d
};
// 'faye ship FINAL-5', 128x32px
static const char faye_ship_5 [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xc0, 0xc0, 0x40, 0x40, 0x40, 0x60, 0x60, 0x20, 0x20, 0x30, 
	0x30, 0x10, 0x10, 0x10, 0x18, 0x08, 0x09, 0x09, 0x0d, 0x0d, 0x05, 0x05, 0x25, 0x21, 0x03, 0x02, 
	0x02, 0x8a, 0x82, 0xd2, 0x03, 0x04, 0x19, 0x61, 0xa3, 0x23, 0x26, 0x66, 0x66, 0x6c, 0x6c, 0x6c, 
	0x69, 0x69, 0xfa, 0xd2, 0xb6, 0x84, 0x44, 0x48, 0xc8, 0xd0, 0x90, 0x24, 0x24, 0x24, 0x62, 0x7a, 
	0xd3, 0xf9, 0xed, 0xfc, 0xb8, 0xcc, 0xfe, 0x03, 0x00, 0x00, 0xf8, 0x90, 0xf0, 0xb3, 0xb3, 0x66, 
	0x26, 0xa6, 0xa7, 0xa7, 0x17, 0x36, 0x26, 0x06, 0x86, 0x07, 0x27, 0xac, 0xa0, 0xb2, 0xb3, 0x82, 
	0x82, 0x12, 0x32, 0x12, 0x26, 0x26, 0x26, 0x26, 0x2e, 0x2e, 0x26, 0x0e, 0x46, 0x26, 0x26, 0x27, 
	0xa6, 0xa6, 0xa6, 0x86, 0xc6, 0x66, 0x22, 0x22, 0x22, 0x22, 0x13, 0x13, 0x12, 0x90, 0x90, 0x59, 
	0xc0, 0xe0, 0x65, 0x79, 0x43, 0x00, 0x0c, 0x30, 0xe0, 0x20, 0x60, 0x20, 0x30, 0x30, 0x10, 0x50, 
	0x50, 0x48, 0x28, 0x28, 0x28, 0x08, 0x0c, 0x04, 0x14, 0x14, 0x04, 0x05, 0x04, 0x84, 0x86, 0x02, 
	0x8a, 0x82, 0xc2, 0xc9, 0xc1, 0x44, 0x44, 0x46, 0x43, 0x44, 0x45, 0x45, 0x44, 0x44, 0x43, 0x62, 
	0x48, 0x6b, 0x2a, 0x26, 0x0e, 0x60, 0xa0, 0xa0, 0x24, 0x34, 0x74, 0x95, 0x9d, 0x38, 0xfa, 0xf6, 
	0xe4, 0xc8, 0x19, 0x19, 0x33, 0x33, 0x77, 0xc8, 0x88, 0x90, 0xb3, 0x2f, 0x4f, 0xcf, 0x9f, 0x1e, 
	0xdc, 0x20, 0x03, 0x03, 0x00, 0x00, 0x00, 0x1f, 0x39, 0x7d, 0xff, 0xff, 0xfe, 0xff, 0xfc, 0x7c, 
	0x1f, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x00, 0x4c, 0x44, 0xc0, 0x40, 0x30, 0x1c, 0x9f, 0x45, 
	0x0d, 0x81, 0x13, 0x00, 0xc4, 0x22, 0x82, 0x62, 0x11, 0x09, 0x05, 0x02, 0x83, 0x61, 0x70, 0x18, 
	0x32, 0x32, 0x32, 0x32, 0x32, 0x3b, 0x1a, 0x18, 0x18, 0x19, 0x18, 0x1d, 0x09, 0x0d, 0x0c, 0x0c, 
	0x0c, 0x0c, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x03, 0x03, 0x03, 0x03, 0x03, 0x01, 0x00, 0x03, 
	0x01, 0x01, 0x01, 0x03, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x0e, 0x1f, 0x1d, 0x05, 0x01, 0x01, 0x01, 0x00, 0x02, 0x04, 0x09, 0x01, 0x01, 0x0f, 
	0xff, 0xff, 0xff, 0xf8, 0xc0, 0x00, 0x00, 0x00, 0x01, 0x01, 0x03, 0x87, 0x88, 0x0c, 0x99, 0x99, 
	0xd2, 0xe0, 0x60, 0x70, 0x30, 0xb0, 0xd0, 0x92, 0x36, 0xee, 0x26, 0xb2, 0xa2, 0x90, 0xdc, 0xec, 
	0xf6, 0xf2, 0xfa, 0xfb, 0xe9, 0x60, 0x5c, 0x3e, 0x3e, 0x07, 0xc3, 0x00, 0x00, 0x0e, 0x03, 0x60, 
	0x30, 0x18, 0x06, 0x03, 0x00, 0x80, 0x60, 0xd0, 0x34, 0xfc, 0xdc, 0x0c, 0xfc, 0x8c, 0x08, 0x78, 
	0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x80, 0x80, 0x00, 0x80, 0x80, 0x00, 0x00, 0x80, 0x00, 0x00, 0x80, 0x40, 0x40, 0x40, 0x40, 0x20, 
	0x20, 0x20, 0x00, 0x10, 0x10, 0x10, 0x00, 0x00, 0x08, 0x04, 0x02, 0x13, 0x00, 0x00, 0x20, 0x40, 
	0x4f, 0x9f, 0x4f, 0x4f, 0x27, 0x26, 0x10, 0x0a, 0x06, 0x04, 0x0d, 0x01, 0x3e, 0x60, 0x86, 0x02, 
	0x93, 0x92, 0x06, 0x87, 0x2f, 0x07, 0xa3, 0xe1, 0x40, 0x16, 0x87, 0x03, 0x23, 0x21, 0x21, 0xa4, 
	0x90, 0x90, 0x50, 0x48, 0xc4, 0x40, 0x21, 0x19, 0x06, 0x12, 0x38, 0x49, 0xc5, 0x85, 0x0f, 0x1a, 
	0x17, 0x2f, 0x6f, 0x6e, 0x94, 0x38, 0x73, 0x76, 0xe0, 0xe6, 0xc6, 0x86, 0x9c, 0x0d, 0x45, 0x6d
};
// 'faye ship FINAL-6', 128x32px
static const char faye_ship_6 [] PROGMEM = {
	0x00, 0x02, 0x00, 0x00, 0x80, 0x80, 0xc0, 0xc0, 0x40, 0x40, 0x40, 0x60, 0x60, 0x20, 0x20, 0x30, 
	0x30, 0x10, 0x10, 0x10, 0x18, 0x08, 0x09, 0x09, 0x0d, 0x0d, 0x05, 0x05, 0x25, 0x21, 0x03, 0x02, 
	0x02, 0x0a, 0x42, 0x62, 0x03, 0x04, 0x19, 0x61, 0xa3, 0x23, 0x26, 0x66, 0x66, 0x6c, 0x6c, 0x6c, 
	0x69, 0x69, 0xfa, 0xd2, 0xa6, 0x84, 0x4c, 0x48, 0xc8, 0xd0, 0x90, 0x24, 0x24, 0x64, 0x62, 0x5a, 
	0xd3, 0xf9, 0xed, 0xfc, 0xb8, 0xcc, 0xfe, 0x03, 0x00, 0x00, 0xf8, 0x90, 0xf0, 0xb3, 0xb3, 0x66, 
	0x26, 0xa6, 0xa6, 0xa6, 0x16, 0x37, 0x26, 0x06, 0x86, 0x07, 0x27, 0xa4, 0xa0, 0xb2, 0xb3, 0x82, 
	0x82, 0x12, 0x32, 0x12, 0x26, 0x06, 0x26, 0x26, 0x0e, 0x26, 0x26, 0x06, 0x46, 0x26, 0x26, 0x27, 
	0xa6, 0xa6, 0xa6, 0x86, 0xc6, 0x66, 0x22, 0x22, 0x62, 0x62, 0x13, 0x13, 0x12, 0x90, 0x90, 0x59, 
	0xc0, 0xe0, 0x65, 0x79, 0x43, 0x00, 0x1c, 0x30, 0xa0, 0x20, 0x60, 0x20, 0x30, 0x30, 0x10, 0x50, 
	0x50, 0x48, 0x28, 0x28, 0x28, 0x08, 0x0c, 0x04, 0x14, 0x14, 0x04, 0x04, 0x04, 0x84, 0x86, 0x02, 
	0x8a, 0x82, 0xc3, 0xc1, 0xc1, 0x44, 0x44, 0x46, 0x43, 0x40, 0x45, 0x45, 0x45, 0x4a, 0x4a, 0x48, 
	0x4a, 0x46, 0x2c, 0x28, 0x44, 0x60, 0xa0, 0xa0, 0x24, 0x34, 0x75, 0x95, 0x9d, 0x38, 0xfa, 0xf6, 
	0xe4, 0xc8, 0x19, 0x19, 0x33, 0x33, 0x77, 0xc8, 0x88, 0x90, 0xb7, 0x2f, 0x4f, 0xcf, 0x9f, 0x1e, 
	0xdc, 0x21, 0x03, 0x03, 0x00, 0x00, 0x00, 0x1f, 0x39, 0x7d, 0xff, 0xff, 0xfe, 0xff, 0xfc, 0x7c, 
	0x1f, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x00, 0x4c, 0x44, 0xc0, 0x00, 0x30, 0x1c, 0x9f, 0x45, 
	0x0d, 0x81, 0x31, 0x00, 0xc4, 0x22, 0x82, 0x62, 0x11, 0x09, 0x05, 0x03, 0x83, 0x61, 0x70, 0x18, 
	0x32, 0x32, 0x32, 0x32, 0x32, 0x3b, 0x1a, 0x18, 0x18, 0x19, 0x18, 0x1d, 0x09, 0x0d, 0x0c, 0x0c, 
	0x0c, 0x0c, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x03, 0x03, 0x03, 0x03, 0x03, 0x01, 0x00, 0x03, 
	0x01, 0x01, 0x01, 0x03, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x0e, 0x1d, 0x1d, 0x05, 0x01, 0x01, 0x01, 0x00, 0x02, 0x04, 0x09, 0x01, 0x01, 0x0f, 
	0xff, 0xff, 0xff, 0xf8, 0xc0, 0x00, 0x00, 0x00, 0x01, 0x01, 0x03, 0x87, 0x88, 0x0c, 0x99, 0x9b, 
	0xc6, 0xe0, 0x60, 0x70, 0x30, 0xb0, 0xd0, 0x92, 0x36, 0x6e, 0x26, 0x92, 0xa2, 0x90, 0xdc, 0xec, 
	0xf6, 0xf2, 0xfa, 0xfb, 0xe9, 0x40, 0x5c, 0x3e, 0x3e, 0x07, 0xc3, 0x08, 0x00, 0x1e, 0x03, 0x60, 
	0x30, 0x18, 0x06, 0x01, 0x00, 0x80, 0x60, 0xd0, 0x34, 0xfc, 0x8c, 0x0c, 0xfc, 0x8c, 0x08, 0x78, 
	0x00, 0x00, 0x40, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x80, 0x80, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x40, 0x40, 0x40, 0x20, 
	0x20, 0x20, 0x00, 0x10, 0x10, 0x10, 0x00, 0x00, 0x08, 0x04, 0x02, 0x13, 0x00, 0x00, 0x20, 0x40, 
	0x4f, 0x9f, 0x4f, 0x4f, 0x27, 0x26, 0x10, 0x0a, 0x06, 0x04, 0x0d, 0x01, 0x3e, 0x60, 0x86, 0x02, 
	0x93, 0x92, 0x06, 0x8f, 0x2f, 0x07, 0xa3, 0xe1, 0x40, 0x16, 0x87, 0x03, 0x23, 0x21, 0x21, 0xa4, 
	0x90, 0x90, 0x50, 0x48, 0xc4, 0x40, 0x31, 0x1c, 0x06, 0x12, 0x38, 0x4d, 0xc5, 0x85, 0x0f, 0x1a, 
	0x17, 0x2f, 0x6f, 0x6e, 0x94, 0x38, 0x73, 0x76, 0xe0, 0xe6, 0xc6, 0x86, 0x9c, 0x0d, 0x45, 0x6d
};
// 'faye ship FINAL-7', 128x32px
static const char faye_ship_7 [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xc0, 0xc0, 0x40, 0x40, 0x40, 0x60, 0x60, 0x20, 0x20, 0x30, 
	0x30, 0x10, 0x10, 0x10, 0x18, 0x08, 0x09, 0x09, 0x0d, 0x4d, 0x05, 0x05, 0x05, 0x21, 0x03, 0x02, 
	0x02, 0x0a, 0x42, 0xc2, 0x03, 0x04, 0x19, 0x63, 0xa3, 0x63, 0x66, 0x66, 0x66, 0x6c, 0x4c, 0x6c, 
	0x69, 0xe9, 0xfa, 0xd2, 0xa6, 0x84, 0x4c, 0x48, 0xc8, 0xd0, 0x90, 0x24, 0x24, 0x64, 0x62, 0x7a, 
	0xd3, 0xf9, 0xed, 0xfc, 0xb8, 0xcc, 0xfe, 0x03, 0x00, 0x00, 0xf8, 0x90, 0xf0, 0xb3, 0xb3, 0x66, 
	0x26, 0xa6, 0xa6, 0xa5, 0x17, 0x36, 0x27, 0x06, 0x84, 0x07, 0x27, 0xac, 0xa0, 0xb2, 0xb3, 0x82, 
	0x82, 0x12, 0x32, 0x12, 0x26, 0x26, 0x26, 0x26, 0x2e, 0x26, 0x26, 0x06, 0x46, 0x26, 0x26, 0x27, 
	0xa6, 0xa6, 0xa6, 0x86, 0xc6, 0x66, 0x22, 0x22, 0x62, 0x62, 0x13, 0x13, 0x12, 0x90, 0x90, 0x59, 
	0xc0, 0xe0, 0x65, 0x79, 0x43, 0x00, 0x0c, 0x30, 0xa0, 0x20, 0x60, 0x20, 0x30, 0x30, 0x10, 0x50, 
	0x50, 0x48, 0x28, 0x28, 0x28, 0x28, 0x0c, 0x04, 0x14, 0x14, 0x04, 0x04, 0x05, 0x84, 0x86, 0x02, 
	0x8a, 0x8a, 0xc2, 0xc3, 0xc1, 0x44, 0x44, 0x46, 0x43, 0x40, 0x45, 0x45, 0x49, 0x4a, 0x47, 0x51, 
	0x06, 0x36, 0x34, 0x08, 0x08, 0x60, 0xa0, 0xa0, 0x24, 0x34, 0x75, 0x95, 0x9d, 0x38, 0xfa, 0xf6, 
	0xe4, 0xc8, 0x19, 0x19, 0x33, 0x33, 0x77, 0xc8, 0x88, 0x90, 0xb3, 0x2f, 0x4e, 0xcd, 0x9f, 0x1e, 
	0xdc, 0x20, 0x03, 0x03, 0x00, 0x00, 0x00, 0x1f, 0x39, 0x7d, 0xff, 0xff, 0xfe, 0xff, 0xfc, 0x7c, 
	0x1f, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x00, 0x4c, 0x44, 0xc0, 0x00, 0x30, 0x1c, 0x9f, 0x45, 
	0x0d, 0x81, 0x11, 0x00, 0xc4, 0x22, 0x82, 0x62, 0x11, 0x09, 0x05, 0x03, 0x83, 0x61, 0x70, 0x18, 
	0x32, 0x32, 0x32, 0x32, 0x32, 0x3b, 0x1a, 0x18, 0x18, 0x19, 0x18, 0x1d, 0x09, 0x0d, 0x0c, 0x0c, 
	0x0c, 0x0c, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x03, 0x03, 0x03, 0x03, 0x03, 0x01, 0x00, 0x03, 
	0x01, 0x01, 0x01, 0x03, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x0e, 0x1f, 0x1d, 0x05, 0x01, 0x01, 0x01, 0x00, 0x02, 0x04, 0x09, 0x01, 0x01, 0x0f, 
	0xff, 0xff, 0xff, 0xf8, 0xc0, 0x00, 0x00, 0x00, 0x01, 0x01, 0x03, 0x87, 0x88, 0x0c, 0x99, 0x9b, 
	0xd6, 0xe0, 0x60, 0x70, 0x30, 0xb0, 0xd0, 0x92, 0x36, 0x6e, 0x26, 0x92, 0xa2, 0x90, 0xdc, 0xec, 
	0xf6, 0xf2, 0xfa, 0xfb, 0xe9, 0x40, 0x5c, 0x3e, 0x3e, 0x07, 0xc3, 0x00, 0x00, 0x1e, 0x03, 0x60, 
	0x30, 0x18, 0x06, 0x01, 0x00, 0x80, 0x60, 0xd0, 0x34, 0xfc, 0x8c, 0x0c, 0xfc, 0x8c, 0x48, 0x78, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x80, 0x80, 0x00, 0x80, 0x80, 0x00, 0x00, 0x80, 0x00, 0x00, 0x80, 0x40, 0x40, 0x40, 0x40, 0x20, 
	0x20, 0x20, 0x00, 0x10, 0x10, 0x10, 0x00, 0x00, 0x08, 0x04, 0x02, 0x03, 0x10, 0x00, 0x20, 0x40, 
	0x4f, 0x9f, 0x4f, 0x4f, 0x27, 0x26, 0x10, 0x0a, 0x06, 0x04, 0x0d, 0x01, 0x3e, 0x60, 0x86, 0x02, 
	0x93, 0xd2, 0x06, 0x8f, 0x2f, 0x07, 0xa3, 0xe1, 0x40, 0x16, 0x87, 0x03, 0x23, 0x21, 0x21, 0x24, 
	0x90, 0x90, 0x10, 0x48, 0x84, 0x40, 0x31, 0x1c, 0x06, 0x12, 0x28, 0x4d, 0xc5, 0x85, 0x0f, 0x1a, 
	0x17, 0x2f, 0x6f, 0x6e, 0x94, 0x38, 0x73, 0x76, 0xe0, 0xe6, 0xc6, 0x86, 0x9c, 0x0d, 0x45, 0x6d
};
// 'faye ship FINAL-8', 128x32px
static const char faye_ship_8 [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0xc0, 0x40, 0x40, 0x40, 0x60, 0x60, 0x20, 0x20, 0x30, 
	0x30, 0x10, 0x10, 0x10, 0x18, 0x08, 0x09, 0x09, 0x0d, 0x4d, 0x05, 0x05, 0x05, 0x21, 0x23, 0x02, 
	0x02, 0x0a, 0x02, 0x32, 0x43, 0x04, 0x19, 0x61, 0x83, 0x23, 0x26, 0x26, 0x66, 0x6c, 0x6c, 0x6c, 
	0xe9, 0xe9, 0xfa, 0xd2, 0xb6, 0x84, 0x4c, 0x48, 0xc8, 0xd0, 0x90, 0x24, 0x24, 0x24, 0x62, 0x7a, 
	0xd3, 0xf9, 0xed, 0xfc, 0xb8, 0xcc, 0xfe, 0x03, 0x00, 0x00, 0xf8, 0x90, 0xf0, 0xb3, 0xb3, 0x66, 
	0x26, 0xa6, 0xa6, 0xa6, 0x16, 0x36, 0x26, 0x06, 0x86, 0x07, 0x27, 0xac, 0xa0, 0xb2, 0xb3, 0x82, 
	0x82, 0x12, 0x32, 0x12, 0x26, 0x26, 0x26, 0x26, 0x2e, 0x2e, 0x26, 0x0e, 0x46, 0x26, 0x26, 0x27, 
	0xa6, 0xa6, 0xa6, 0x86, 0xc6, 0x66, 0x22, 0x22, 0x62, 0x62, 0x33, 0x13, 0x12, 0x90, 0x90, 0x59, 
	0xc0, 0xe0, 0x65, 0x79, 0x43, 0x00, 0x0c, 0x30, 0xe0, 0x20, 0x40, 0x20, 0x30, 0x30, 0x10, 0x50, 
	0x50, 0x48, 0x28, 0x28, 0x28, 0x28, 0x0c, 0x04, 0x14, 0x14, 0x04, 0x04, 0x05, 0x84, 0x86, 0x02, 
	0x82, 0x8a, 0xc2, 0xc3, 0xc1, 0x44, 0x44, 0x46, 0x43, 0x40, 0x43, 0x4b, 0x43, 0x66, 0x24, 0x62, 
	0x34, 0x28, 0x28, 0x20, 0x00, 0x60, 0xa0, 0xa0, 0x24, 0x34, 0x74, 0x95, 0x9d, 0x38, 0xfa, 0xf6, 
	0xe4, 0xc8, 0x19, 0x19, 0x33, 0x33, 0x77, 0xc8, 0x88, 0x90, 0xb3, 0x2f, 0x4f, 0xcd, 0x9f, 0x1e, 
	0xdc, 0x20, 0x03, 0x03, 0x00, 0x00, 0x00, 0x1b, 0x39, 0x7d, 0xff, 0xff, 0xfe, 0xff, 0xfc, 0x7c, 
	0x1f, 0x00, 0x00, 0x80, 0x80, 0x90, 0x80, 0x00, 0x4c, 0x44, 0xc0, 0x40, 0x30, 0x1c, 0x9f, 0x45, 
	0x0d, 0x81, 0x13, 0x00, 0xc4, 0x22, 0x82, 0x62, 0x11, 0x09, 0x05, 0x02, 0x83, 0x61, 0x70, 0x18, 
	0x32, 0x32, 0x32, 0x32, 0x32, 0x3b, 0x1a, 0x18, 0x18, 0x19, 0x18, 0x1d, 0x09, 0x0d, 0x0c, 0x0c, 
	0x0c, 0x0c, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x03, 0x03, 0x03, 0x03, 0x03, 0x01, 0x00, 0x03, 
	0x01, 0x01, 0x01, 0x03, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x0e, 0x1f, 0x1d, 0x05, 0x01, 0x01, 0x01, 0x00, 0x02, 0x04, 0x09, 0x01, 0x01, 0x0f, 
	0xff, 0xff, 0xff, 0xf8, 0xc0, 0x00, 0x00, 0x00, 0x01, 0x01, 0x03, 0x87, 0x88, 0x0c, 0x19, 0x99, 
	0xd2, 0xe0, 0x60, 0x70, 0x30, 0xb0, 0xc0, 0x92, 0x36, 0xee, 0x26, 0xb2, 0xa2, 0x90, 0x9c, 0xec, 
	0xf6, 0xf2, 0xfa, 0xfb, 0xf9, 0x60, 0x5c, 0x3e, 0x3e, 0x07, 0xc3, 0x08, 0x00, 0x1e, 0x03, 0x60, 
	0x30, 0x18, 0x06, 0x03, 0x00, 0x80, 0x60, 0xd0, 0x34, 0xfc, 0xdc, 0x0c, 0xfc, 0x8c, 0x08, 0x78, 
	0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x80, 0x80, 0x00, 0x80, 0x80, 0x00, 0x00, 0x80, 0x00, 0x00, 0x80, 0x40, 0x40, 0x40, 0x40, 0x20, 
	0x20, 0x20, 0x20, 0x10, 0x10, 0x10, 0x00, 0x00, 0x08, 0x04, 0x02, 0x03, 0x10, 0x00, 0x20, 0x40, 
	0x4f, 0x9f, 0x4f, 0x4f, 0x27, 0x26, 0x10, 0x0a, 0x06, 0x04, 0x0d, 0x01, 0x3e, 0x60, 0x86, 0x02, 
	0x93, 0x92, 0x06, 0x87, 0x2f, 0x07, 0xa3, 0xe1, 0x40, 0x16, 0x87, 0x03, 0x23, 0x21, 0x21, 0x24, 
	0x94, 0x90, 0x10, 0x48, 0xc4, 0x40, 0x31, 0x1c, 0x06, 0x12, 0x38, 0x49, 0xc5, 0x85, 0x0f, 0x1a, 
	0x17, 0x2f, 0x6f, 0x6e, 0x94, 0x38, 0x73, 0x76, 0xe0, 0xe6, 0xc6, 0x86, 0x9c, 0x0d, 0x45, 0x6d
};
// 'faye ship FINAL-9', 128x32px
static const char faye_ship_9 [] PROGMEM = {
	0x00, 0x00, 0x02, 0x00, 0x80, 0x80, 0xc0, 0xc0, 0x40, 0x40, 0x40, 0x60, 0x60, 0x20, 0x20, 0x30, 
	0x10, 0x10, 0x10, 0x10, 0x18, 0x08, 0x09, 0x09, 0x0d, 0x0d, 0x45, 0x05, 0x05, 0x01, 0x23, 0x02, 
	0x02, 0x0a, 0x02, 0x32, 0x43, 0x04, 0x19, 0x61, 0xc3, 0x43, 0x86, 0x26, 0x66, 0x6c, 0x6c, 0x6c, 
	0xe9, 0xe9, 0xfa, 0xd2, 0xb6, 0x84, 0x4c, 0x68, 0xc8, 0xd0, 0x90, 0x24, 0x24, 0x24, 0x62, 0x7a, 
	0xd3, 0xf9, 0xed, 0xfc, 0xb8, 0xcc, 0xfe, 0x03, 0x00, 0x00, 0xf8, 0x90, 0xf0, 0xb3, 0xb3, 0x66, 
	0x26, 0xa6, 0xa6, 0xa6, 0x17, 0x36, 0x26, 0x06, 0x84, 0x07, 0x27, 0xa4, 0xa0, 0xb2, 0xb3, 0x82, 
	0x82, 0x12, 0x32, 0x12, 0x22, 0x26, 0x26, 0x26, 0x2e, 0x2e, 0x26, 0x06, 0x46, 0x26, 0x26, 0x26, 
	0xa6, 0xa6, 0xa6, 0x86, 0xc6, 0x66, 0x22, 0x32, 0x62, 0x22, 0x13, 0x13, 0x12, 0x90, 0x90, 0x59, 
	0xc0, 0xe0, 0x65, 0x79, 0x43, 0x00, 0x0c, 0x30, 0xe0, 0x20, 0x60, 0x20, 0x30, 0x30, 0x10, 0x50, 
	0x50, 0x48, 0x28, 0x28, 0x28, 0x08, 0x0c, 0x04, 0x14, 0x14, 0x04, 0x04, 0x04, 0x84, 0x86, 0x02, 
	0x82, 0x8a, 0xc2, 0xc3, 0xc1, 0x44, 0x44, 0x46, 0x43, 0x44, 0x49, 0x67, 0x64, 0x64, 0x52, 0x6c, 
	0x10, 0x20, 0x20, 0x20, 0x00, 0x60, 0xa0, 0xa0, 0x24, 0x34, 0x74, 0x95, 0x9d, 0x38, 0xfa, 0xf6, 
	0xe4, 0xc8, 0x19, 0x19, 0x33, 0x33, 0x77, 0xc8, 0x88, 0x90, 0xb3, 0x2f, 0x4e, 0xcd, 0x9f, 0x1e, 
	0xdc, 0x20, 0x03, 0x03, 0x00, 0x00, 0x00, 0x1f, 0x39, 0x7d, 0xff, 0xff, 0xfe, 0xff, 0xfc, 0x7c, 
	0x1f, 0x00, 0x00, 0x80, 0x80, 0x90, 0x80, 0x00, 0x4c, 0x44, 0xc0, 0x40, 0x30, 0x1c, 0x9f, 0x45, 
	0x0d, 0x81, 0x11, 0x00, 0xc4, 0x22, 0x82, 0x62, 0x11, 0x09, 0x05, 0x03, 0x83, 0x61, 0x70, 0x18, 
	0x32, 0x32, 0x32, 0x32, 0x32, 0x3b, 0x1a, 0x18, 0x18, 0x19, 0x18, 0x1d, 0x09, 0x0d, 0x0c, 0x0c, 
	0x0c, 0x0c, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x03, 0x03, 0x03, 0x03, 0x03, 0x01, 0x00, 0x03, 
	0x01, 0x01, 0x01, 0x03, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x0e, 0x1d, 0x1d, 0x05, 0x01, 0x01, 0x01, 0x00, 0x02, 0x04, 0x09, 0x01, 0x01, 0x0f, 
	0xff, 0xff, 0xff, 0xf8, 0xc0, 0x00, 0x00, 0x00, 0x01, 0x01, 0x03, 0x87, 0x88, 0x0c, 0x99, 0x99, 
	0xd2, 0xe0, 0x60, 0x70, 0x30, 0xb0, 0xd0, 0x92, 0x36, 0x6e, 0x26, 0xb2, 0xa2, 0x90, 0x9c, 0xec, 
	0xf6, 0xf2, 0xfa, 0xfb, 0xe9, 0x60, 0x5c, 0x3e, 0x3e, 0x07, 0xc3, 0x08, 0x00, 0x0e, 0x03, 0x60, 
	0x30, 0x18, 0x06, 0x03, 0x00, 0x80, 0x60, 0xd0, 0x34, 0xfc, 0xdc, 0x0c, 0xfc, 0x8c, 0x08, 0x78, 
	0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x80, 0x80, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x40, 0x40, 0x40, 0x20, 
	0x20, 0x20, 0x00, 0x10, 0x10, 0x10, 0x00, 0x00, 0x08, 0x04, 0x02, 0x03, 0x10, 0x00, 0x20, 0x40, 
	0x4f, 0x9f, 0x4f, 0x4f, 0x27, 0x26, 0x10, 0x0a, 0x06, 0x04, 0x0d, 0x01, 0x3e, 0x60, 0x86, 0x02, 
	0x93, 0xd2, 0x06, 0x87, 0x2f, 0x07, 0xa3, 0x61, 0x40, 0x16, 0x87, 0x03, 0x2b, 0x21, 0x21, 0xa4, 
	0x94, 0x10, 0x10, 0x48, 0xc4, 0x40, 0x21, 0x18, 0x06, 0x12, 0x38, 0x49, 0xc5, 0x85, 0x0f, 0x1a, 
	0x17, 0x2f, 0x6f, 0x6e, 0x94, 0x38, 0x73, 0x76, 0xe0, 0xe6, 0xc6, 0x86, 0x9c, 0x0d, 0x45, 0x6d
};
// 'faye ship FINAL-10', 128x32px
static const char faye_ship_10 [] PROGMEM = {
	0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0xc0, 0xc0, 0x40, 0x40, 0x40, 0x60, 0x60, 0x20, 0x20, 0x30, 
	0x10, 0x10, 0x10, 0x10, 0x18, 0x08, 0x09, 0x09, 0x0d, 0x0d, 0x05, 0x05, 0x05, 0x01, 0x23, 0x22, 
	0x02, 0x0a, 0x02, 0x32, 0x43, 0x04, 0x19, 0x71, 0x83, 0x13, 0xd6, 0x56, 0x06, 0x0c, 0x6c, 0x6c, 
	0xe9, 0xe9, 0xfa, 0xd2, 0xb6, 0x84, 0x44, 0x68, 0xc8, 0xd0, 0x90, 0xa4, 0x24, 0x24, 0x62, 0x7a, 
	0xd3, 0xf9, 0xed, 0xfc, 0xb8, 0xcc, 0xfe, 0x03, 0x00, 0x00, 0xf8, 0x90, 0xf0, 0xb3, 0xb3, 0x66, 
	0x26, 0xa6, 0xa7, 0xa4, 0x16, 0x36, 0x27, 0x06, 0x86, 0x07, 0x27, 0xa4, 0xa0, 0xb2, 0xb3, 0x82, 
	0x82, 0x12, 0x32, 0x12, 0x26, 0x26, 0x26, 0x26, 0x2e, 0x2e, 0x26, 0x06, 0x46, 0x26, 0x26, 0x27, 
	0xa6, 0xa6, 0xa6, 0x86, 0xc6, 0x66, 0x22, 0x22, 0x62, 0x62, 0x13, 0x13, 0x12, 0x90, 0x90, 0x59, 
	0xc0, 0xe0, 0x65, 0x79, 0x43, 0x00, 0x0c, 0x30, 0xa0, 0x20, 0x60, 0x20, 0x30, 0x30, 0x10, 0x50, 
	0x50, 0x48, 0x28, 0x28, 0x28, 0x08, 0x04, 0x14, 0x14, 0x14, 0x04, 0x04, 0x04, 0x84, 0x82, 0x02, 
	0x82, 0x8a, 0xca, 0xc3, 0xc1, 0x44, 0x44, 0x46, 0x43, 0x7c, 0x40, 0x3f, 0x65, 0x40, 0x4f, 0x30, 
	0x40, 0x60, 0x20, 0x20, 0x00, 0x60, 0xa0, 0xa0, 0x24, 0x34, 0x74, 0x95, 0x9d, 0x38, 0xfa, 0xf6, 
	0xe4, 0xc8, 0x19, 0x19, 0x33, 0x33, 0x77, 0xc8, 0x88, 0x90, 0xb3, 0x2f, 0x4f, 0xcf, 0x9f, 0x1e, 
	0xdc, 0x20, 0x03, 0x03, 0x00, 0x00, 0x00, 0x1f, 0x39, 0x7d, 0xff, 0xff, 0xfe, 0xff, 0xfc, 0x7c, 
	0x1f, 0x00, 0x00, 0x80, 0x80, 0x90, 0x80, 0x00, 0x4c, 0x44, 0xc0, 0x40, 0x30, 0x1c, 0x9f, 0x45, 
	0x0d, 0x01, 0x13, 0x00, 0xc4, 0x22, 0x82, 0x62, 0x11, 0x09, 0x05, 0x02, 0x83, 0x61, 0x70, 0x18, 
	0x32, 0x32, 0x32, 0x32, 0x32, 0x1b, 0x1a, 0x18, 0x18, 0x19, 0x18, 0x1d, 0x09, 0x0d, 0x0c, 0x0c, 
	0x0c, 0x0c, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x03, 0x03, 0x03, 0x03, 0x03, 0x01, 0x00, 0x03, 
	0x01, 0x01, 0x01, 0x03, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x0e, 0x1f, 0x1d, 0x05, 0x01, 0x01, 0x01, 0x00, 0x02, 0x04, 0x09, 0x01, 0x01, 0x0f, 
	0xff, 0xff, 0xff, 0xf8, 0xc0, 0x00, 0x00, 0x00, 0x01, 0x01, 0x03, 0x87, 0x88, 0x0c, 0x99, 0x99, 
	0xd2, 0xe0, 0x60, 0x70, 0x30, 0xb0, 0xd0, 0x92, 0x36, 0x6e, 0x26, 0xb2, 0xa2, 0x90, 0xdc, 0xec, 
	0xf6, 0xf2, 0xfa, 0xfb, 0xe9, 0x40, 0x5c, 0x3e, 0x3e, 0x07, 0xc3, 0x08, 0x00, 0x1e, 0x03, 0x60, 
	0x30, 0x18, 0x06, 0x03, 0x00, 0x80, 0x60, 0xd0, 0x34, 0xfc, 0xdc, 0x0c, 0xfc, 0x8c, 0x08, 0x78, 
	0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x80, 0x00, 0x00, 0x80, 0x40, 0x40, 0x40, 0x40, 0x20, 
	0x20, 0x20, 0x00, 0x10, 0x10, 0x10, 0x00, 0x00, 0x08, 0x04, 0x02, 0x03, 0x00, 0x00, 0x20, 0x40, 
	0x4f, 0x9f, 0x4f, 0x4f, 0x27, 0x26, 0x10, 0x0a, 0x06, 0x04, 0x0d, 0x01, 0x3e, 0x60, 0x86, 0x02, 
	0x93, 0xd2, 0x06, 0x87, 0x2f, 0x07, 0xa3, 0xe1, 0x40, 0x16, 0x87, 0x03, 0x23, 0x21, 0x21, 0xa4, 
	0x94, 0x90, 0x50, 0x48, 0xc4, 0x40, 0x31, 0x1c, 0x06, 0x12, 0x28, 0x4d, 0xc5, 0x85, 0x0f, 0x1b, 
	0x17, 0x2f, 0x6f, 0x6e, 0x94, 0x38, 0x73, 0x76, 0xe0, 0xe6, 0xc6, 0x86, 0x9c, 0x4d, 0x45, 0x6d
};
// 'faye ship FINAL-11', 128x32px
static const char faye_ship_11 [] PROGMEM = {
	0x00, 0x00, 0x00, 0x02, 0x80, 0x80, 0xc0, 0xc0, 0x40, 0x40, 0x40, 0x60, 0x60, 0x20, 0x20, 0x30, 
	0x10, 0x10, 0x10, 0x10, 0x18, 0x18, 0x09, 0x09, 0x0d, 0x0d, 0x05, 0x45, 0x05, 0x01, 0x03, 0x22, 
	0x02, 0x0a, 0x02, 0x32, 0x43, 0x04, 0x19, 0x61, 0xa3, 0x23, 0x56, 0x66, 0x86, 0x4c, 0x0c, 0xcc, 
	0xe9, 0xe9, 0xfa, 0xd2, 0xb6, 0x84, 0x44, 0x48, 0xc8, 0xd0, 0x90, 0xa4, 0x24, 0x24, 0x62, 0x7a, 
	0xd3, 0xf9, 0xed, 0xfc, 0xb8, 0xcc, 0xfe, 0x03, 0x00, 0x00, 0xf8, 0x90, 0xf0, 0xb3, 0xb3, 0x66, 
	0x26, 0xa6, 0xa6, 0xa6, 0x17, 0x36, 0x26, 0x06, 0x86, 0x07, 0x27, 0xac, 0xa0, 0xb2, 0xb3, 0x82, 
	0x82, 0x12, 0x32, 0x12, 0x26, 0x26, 0x26, 0x26, 0x2e, 0x2e, 0x26, 0x0e, 0x46, 0x26, 0x26, 0x27, 
	0xa6, 0xa6, 0xa6, 0x86, 0xc6, 0x66, 0x22, 0x23, 0x62, 0x62, 0x13, 0x13, 0x12, 0x90, 0x90, 0x59, 
	0xc0, 0xe0, 0x65, 0x79, 0x43, 0x00, 0x0c, 0x30, 0xe0, 0x20, 0x40, 0x20, 0x30, 0x32, 0x10, 0x50, 
	0x50, 0x58, 0x28, 0x28, 0x28, 0x08, 0x0c, 0x04, 0x14, 0x14, 0x04, 0x04, 0x04, 0x84, 0x86, 0x02, 
	0x82, 0x82, 0xca, 0xc3, 0xc1, 0x44, 0x64, 0x7c, 0x63, 0x38, 0x4c, 0x4f, 0x61, 0x5c, 0x43, 0x60, 
	0x60, 0x60, 0x20, 0x20, 0x00, 0x60, 0x20, 0xa0, 0x24, 0x34, 0x74, 0x95, 0x9d, 0x38, 0xfa, 0xf6, 
	0xe4, 0xc8, 0x19, 0x19, 0x33, 0x33, 0x77, 0xc8, 0x88, 0x90, 0xb3, 0x2f, 0x4f, 0xcd, 0x9f, 0x1f, 
	0x9c, 0x20, 0x03, 0x03, 0x00, 0x00, 0x00, 0x1b, 0x39, 0x7d, 0xff, 0xff, 0xfe, 0xff, 0xfc, 0x7c, 
	0x1f, 0x00, 0x00, 0x80, 0x80, 0x90, 0x80, 0x00, 0x4c, 0x44, 0xc0, 0x40, 0x30, 0x1c, 0x9f, 0x45, 
	0x0d, 0x81, 0x13, 0x00, 0xc4, 0x22, 0x82, 0x62, 0x11, 0x09, 0x05, 0x03, 0x83, 0x41, 0x70, 0x18, 
	0x32, 0x32, 0x32, 0x32, 0x32, 0x3b, 0x1a, 0x18, 0x18, 0x19, 0x18, 0x1d, 0x09, 0x0d, 0x0c, 0x0c, 
	0x0c, 0x0c, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x03, 0x03, 0x03, 0x03, 0x03, 0x01, 0x00, 0x03, 
	0x01, 0x01, 0x01, 0x03, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x0e, 0x1f, 0x1d, 0x05, 0x01, 0x01, 0x01, 0x00, 0x02, 0x04, 0x09, 0x01, 0x01, 0x0f, 
	0xff, 0xff, 0xff, 0xf8, 0xc0, 0x00, 0x00, 0x00, 0x01, 0x01, 0x03, 0x87, 0x88, 0x0c, 0x99, 0x99, 
	0xd2, 0xe4, 0x60, 0x70, 0x30, 0xb0, 0xd0, 0x92, 0x36, 0xee, 0x26, 0xb2, 0xa2, 0x90, 0x9c, 0xec, 
	0xf6, 0xf2, 0xfa, 0xfb, 0xf9, 0x40, 0x5c, 0x3e, 0x3e, 0x07, 0xc3, 0x00, 0x00, 0x1e, 0x03, 0x60, 
	0x30, 0x18, 0x06, 0x03, 0x00, 0x80, 0x60, 0xd0, 0x34, 0xfc, 0xdc, 0x0c, 0xfc, 0x8c, 0x08, 0x78, 
	0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x80, 0x80, 0x00, 0x80, 0x80, 0x00, 0x00, 0x80, 0x00, 0x00, 0x80, 0x40, 0x40, 0x40, 0x40, 0x20, 
	0x20, 0x20, 0x20, 0x10, 0x10, 0x10, 0x00, 0x00, 0x08, 0x04, 0x02, 0x03, 0x00, 0x00, 0x20, 0x40, 
	0x4f, 0x9f, 0x4f, 0x4f, 0x27, 0x26, 0x10, 0x0a, 0x06, 0x04, 0x0d, 0x01, 0x3e, 0x60, 0x86, 0x02, 
	0x93, 0x92, 0x06, 0x87, 0x2f, 0x07, 0xa3, 0xe1, 0x40, 0x16, 0x87, 0x03, 0x23, 0x29, 0x21, 0x25, 
	0x94, 0x90, 0x10, 0x48, 0xc4, 0x40, 0x31, 0x18, 0x06, 0x12, 0x38, 0x49, 0xc5, 0x85, 0x0f, 0x1b, 
	0x17, 0x2f, 0x6f, 0x6e, 0x94, 0x38, 0x72, 0x76, 0xe0, 0xe6, 0xc6, 0x86, 0x9c, 0x4d, 0x45, 0x6d
};

// Array of all bitmaps for convenience. (Total bytes used to store images in PROGMEM = 6336)
static const char* tap[TAP_FRAMES_FAYE_SHIP] = {
	faye_ship_11,
	faye_ship_10,
	faye_ship_9,
	faye_ship_8,
	faye_ship_7,
	faye_ship_6,
	faye_ship_5,
	faye_ship_4,
	faye_ship_3,
	faye_ship_2,
	faye_ship_1,
	faye_ship_0
};

    render_animation(tap, TAP_FRAMES_FAYE_SHIP);
    return false;
}
#endif