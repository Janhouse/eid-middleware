#ifndef LV_PNG_H
#define LV_PNG_H

#include <wx/mstream.h>
#include <wx/image.h>
#include <wx/bitmap.h>

static const unsigned char lv_png[] = 
{
	0x89, 0x50, 0x4E, 0x47, 0x0D, 0x0A, 0x1A, 0x0A, 0x00, 0x00, 
	0x00, 0x0D, 0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x10, 
	0x00, 0x00, 0x00, 0x10, 0x08, 0x06, 0x00, 0x00, 0x00, 0x1F, 
	0xF3, 0xFF, 0x61, 0x00, 0x00, 0x00, 0x04, 0x67, 0x41, 0x4D, 
	0x41, 0x00, 0x00, 0xAF, 0xC8, 0x37, 0x05, 0x8A, 0xE9, 0x00, 
	0x00, 0x00, 0x06, 0x62, 0x4B, 0x47, 0x44, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0xF9, 0x43, 0xBB, 0x7F, 0x00, 0x00, 0x00, 
	0x09, 0x70, 0x48, 0x59, 0x73, 0x00, 0x00, 0x00, 0x48, 0x00, 
	0x00, 0x00, 0x48, 0x00, 0x46, 0xC9, 0x6B, 0x3E, 0x00, 0x00, 
	0x00, 0x09, 0x76, 0x70, 0x41, 0x67, 0x00, 0x00, 0x00, 0x10, 
	0x00, 0x00, 0x00, 0x11, 0x00, 0x45, 0xDD, 0x9C, 0x82, 0x00, 
	0x00, 0x01, 0x3E, 0x49, 0x44, 0x41, 0x54, 0x38, 0xCB, 0xD5, 
	0x93, 0x3D, 0x4A, 0xC3, 0x41, 0x10, 0xC5, 0x7F, 0x1B, 0x96, 
	0x04, 0x54, 0xB0, 0x0E, 0x24, 0x16, 0xDE, 0xC5, 0xC6, 0xA3, 
	0xD8, 0x8B, 0x45, 0x0E, 0x60, 0x6D, 0xE9, 0x35, 0xBC, 0x84, 
	0xA4, 0xC9, 0x15, 0x14, 0xD1, 0x42, 0xB0, 0x50, 0x51, 0x08, 
	0xF3, 0x69, 0xB1, 0x9B, 0xF8, 0x27, 0x88, 0xAD, 0xB8, 0x30, 
	0xBC, 0xD9, 0x8F, 0x79, 0x33, 0x3B, 0xFB, 0x16, 0xFE, 0xFD, 
	0x28, 0x57, 0x90, 0xEB, 0xC1, 0x42, 0x00, 0x36, 0xC0, 0x5D, 
	0x93, 0x01, 0x8E, 0x80, 0xFA, 0x01, 0x9C, 0x2C, 0x16, 0x00, 
	0x64, 0x44, 0x33, 0x77, 0xC2, 0x9C, 0x70, 0x23, 0xCD, 0x08, 
	0x33, 0x42, 0x15, 0xEF, 0x18, 0x66, 0xB8, 0x2A, 0xD7, 0x37, 
	0x37, 0xD4, 0xDA, 0x42, 0xF9, 0x7C, 0x7C, 0x6A, 0x81, 0xEE, 
	0xED, 0x50, 0x47, 0x57, 0x6D, 0x28, 0x8A, 0xAB, 0x10, 0x22, 
	0xB8, 0x2A, 0xFB, 0xF3, 0x39, 0x01, 0xD4, 0x35, 0x60, 0x91, 
	0xE8, 0x6E, 0xB0, 0x48, 0xCB, 0xD8, 0x03, 0x5D, 0xA5, 0x91, 
	0x74, 0x82, 0xB1, 0x2A, 0xEF, 0x40, 0x79, 0x5E, 0x2E, 0xF3, 
	0xE0, 0xE8, 0x08, 0x17, 0x21, 0x33, 0x21, 0x82, 0x04, 0x62, 
	0x73, 0x9D, 0xCC, 0x6F, 0x3F, 0x82, 0xC8, 0x24, 0x23, 0xA8, 
	0xE3, 0x31, 0xF7, 0xB7, 0xB7, 0x14, 0x77, 0xCF, 0x52, 0x0A, 
	0x99, 0xD9, 0x08, 0x60, 0xEB, 0xFF, 0x66, 0x65, 0x34, 0xE2, 
	0xED, 0xF5, 0x95, 0xFA, 0xB2, 0x5A, 0xB1, 0x3F, 0x9B, 0xE1, 
	0x22, 0xD0, 0xD9, 0x37, 0x59, 0xB6, 0x15, 0x0C, 0xE6, 0x9B, 
	0x6A, 0xEA, 0x64, 0xC2, 0xC3, 0x72, 0x49, 0xB9, 0x80, 0x3C, 
	0x3D, 0x3B, 0xE3, 0xED, 0xEE, 0xAE, 0x75, 0x57, 0xA4, 0x37, 
	0xAD, 0xDD, 0xD5, 0x87, 0x7E, 0xDF, 0x0B, 0x33, 0x0E, 0x8F, 
	0x8F, 0xB9, 0x5C, 0xAD, 0xA8, 0x01, 0x84, 0x19, 0xD9, 0xBB, 
	0x1D, 0xAA, 0x84, 0xB4, 0x6E, 0x87, 0x2A, 0x29, 0x42, 0xAA, 
	0x36, 0x13, 0x21, 0x4D, 0x49, 0x73, 0xD2, 0x1D, 0x80, 0x2A, 
	0x40, 0xAA, 0xB1, 0x37, 0x9D, 0x76, 0x76, 0xC7, 0x6D, 0x40, 
	0x36, 0xD0, 0x40, 0x9A, 0xE1, 0xEE, 0xDB, 0xE7, 0x36, 0xA0, 
	0x9C, 0x43, 0xBE, 0x0F, 0xD4, 0x25, 0x3B, 0x6A, 0x93, 0x1F, 
	0x54, 0xB8, 0x51, 0xE9, 0xC1, 0x5F, 0xFF, 0x23, 0x00, 0xBE, 
	0x00, 0x6B, 0xDC, 0x86, 0x44, 0xC2, 0x52, 0x02, 0x6D, 0x00, 
	0x00, 0x00, 0x25, 0x74, 0x45, 0x58, 0x74, 0x63, 0x72, 0x65, 
	0x61, 0x74, 0x65, 0x2D, 0x64, 0x61, 0x74, 0x65, 0x00, 0x32, 
	0x30, 0x30, 0x39, 0x2D, 0x31, 0x32, 0x2D, 0x30, 0x31, 0x54, 
	0x31, 0x38, 0x3A, 0x33, 0x36, 0x3A, 0x34, 0x39, 0x2D, 0x30, 
	0x37, 0x3A, 0x30, 0x30, 0x9A, 0x4D, 0xF4, 0xE8, 0x00, 0x00, 
	0x00, 0x25, 0x74, 0x45, 0x58, 0x74, 0x64, 0x61, 0x74, 0x65, 
	0x3A, 0x63, 0x72, 0x65, 0x61, 0x74, 0x65, 0x00, 0x32, 0x30, 
	0x31, 0x30, 0x2D, 0x30, 0x31, 0x2D, 0x31, 0x31, 0x54, 0x30, 
	0x36, 0x3A, 0x35, 0x31, 0x3A, 0x33, 0x30, 0x2D, 0x30, 0x37, 
	0x3A, 0x30, 0x30, 0x7F, 0x24, 0x41, 0xA3, 0x00, 0x00, 0x00, 
	0x25, 0x74, 0x45, 0x58, 0x74, 0x64, 0x61, 0x74, 0x65, 0x3A, 
	0x6D, 0x6F, 0x64, 0x69, 0x66, 0x79, 0x00, 0x32, 0x30, 0x31, 
	0x30, 0x2D, 0x30, 0x31, 0x2D, 0x31, 0x31, 0x54, 0x30, 0x36, 
	0x3A, 0x35, 0x31, 0x3A, 0x33, 0x30, 0x2D, 0x30, 0x37, 0x3A, 
	0x30, 0x30, 0x0E, 0x79, 0xF9, 0x1F, 0x00, 0x00, 0x00, 0x32, 
	0x74, 0x45, 0x58, 0x74, 0x4C, 0x69, 0x63, 0x65, 0x6E, 0x73, 
	0x65, 0x00, 0x68, 0x74, 0x74, 0x70, 0x3A, 0x2F, 0x2F, 0x65, 
	0x6E, 0x2E, 0x77, 0x69, 0x6B, 0x69, 0x70, 0x65, 0x64, 0x69, 
	0x61, 0x2E, 0x6F, 0x72, 0x67, 0x2F, 0x77, 0x69, 0x6B, 0x69, 
	0x2F, 0x50, 0x75, 0x62, 0x6C, 0x69, 0x63, 0x5F, 0x64, 0x6F, 
	0x6D, 0x61, 0x69, 0x6E, 0x3F, 0xFD, 0xEA, 0xCF, 0x00, 0x00, 
	0x00, 0x25, 0x74, 0x45, 0x58, 0x74, 0x6D, 0x6F, 0x64, 0x69, 
	0x66, 0x79, 0x2D, 0x64, 0x61, 0x74, 0x65, 0x00, 0x32, 0x30, 
	0x30, 0x39, 0x2D, 0x31, 0x32, 0x2D, 0x30, 0x31, 0x54, 0x31, 
	0x38, 0x3A, 0x33, 0x36, 0x3A, 0x34, 0x39, 0x2D, 0x30, 0x37, 
	0x3A, 0x30, 0x30, 0xC5, 0xFC, 0x82, 0xDC, 0x00, 0x00, 0x00, 
	0x19, 0x74, 0x45, 0x58, 0x74, 0x53, 0x6F, 0x66, 0x74, 0x77, 
	0x61, 0x72, 0x65, 0x00, 0x41, 0x64, 0x6F, 0x62, 0x65, 0x20, 
	0x49, 0x6D, 0x61, 0x67, 0x65, 0x52, 0x65, 0x61, 0x64, 0x79, 
	0x71, 0xC9, 0x65, 0x3C, 0x00, 0x00, 0x00, 0x1B, 0x74, 0x45, 
	0x58, 0x74, 0x53, 0x6F, 0x75, 0x72, 0x63, 0x65, 0x00, 0x46, 
	0x41, 0x4D, 0x46, 0x41, 0x4D, 0x46, 0x41, 0x4D, 0x20, 0x46, 
	0x6C, 0x61, 0x67, 0x20, 0x49, 0x63, 0x6F, 0x6E, 0x73, 0x55, 
	0xCF, 0x14, 0xBD, 0x00, 0x00, 0x00, 0x34, 0x74, 0x45, 0x58, 
	0x74, 0x53, 0x6F, 0x75, 0x72, 0x63, 0x65, 0x5F, 0x55, 0x52, 
	0x4C, 0x00, 0x68, 0x74, 0x74, 0x70, 0x3A, 0x2F, 0x2F, 0x77, 
	0x77, 0x77, 0x2E, 0x66, 0x61, 0x6D, 0x66, 0x61, 0x6D, 0x66, 
	0x61, 0x6D, 0x2E, 0x63, 0x6F, 0x6D, 0x2F, 0x6C, 0x61, 0x62, 
	0x2F, 0x69, 0x63, 0x6F, 0x6E, 0x73, 0x2F, 0x66, 0x6C, 0x61, 
	0x67, 0x73, 0x2F, 0x71, 0x25, 0x45, 0xDD, 0x00, 0x00, 0x00, 
	0x00, 0x49, 0x45, 0x4E, 0x44, 0xAE, 0x42, 0x60, 0x82, };

wxBitmap& lv_png_to_wx_bitmap()
{
	static wxMemoryInputStream memIStream( lv_png, sizeof( lv_png ) );
	static wxImage image( memIStream, wxBITMAP_TYPE_PNG );
	static wxBitmap bmp( image );
	return bmp;
};


#endif //LV_PNG_H
