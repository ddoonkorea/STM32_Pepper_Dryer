#ifndef _OJTUBE_LOG_H_
#define _OJTUBE_LOG_H_

const unsigned char ojtubelog1 []  = {
	// '아이콘2, 128x64px
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0x8f,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0xff, 0xff, 0xf8, 0x79, 0xff, 0xff, 0x8f,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x7f, 0xff, 0xf8, 0x20, 0x01, 0xff, 0xff, 0x8f,
	0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x27, 0xff, 0xc7,
	0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x03, 0xff, 0xc7,
	0xff, 0xff, 0xfe, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xfe, 0x40, 0x00, 0x00, 0x00, 0xff, 0xc7,
	0xff, 0xff, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0xff, 0xc7,
	0xff, 0x80, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0xff, 0xc7,
	0xe0, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0xff, 0xc7,
	0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x07, 0xff, 0x00, 0x01, 0xff, 0xc7,
	0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x3f, 0xff, 0xe0, 0x01, 0xff, 0xe3,
	0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0xff, 0xff, 0xfc, 0x01, 0xff, 0xe3,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc3, 0xff, 0xff, 0xff, 0x03, 0xff, 0xe3,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe7, 0xff, 0xff, 0xff, 0xc3, 0xff, 0xe3,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xcf, 0xff, 0xff, 0xff, 0xe3, 0xff, 0xe3,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x8f, 0xff, 0xff, 0xff, 0xe3, 0xff, 0xe3,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x1f, 0xff, 0xff, 0xff, 0xf3, 0xff, 0xe3,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x3f, 0xff, 0xff, 0xff, 0xfb, 0xff, 0xf1,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x3f, 0xff, 0xff, 0xff, 0xfb, 0xff, 0xf1,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x3f, 0x1f, 0xff, 0x3f, 0xfb, 0xff, 0xf1,
	0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x3f, 0x0f, 0xff, 0x0f, 0xf8, 0xff, 0xf1,
	0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x3f, 0xff, 0xff, 0xff, 0xf8, 0x7f, 0xf1,
	0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0xff, 0x3f, 0xff, 0xf8, 0x7f, 0xf1,
	0x7f, 0xff, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0xfe, 0x3f, 0xff, 0xf8, 0xff, 0xf0,
	0x7f, 0xff, 0xfc, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x1f, 0x9e, 0x7e, 0x3f, 0xfb, 0xff, 0xf8,
	0x7f, 0xe3, 0xfe, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x1f, 0x9e, 0x7e, 0x3f, 0xff, 0xff, 0xf8,
	0x3e, 0x11, 0xfe, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x9f, 0xfc, 0x3f, 0xff, 0xff, 0xff, 0xf8,
	0x3c, 0x7c, 0xfe, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x9f, 0xf1, 0x87, 0xc3, 0xff, 0xff, 0xf8,
	0x3c, 0xfc, 0x7e, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x7f, 0xe7, 0xc1, 0xf7, 0xff, 0xf8,
	0x38, 0xfe, 0x7e, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xf7, 0xff, 0xf8,
	0x39, 0xfe, 0x7e, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc7, 0xff, 0xff, 0xff, 0xf7, 0xff, 0xf8,
	0x39, 0xfe, 0x7e, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe7, 0xff, 0xff, 0xff, 0xef, 0xff, 0xfc,
	0x3c, 0xfe, 0x7f, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xff, 0xff, 0xff, 0xef, 0xff, 0xfc,
	0x1c, 0xfe, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xff, 0xff, 0xff, 0xcf, 0xff, 0xfc,
	0x1c, 0xfe, 0x70, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xcf, 0xff, 0xfc,
	0x1e, 0x70, 0xe0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xff, 0xff, 0xff, 0x8f, 0xfe, 0xfc,
	0x1f, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xfe, 0x28, 0x00, 0x04,
	0x1f, 0xcf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x1f, 0xff, 0xfc, 0x7f, 0x07, 0xe0,
	0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0f, 0xff, 0xf1, 0xff, 0xff, 0xf8,
	0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0xe3, 0xff, 0x83, 0xff, 0xff, 0xf0,
	0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x7f, 0xfc, 0x1f, 0xf8, 0x00, 0x3f, 0xff, 0xf8, 0x06,
	0x8f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc2, 0x1f, 0xe0, 0xff, 0xff, 0x07, 0xff, 0xff, 0x83, 0xfe,
	0x8f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x9f, 0xc7, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x1f, 0xfe,
	0x8f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0xf1, 0xff, 0xff, 0xf7, 0xff, 0xff, 0xf1, 0xff, 0xfe,
	0x8f, 0xff, 0xff, 0xfe, 0x7f, 0xff, 0x3f, 0xf9, 0xff, 0xf0, 0x01, 0xff, 0xff, 0xe7, 0xff, 0xff,
	0x8f, 0xff, 0xff, 0xff, 0x7f, 0xfe, 0x3f, 0xf3, 0xff, 0xc7, 0xfc, 0xff, 0xff, 0xcf, 0xff, 0xff,
	0x8f, 0xff, 0xff, 0xff, 0x07, 0xfc, 0x9f, 0xf1, 0xf0, 0x1f, 0xfe, 0x7f, 0xff, 0x9f, 0xff, 0xff,
	0xc7, 0xf8, 0x7f, 0xff, 0x00, 0xf3, 0xcf, 0xf0, 0x01, 0xff, 0xfe, 0x7f, 0xff, 0x9f, 0xff, 0xff,
	0xc7, 0x03, 0xff, 0xcf, 0x1c, 0xf3, 0x07, 0xe6, 0x1f, 0xff, 0xfe, 0x7f, 0xff, 0x3f, 0xff, 0xff,
	0xc7, 0xe7, 0xf3, 0xcf, 0x3e, 0x70, 0x07, 0x8f, 0x9f, 0xff, 0xfe, 0x7f, 0xff, 0x3f, 0xff, 0xff,
	0xc7, 0xe7, 0xf3, 0xcf, 0x3e, 0x70, 0xe0, 0x1f, 0xdf, 0xff, 0xfe, 0xff, 0xff, 0x3f, 0xff, 0xff,
	0xc7, 0xe7, 0xf3, 0xcf, 0x3f, 0x73, 0xf9, 0xff, 0xcf, 0xff, 0xfc, 0xff, 0xff, 0x0e, 0x00, 0xff,
	0xc7, 0xe7, 0xf3, 0xef, 0xbf, 0xf3, 0x07, 0xff, 0xe7, 0xf3, 0xfd, 0xff, 0xff, 0xc1, 0xf0, 0xf8,
	0xc7, 0xf3, 0xfb, 0xef, 0x80, 0x78, 0x07, 0xff, 0xf3, 0xc7, 0xf1, 0xf8, 0x0f, 0xff, 0xe0, 0x00,
	0xe3, 0xf3, 0xf9, 0xc7, 0x80, 0xfc, 0xff, 0xff, 0xf8, 0x1f, 0xe1, 0xc0, 0x01, 0xfe, 0x00, 0x00,
	0xe3, 0xf3, 0xf8, 0x07, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc3, 0x0f, 0xf8, 0x00, 0x00, 0x07,
	0xe3, 0xf3, 0xfc, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x18, 0x3f, 0xc0, 0x00, 0x01, 0xff,
	0xe3, 0xf3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x30, 0x60, 0x00, 0x00, 0xff, 0xff,
	0xe3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x40, 0x00, 0x00, 0x7f, 0xff, 0xff,
	0xe3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff,
	0xe3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff,
	0xf1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xf1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xf1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,

};

const unsigned char ojtubelog2 [] = {
	// '아이콘1, 128x64px
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8,
	0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8,
	0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8,
	0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x02, 0x07, 0xff, 0xff, 0xf8,
	0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x1f, 0xff, 0xf8,
	0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xcc, 0x08, 0x00, 0x3f, 0xff, 0xf8,
	0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x03, 0xff, 0xf8,
	0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x0c, 0x7f, 0xf8,
	0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xf8,
	0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xf8,
	0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x07, 0xfe, 0x00, 0x00, 0x1f, 0xf8,
	0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x3f, 0xff, 0xe0, 0x00, 0x1f, 0xf8,
	0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0xff, 0xff, 0xf8, 0x00, 0x1f, 0xf8,
	0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xff, 0xff, 0xfc, 0x00, 0x3f, 0xf8,
	0x1f, 0xff, 0xff, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x03, 0xff, 0xff, 0xff, 0x80, 0x3f, 0xf8,
	0x1f, 0x01, 0xff, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x07, 0xff, 0xff, 0xff, 0xe0, 0x7f, 0xf8,
	0x1e, 0x3c, 0xff, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x7f, 0xff, 0xff, 0xff, 0xf0, 0x7f, 0xf8,
	0x1e, 0x7e, 0x7f, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x0f, 0xff, 0xff, 0xff, 0xf8, 0xff, 0xf8,
	0x1c, 0x7e, 0x7f, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x0f, 0xff, 0xff, 0xff, 0xf8, 0xff, 0xf8,
	0x1c, 0xff, 0x3f, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x0f, 0x87, 0xff, 0xff, 0xfc, 0xff, 0xf8,
	0x1c, 0xff, 0x3f, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x9f, 0xe7, 0xff, 0xff, 0xfc, 0xff, 0xf8,
	0x1c, 0xff, 0x3f, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x9f, 0xff, 0xff, 0x9f, 0xfe, 0xff, 0xf8,
	0x1c, 0xff, 0x3f, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x9f, 0xff, 0xff, 0xc7, 0xfe, 0xff, 0xf8,
	0x1e, 0xff, 0x7f, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x8f, 0xff, 0x1f, 0xff, 0xfc, 0xff, 0xf8,
	0x1e, 0x7e, 0x7f, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x8f, 0x8f, 0x1f, 0xff, 0xfc, 0x7f, 0xf8,
	0x1f, 0x00, 0xe0, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x9f, 0x8f, 0x3f, 0xff, 0xfc, 0x3f, 0xf8,
	0x1f, 0xc3, 0xe0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x9f, 0xfe, 0x3f, 0x3f, 0xfd, 0x3f, 0xf8,
	0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x70, 0x1f, 0x3f, 0xfc, 0x7f, 0xf8,
	0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x3f, 0xc7, 0xff, 0xff, 0xff, 0xf8,
	0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xef, 0xff, 0xe3, 0xc7, 0xfb, 0xff, 0xf8,
	0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe7, 0xff, 0xff, 0xc1, 0xfb, 0xff, 0xf8,
	0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xff, 0xff, 0xf9, 0xf7, 0xff, 0xf8,
	0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xff, 0xff, 0xff, 0xf7, 0xff, 0xf8,
	0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xff, 0xff, 0xff, 0xe7, 0xff, 0xf8,
	0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0xff, 0xff, 0xff, 0xef, 0xff, 0xf8,
	0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xcf, 0xff, 0xff, 0xfd, 0xff, 0xff, 0xff, 0xcf, 0xff, 0xf8,
	0x1f, 0xff, 0xff, 0xfc, 0xff, 0xff, 0x00, 0xff, 0xff, 0xfc, 0x7f, 0xff, 0xff, 0x8f, 0xff, 0xf8,
	0x1c, 0x01, 0xff, 0xfc, 0xff, 0xfe, 0x3c, 0x3f, 0xff, 0xfe, 0x3f, 0xff, 0xff, 0x9f, 0xff, 0xf8,
	0x1f, 0x9f, 0xff, 0xfc, 0xff, 0xfe, 0xff, 0x9f, 0xc0, 0x01, 0x9f, 0xff, 0xfe, 0x1f, 0xff, 0xf8,
	0x1f, 0x9f, 0xcf, 0x3c, 0x0f, 0xfc, 0xff, 0xcc, 0x01, 0xff, 0xef, 0xff, 0xf8, 0x41, 0xff, 0xf8,
	0x1f, 0x9f, 0xcf, 0x3c, 0x07, 0xf0, 0xff, 0xe3, 0xff, 0xff, 0xf1, 0xff, 0xc1, 0xf8, 0x01, 0xf8,
	0x1f, 0x9f, 0xcf, 0x3c, 0xf3, 0xc6, 0x7f, 0xe7, 0xff, 0xff, 0xfc, 0x00, 0x07, 0xfe, 0x00, 0x38,
	0x1f, 0x9f, 0xcf, 0x3c, 0xf9, 0xcf, 0x3f, 0xcf, 0xff, 0xff, 0xff, 0x0f, 0xff, 0xff, 0xff, 0x88,
	0x1f, 0x9f, 0xcf, 0x3c, 0xf9, 0x80, 0x3f, 0xc7, 0xff, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xe0,
	0x1f, 0x9f, 0xcf, 0x3c, 0xf9, 0x80, 0x3f, 0x80, 0x00, 0x3f, 0xc7, 0xff, 0xff, 0xff, 0xff, 0xe8,
	0x1f, 0x9f, 0xcf, 0x3d, 0xff, 0x9f, 0x8e, 0x38, 0xff, 0xff, 0xf3, 0xff, 0xff, 0xfe, 0x00, 0x00,
	0x1f, 0x9f, 0xc0, 0x3c, 0x03, 0xdf, 0xc0, 0xfc, 0xff, 0xff, 0xf3, 0xff, 0xff, 0xc0, 0x3e, 0x78,
	0x1f, 0x9f, 0xf0, 0x3c, 0x07, 0xc0, 0x3f, 0xfe, 0xff, 0xff, 0xf9, 0xff, 0xff, 0x0f, 0xff, 0xf8,
	0x1f, 0xff, 0xff, 0xff, 0xff, 0xe4, 0x3f, 0xfe, 0x7f, 0xff, 0xf9, 0xff, 0xfe, 0x3f, 0xff, 0xf8,
	0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xff, 0xf3, 0xff, 0xfc, 0x7f, 0xff, 0xf8,
	0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0xff, 0xf3, 0xff, 0xfc, 0xff, 0xff, 0xf8,
	0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x8e, 0x1f, 0xe7, 0xff, 0xf8, 0xff, 0xff, 0xf8,
	0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x7f, 0xaf, 0xff, 0xf9, 0xff, 0xff, 0xf8,
	0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0f, 0xff, 0xf9, 0xff, 0xff, 0xf8,
	0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x1f, 0x1f, 0xf8, 0xff, 0xff, 0xf8,
	0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xd0, 0x00, 0x7e, 0x00, 0x1f, 0xf8,
	0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0x81, 0xfc, 0x1f, 0xff, 0xcf, 0xf8,
	0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe7, 0x0f, 0xff, 0x87, 0xff, 0x07, 0xf8,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

const unsigned char ojtubelog3 [] = {

	// '아이콘3, 128x64px
	0xfe, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x3f, 0xff, 0xff,
	0xfc, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x01, 0xff, 0xff,
	0xfc, 0x7c, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x0f, 0xff,
	0xfc, 0x78, 0xf3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x7f,
	0xfc, 0x71, 0xfb, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x03,
	0xfc, 0x73, 0xf9, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xec, 0x07, 0xff, 0xf0, 0x00,
	0xf8, 0xf3, 0xf9, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x08, 0x05, 0xff, 0xff, 0x80,
	0xf8, 0xf7, 0xf9, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x0f, 0xff, 0xfc,
	0xf8, 0xe7, 0xf9, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x07, 0xff, 0xff,
	0xf8, 0xf7, 0xf9, 0xf9, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x3f, 0xff,
	0xf8, 0xf3, 0xf9, 0xf9, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x7f, 0xff,
	0xf0, 0xf3, 0xf3, 0xf9, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x0c, 0x00, 0x00, 0x3f, 0xff,
	0xf1, 0xf8, 0x03, 0xf9, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc3, 0xff, 0xe0, 0x00, 0x0f, 0xff,
	0xf1, 0xfc, 0x0f, 0xf9, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x0f, 0xff, 0xf8, 0x00, 0x01, 0xff,
	0xf1, 0xff, 0xff, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x1f, 0xff, 0xfe, 0x00, 0x01, 0xff,
	0xf1, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe3, 0xff, 0xff, 0xff, 0x80, 0x00, 0xff,
	0xf1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x7f, 0xff, 0xff, 0xc0, 0x00, 0x3f,
	0xe3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x7f, 0xff, 0xff, 0xe0, 0x00, 0x7f,
	0xe3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0xff, 0xff, 0xff, 0xf8, 0x00, 0xff,
	0xe3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xff, 0xff, 0xff, 0xfc, 0x00, 0xff,
	0xe3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0xfc, 0x7f, 0xff, 0xfe, 0x01, 0xff,
	0xe3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0xfe, 0x7f, 0xff, 0xff, 0x03, 0xff,
	0xc7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0xff, 0xff, 0xff, 0xff, 0x87, 0xff,
	0xc7, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0xff, 0xff, 0xff, 0xff, 0x87, 0xff,
	0xc7, 0xe0, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0xfb, 0xff, 0xff, 0xff, 0x8f, 0xff,
	0xc7, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0xf9, 0xf1, 0xf9, 0xff, 0xcf, 0xff,
	0xc7, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x7d, 0xf3, 0xfc, 0x7f, 0xcf, 0xff,
	0x87, 0xe7, 0xf7, 0xff, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x0f, 0xe7, 0xff, 0xff, 0xdf, 0xff,
	0x8f, 0xc7, 0xe7, 0xff, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x0e, 0x07, 0xff, 0xff, 0xdf, 0xff,
	0x8f, 0xcf, 0xe7, 0xdf, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xff, 0xe3, 0xe7, 0xff, 0xdf, 0xff,
	0x8f, 0xcf, 0xe7, 0x9f, 0x0f, 0xff, 0xc1, 0xff, 0xff, 0xfc, 0xff, 0xf1, 0xe7, 0xff, 0x8f, 0xff,
	0x8f, 0xcf, 0xe7, 0x9f, 0x03, 0xff, 0x88, 0x7f, 0xff, 0xfc, 0xff, 0xfc, 0xff, 0xff, 0x87, 0xff,
	0x0f, 0xcf, 0xe7, 0x9e, 0x79, 0xff, 0x3f, 0x3f, 0xff, 0xfe, 0xff, 0xff, 0xff, 0xff, 0x87, 0xff,
	0x1f, 0xcf, 0xe7, 0x9e, 0x79, 0xf8, 0x7f, 0x9f, 0xff, 0xfe, 0xff, 0xff, 0xf1, 0xff, 0x0f, 0xff,
	0x1f, 0xff, 0xe7, 0xbe, 0xfc, 0xe2, 0x3f, 0xcf, 0xff, 0xfe, 0x7f, 0xff, 0xf0, 0x7f, 0xff, 0xff,
	0x1f, 0xff, 0xe0, 0x3e, 0xfc, 0xc7, 0x3f, 0xe7, 0xff, 0xff, 0x7f, 0xff, 0xfe, 0x7e, 0xff, 0xfe,
	0x1f, 0xff, 0xf8, 0x3c, 0xfd, 0xc1, 0x9f, 0xf3, 0x00, 0x7f, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xfe,
	0x1f, 0xff, 0xff, 0xfc, 0x07, 0xc0, 0x1f, 0xe3, 0xf8, 0x03, 0x1f, 0xff, 0xff, 0xfd, 0xff, 0xfe,
	0x3f, 0xff, 0xff, 0xfe, 0x03, 0x9c, 0x1f, 0xc7, 0xff, 0xff, 0xcf, 0xff, 0xff, 0xfb, 0xff, 0xfe,
	0x3f, 0xff, 0xff, 0xff, 0xf7, 0xdf, 0x9f, 0xc7, 0xff, 0xff, 0xef, 0xff, 0xff, 0xf7, 0xff, 0xfe,
	0x3f, 0xff, 0xff, 0xff, 0xff, 0xc3, 0xc6, 0x03, 0xff, 0xff, 0xf7, 0xff, 0xff, 0xe7, 0xff, 0xfc,
	0x3f, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x20, 0x38, 0x0f, 0xff, 0xf9, 0xff, 0xff, 0xc7, 0xff, 0xfc,
	0x3f, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x3f, 0xfc, 0x80, 0x07, 0xfc, 0xff, 0xff, 0x8f, 0xff, 0xfc,
	0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xff, 0xfc, 0x3f, 0x07, 0xf8, 0x1f, 0xff, 0xfc,
	0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xff, 0xff, 0x9f, 0xc0, 0x00, 0x47, 0xff, 0xfc,
	0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xff, 0xff, 0xe7, 0xff, 0xc7, 0xf9, 0xff, 0xfc,
	0xc0, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xf7, 0xff, 0xff, 0xfc, 0x7f, 0xf8,
	0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 0xf7, 0xff, 0xff, 0xfe, 0x03, 0xf8,
	0xff, 0xf8, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0x3f, 0xff, 0xf3, 0xff, 0xff, 0xff, 0x80, 0xf8,
	0xff, 0xff, 0xc0, 0x00, 0x3f, 0xff, 0xff, 0xff, 0x9c, 0x7f, 0xe3, 0xff, 0xff, 0xff, 0xfe, 0x38,
	0xff, 0xff, 0xfe, 0x00, 0x01, 0xff, 0xff, 0xff, 0xc0, 0x3f, 0xe7, 0xff, 0xff, 0xff, 0xff, 0x98,
	0xff, 0xff, 0xff, 0xf0, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xcf, 0xff, 0xff, 0x80, 0xff, 0xc1,
	0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x7f, 0xff, 0xff, 0xfe, 0x9f, 0xff, 0xfe, 0x10, 0x01, 0xd1,
	0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x01, 0xff, 0xff, 0xfc, 0x3f, 0xff, 0xf8, 0x7f, 0xf8, 0x01,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x0f, 0xff, 0xe0, 0x7f, 0xff, 0xf1, 0xff, 0xff, 0xf1,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x7f, 0x87, 0x7f, 0xff, 0xe3, 0xff, 0xff, 0xf1,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x03, 0x1e, 0x00, 0x7f, 0xe7, 0xff, 0xff, 0xe1,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x1f, 0xe7, 0xff, 0xff, 0xe3,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x3f, 0xc3, 0xe7, 0xff, 0xff, 0xe3,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x03, 0xf0, 0xf1, 0xff, 0xff, 0xe3,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x1c, 0x7c, 0x1f, 0xff, 0xe3,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x3f, 0xe0, 0xff, 0xc3,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x07, 0xf8, 0x7f, 0xc7,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x7f, 0xc7
};

#endif
