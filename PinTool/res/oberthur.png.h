#ifndef OBERTHUR_PNG_H
#define OBERTHUR_PNG_H

#include <wx/mstream.h>
#include <wx/image.h>
#include <wx/bitmap.h>

static const unsigned char oberthur_png[] = 
{
	0x89, 0x50, 0x4E, 0x47, 0x0D, 0x0A, 0x1A, 0x0A, 0x00, 0x00, 
	0x00, 0x0D, 0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0xA0, 
	0x00, 0x00, 0x00, 0x30, 0x08, 0x06, 0x00, 0x00, 0x00, 0x96, 
	0xA9, 0x71, 0x6E, 0x00, 0x00, 0x00, 0x01, 0x73, 0x52, 0x47, 
	0x42, 0x00, 0xAE, 0xCE, 0x1C, 0xE9, 0x00, 0x00, 0x00, 0x06, 
	0x62, 0x4B, 0x47, 0x44, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 
	0xA0, 0xBD, 0xA7, 0x93, 0x00, 0x00, 0x00, 0x09, 0x70, 0x48, 
	0x59, 0x73, 0x00, 0x00, 0x0B, 0x13, 0x00, 0x00, 0x0B, 0x13, 
	0x01, 0x00, 0x9A, 0x9C, 0x18, 0x00, 0x00, 0x00, 0x07, 0x74, 
	0x49, 0x4D, 0x45, 0x07, 0xDC, 0x03, 0x1C, 0x01, 0x0F, 0x15, 
	0x1F, 0xC0, 0x76, 0x10, 0x00, 0x00, 0x0F, 0x54, 0x49, 0x44, 
	0x41, 0x54, 0x78, 0xDA, 0xED, 0x9D, 0x79, 0x7C, 0x54, 0xD5, 
	0x15, 0xC7, 0xBF, 0x93, 0x04, 0x22, 0x7B, 0x02, 0xA2, 0x20, 
	0x68, 0x15, 0xB4, 0x68, 0x05, 0x04, 0x2C, 0xEE, 0x8A, 0x0A, 
	0x5A, 0x45, 0x69, 0xDD, 0xB5, 0x58, 0x69, 0x71, 0x41, 0xDC, 
	0x3F, 0x14, 0xB5, 0x2D, 0x6E, 0x54, 0x51, 0x5B, 0x6B, 0xA5, 
	0x56, 0xC5, 0x0D, 0x2D, 0x52, 0x70, 0x6B, 0xDD, 0x2A, 0x95, 
	0x5A, 0x71, 0x01, 0x2D, 0xB8, 0x21, 0x22, 0x56, 0x51, 0xDC, 
	0x2A, 0x2A, 0x08, 0x4A, 0x00, 0x15, 0x02, 0x21, 0x99, 0xFE, 
	0x71, 0xCE, 0xED, 0x3B, 0x73, 0x73, 0xDF, 0x9B, 0x99, 0x40, 
	0xA0, 0xEA, 0x3B, 0x9F, 0xCF, 0x33, 0xC3, 0xBB, 0xFB, 0xB9, 
	0xBF, 0xB3, 0xDE, 0x3B, 0x63, 0x06, 0x98, 0x0F, 0x3C, 0x01, 
	0x34, 0x23, 0xA5, 0x94, 0x36, 0x1E, 0xAD, 0x06, 0x0E, 0x02, 
	0xB8, 0x21, 0xE5, 0x45, 0x4A, 0x9B, 0x88, 0x6E, 0x28, 0x21, 
	0xD5, 0x7C, 0x29, 0x6D, 0x3A, 0x6A, 0x56, 0x92, 0xF2, 0x20, 
	0xA5, 0x4D, 0x49, 0x29, 0x00, 0x53, 0x4A, 0x01, 0x98, 0x52, 
	0x0A, 0xC0, 0x94, 0x52, 0xFA, 0x46, 0x01, 0xB0, 0x04, 0xC8, 
	0x34, 0xA0, 0x2C, 0xA5, 0x6F, 0x19, 0x95, 0x35, 0x62, 0xBF, 
	0x6D, 0x80, 0x1D, 0x80, 0x76, 0xFA, 0xEF, 0x95, 0xC0, 0x7B, 
	0xC0, 0x22, 0xA0, 0x3A, 0x65, 0x7D, 0x4A, 0x8D, 0x01, 0xC0, 
	0x81, 0xC0, 0xDE, 0xC0, 0xE6, 0x88, 0x96, 0x7B, 0x0B, 0x58, 
	0x0A, 0xD4, 0x02, 0x5B, 0x02, 0x87, 0x03, 0x15, 0xC0, 0x32, 
	0x60, 0x01, 0x30, 0x21, 0x05, 0x63, 0x0A, 0xC0, 0x0D, 0x41, 
	0x03, 0x80, 0x73, 0x80, 0xA7, 0x80, 0x49, 0xC0, 0x9B, 0x79, 
	0xEA, 0x77, 0x04, 0xF6, 0x04, 0x26, 0x03, 0xFF, 0x02, 0xC6, 
	0x02, 0x59, 0x05, 0x6D, 0xF6, 0x6B, 0xC8, 0xC7, 0x8D, 0x35, 
	0xEF, 0xC6, 0x1C, 0x67, 0x93, 0xF0, 0x7E, 0x7D, 0x01, 0x58, 
	0x0A, 0xDC, 0x82, 0x68, 0xB9, 0x1F, 0x15, 0xD1, 0x6E, 0x11, 
	0xF0, 0xA0, 0x3E, 0xC7, 0x03, 0x0F, 0x01, 0xA3, 0x81, 0x57, 
	0x8B, 0x1C, 0xBF, 0x27, 0xD0, 0x1B, 0x68, 0x0E, 0x7C, 0x0E, 
	0xCC, 0x02, 0x16, 0x26, 0xD4, 0xDF, 0x47, 0xE7, 0x9C, 0x35, 
	0x4C, 0xAF, 0x06, 0xE6, 0x01, 0xAB, 0x62, 0xDA, 0xF4, 0x46, 
	0x34, 0x7A, 0x2D, 0xB9, 0xBE, 0x6B, 0x56, 0xF9, 0xF7, 0x0E, 
	0xE2, 0x5A, 0x38, 0xDA, 0x0B, 0x68, 0x01, 0xD4, 0x05, 0xFA, 
	0x7A, 0x43, 0xD7, 0xEE, 0xA8, 0xA5, 0xD6, 0x5F, 0x47, 0xB2, 
	0x5F, 0x9C, 0x41, 0x5C, 0x98, 0x17, 0x55, 0x78, 0x7B, 0xEA, 
	0xBB, 0xD7, 0x80, 0x4F, 0x02, 0x7B, 0x7A, 0xA0, 0xFE, 0xFD, 
	0x1C, 0x78, 0xC1, 0xEC, 0xD5, 0xA1, 0x3A, 0xAF, 0xC5, 0xC0, 
	0x2B, 0x5E, 0xBB, 0x2C, 0xB0, 0x9B, 0xAE, 0x75, 0x2D, 0x30, 
	0xD3, 0xE3, 0x49, 0x3F, 0xE5, 0x73, 0x9D, 0x37, 0xAF, 0x3A, 
	0xE4, 0x38, 0xF7, 0xC3, 0x86, 0x82, 0x68, 0x7C, 0x03, 0x24, 
	0xC5, 0x69, 0xB1, 0xC7, 0x75, 0xD2, 0xB6, 0xAC, 0x2C, 0x00, 
	0xD2, 0x26, 0x81, 0x3E, 0x6C, 0x00, 0x54, 0x0E, 0xDC, 0x03, 
	0x1C, 0xE7, 0x8D, 0x11, 0x37, 0x76, 0x2F, 0x44, 0xCB, 0x66, 
	0x03, 0xCF, 0xDF, 0x74, 0x63, 0xFD, 0x7E, 0x26, 0xC4, 0xD4, 
	0xCF, 0x2A, 0x13, 0xC7, 0x05, 0xC6, 0x19, 0x9E, 0xD0, 0xC6, 
	0x3D, 0x57, 0x99, 0x76, 0x97, 0x17, 0x50, 0x7F, 0x92, 0xB7, 
	0x8E, 0x6C, 0x81, 0xCF, 0x5C, 0x6D, 0x73, 0x9A, 0x79, 0x77, 
	0x7A, 0x80, 0x47, 0x6D, 0x4D, 0xF9, 0x4B, 0xE6, 0x7D, 0x0B, 
	0xF3, 0xFE, 0x89, 0x18, 0xFE, 0x3E, 0x6F, 0xF8, 0xB1, 0xA3, 
	0x79, 0x3F, 0xB6, 0x80, 0xF9, 0x4D, 0xA6, 0xF8, 0xE0, 0x72, 
	0x7C, 0x43, 0x34, 0x60, 0x16, 0xF1, 0xE7, 0x26, 0xAA, 0xF6, 
	0x5A, 0xE6, 0x95, 0xAD, 0x03, 0x0E, 0xD1, 0xE7, 0x7B, 0xFA, 
	0xBE, 0x0E, 0x68, 0xAA, 0xD2, 0xFA, 0x0C, 0x70, 0x2F, 0xF0, 
	0xA5, 0x69, 0xB7, 0x06, 0xF8, 0x31, 0x70, 0xAB, 0x02, 0xF6, 
	0x9E, 0x84, 0xB1, 0x0F, 0x07, 0x1E, 0x4D, 0x98, 0xDF, 0x20, 
	0xD5, 0x48, 0xDD, 0x81, 0x25, 0xE6, 0xFD, 0xDE, 0x79, 0x84, 
	0xEA, 0x0C, 0xEF, 0x6F, 0x56, 0x35, 0xA6, 0x1B, 0x37, 0x8E, 
	0xB9, 0x9B, 0x99, 0xCF, 0x07, 0x15, 0xC0, 0xBF, 0x13, 0x91, 
	0xE3, 0xCF, 0xA3, 0x09, 0x5B, 0xA0, 0xB8, 0xB1, 0x5A, 0x18, 
	0x5E, 0x3A, 0xAA, 0x8D, 0x69, 0x5F, 0xAB, 0x7C, 0x5C, 0x13, 
	0x33, 0x87, 0xB5, 0x79, 0xDE, 0xAF, 0xF6, 0xC6, 0xD9, 0xBD, 
	0x80, 0x75, 0x0D, 0x56, 0x45, 0x72, 0x4C, 0x31, 0x60, 0x6A, 
	0x48, 0x1A, 0x26, 0xA3, 0xDA, 0xE4, 0x44, 0x0F, 0x7C, 0x00, 
	0x3F, 0x55, 0x33, 0x31, 0x5A, 0x35, 0xE4, 0xE7, 0x0A, 0xC8, 
	0x12, 0xE0, 0x33, 0xFD, 0x7B, 0x2C, 0xE2, 0xF7, 0xFD, 0x91, 
	0xE8, 0x1C, 0xDA, 0xCD, 0xE3, 0x74, 0xE0, 0x30, 0x60, 0x8F, 
	0x98, 0xB1, 0x3B, 0x79, 0xE0, 0xBB, 0x03, 0xD8, 0x56, 0xC1, 
	0xBD, 0x07, 0x30, 0x43, 0xDF, 0xB7, 0x0F, 0x48, 0xB9, 0x63, 
	0xEE, 0x52, 0x24, 0x10, 0xCA, 0xE8, 0x33, 0xC4, 0xD4, 0x19, 
	0xEA, 0x6D, 0x72, 0x8D, 0x59, 0xF3, 0xE1, 0x40, 0x57, 0xD5, 
	0x0C, 0x5D, 0xF5, 0xD9, 0x01, 0xB8, 0xC2, 0xB4, 0x77, 0xF5, 
	0x57, 0xA9, 0xF0, 0x65, 0x14, 0x08, 0x19, 0xC4, 0x94, 0xAF, 
	0xD4, 0xF2, 0xA3, 0x80, 0x2E, 0x88, 0x09, 0xED, 0x8D, 0x98, 
	0xD4, 0x1E, 0x88, 0x99, 0x73, 0xE0, 0x7B, 0x42, 0xFB, 0xEF, 
	0xA5, 0xCF, 0xA1, 0xFA, 0x7E, 0x5D, 0x81, 0x4A, 0xA2, 0x21, 
	0xE5, 0x71, 0xEF, 0x6B, 0xCC, 0xE7, 0x4A, 0x6F, 0x5D, 0x7D, 
	0xCD, 0xBA, 0x8E, 0x06, 0x76, 0x2E, 0x16, 0x50, 0xC5, 0x9A, 
	0xE0, 0x1B, 0x11, 0x1F, 0xC3, 0xA7, 0xBF, 0x03, 0x53, 0x81, 
	0x07, 0x10, 0x9F, 0x20, 0x4E, 0x55, 0x2F, 0x03, 0xFE, 0xA9, 
	0x2A, 0x7B, 0x2E, 0xD0, 0x27, 0xD0, 0xD7, 0x94, 0x18, 0xED, 
	0x70, 0xBD, 0xE9, 0xE7, 0x6A, 0x4F, 0x28, 0x1C, 0xCD, 0x34, 
	0x75, 0xAC, 0x46, 0xFA, 0xB7, 0xBE, 0x5B, 0xEA, 0x69, 0x2D, 
	0x80, 0x77, 0xB5, 0xCC, 0xD7, 0x18, 0x77, 0x9A, 0xBE, 0x3A, 
	0x16, 0xC0, 0x9B, 0xE9, 0x5A, 0xF7, 0x2B, 0xA0, 0x9B, 0x99, 
	0x9B, 0x13, 0xB0, 0x5F, 0x9B, 0xFE, 0x86, 0x04, 0xDA, 0xB7, 
	0x31, 0xE5, 0xF7, 0xC7, 0x8C, 0xF1, 0x13, 0x53, 0x67, 0x70, 
	0xA0, 0xBC, 0x54, 0x01, 0x93, 0x05, 0x9E, 0xF3, 0x34, 0xA8, 
	0x6B, 0x37, 0xA5, 0x80, 0xF9, 0x7F, 0x37, 0xF0, 0x3E, 0xAB, 
	0x73, 0xF4, 0xD7, 0x75, 0xB3, 0x29, 0x3F, 0xA1, 0x18, 0xEC, 
	0x15, 0x6B, 0x82, 0xFB, 0xA9, 0x26, 0x79, 0xCA, 0x7B, 0x3F, 
	0x5B, 0x37, 0x78, 0x0F, 0x95, 0x5A, 0x8C, 0xB6, 0x79, 0x47, 
	0xDB, 0x6C, 0xA5, 0x65, 0x95, 0x0A, 0x8C, 0x35, 0xCA, 0xE4, 
	0x49, 0xC0, 0x30, 0x65, 0x96, 0x33, 0x7D, 0x63, 0x81, 0xCB, 
	0x80, 0x4B, 0xBC, 0x71, 0x7E, 0xA8, 0x7F, 0x6B, 0x81, 0x5F, 
	0xC5, 0x48, 0xEE, 0x45, 0x66, 0x7E, 0xA7, 0x04, 0x34, 0x61, 
	0x19, 0xB0, 0xAB, 0x6A, 0xE7, 0x3A, 0x24, 0x78, 0xEA, 0xA2, 
	0x65, 0x13, 0x8D, 0x46, 0xF6, 0x83, 0x88, 0xA3, 0x81, 0xF7, 
	0x8D, 0x60, 0x94, 0x21, 0x3E, 0xD3, 0xC7, 0x31, 0x9A, 0xE4, 
	0x0B, 0xF3, 0xD9, 0xCD, 0xAF, 0x97, 0xA9, 0xB3, 0x38, 0xD0, 
	0xAE, 0x49, 0x40, 0xA8, 0x92, 0xA2, 0xD3, 0xBD, 0x94, 0xC7, 
	0xCD, 0x8D, 0x76, 0xAC, 0xA0, 0x71, 0x13, 0xFD, 0x2B, 0x02, 
	0xEB, 0xEA, 0x6E, 0xCA, 0xAB, 0x8A, 0xE9, 0xAC, 0x58, 0x00, 
	0x0E, 0xD1, 0x0D, 0x76, 0x92, 0x56, 0x8B, 0x44, 0xB0, 0xAF, 
	0x22, 0x26, 0x6A, 0x0B, 0x2D, 0xFB, 0x0F, 0xF0, 0x24, 0xF0, 
	0x1D, 0x7D, 0x97, 0x21, 0x8A, 0x52, 0xBB, 0x20, 0xBE, 0x55, 
	0x39, 0x70, 0x12, 0x70, 0x1B, 0x70, 0x3B, 0x12, 0xCC, 0xB8, 
	0x4D, 0x7B, 0x12, 0x38, 0x59, 0x99, 0xB9, 0x42, 0x17, 0x5A, 
	0x8E, 0x98, 0x5B, 0x74, 0xE3, 0xE3, 0x68, 0xAE, 0x6E, 0x44, 
	0x19, 0xB0, 0x75, 0xA0, 0xBC, 0xC2, 0xD3, 0x0C, 0x8E, 0x56, 
	0x03, 0x17, 0x07, 0x34, 0x2A, 0x0A, 0xC6, 0xD0, 0xBD, 0xC9, 
	0x8F, 0x81, 0xCE, 0x86, 0x17, 0x16, 0x48, 0x23, 0x10, 0x9F, 
	0xB7, 0x4C, 0xDB, 0xEF, 0x63, 0x04, 0x68, 0x0D, 0xF1, 0x81, 
	0x40, 0xA1, 0x54, 0x07, 0x9C, 0xA5, 0xCF, 0xC6, 0xA4, 0x2B, 
	0x90, 0xCC, 0x41, 0x46, 0xF9, 0x7C, 0x30, 0x91, 0xAF, 0xBC, 
	0x1C, 0x09, 0x4C, 0x1B, 0x05, 0x80, 0xDD, 0x54, 0x35, 0x2F, 
	0x36, 0x5A, 0xE8, 0x48, 0xD5, 0x6C, 0xDB, 0x18, 0xF0, 0x4D, 
	0x07, 0x3E, 0x45, 0x7C, 0xA5, 0x1B, 0x91, 0x70, 0x7F, 0x15, 
	0xB0, 0x1D, 0xE2, 0x23, 0x36, 0x43, 0x52, 0x37, 0xC3, 0xB5, 
	0xFE, 0x69, 0x88, 0x39, 0x9E, 0xA0, 0x5A, 0xC6, 0xD1, 0x2D, 
	0xC0, 0x79, 0x88, 0xD9, 0xF2, 0x41, 0x91, 0xCD, 0xB3, 0x31, 
	0xC4, 0x00, 0xC9, 0x95, 0x7F, 0x65, 0x3E, 0x97, 0x23, 0x26, 
	0xB9, 0x19, 0xE2, 0x3A, 0xEC, 0xA8, 0xF3, 0xB7, 0x14, 0xE7, 
	0x2B, 0xBF, 0x12, 0x33, 0x9F, 0xA6, 0xC0, 0xF9, 0x31, 0x6D, 
	0x6A, 0x11, 0x0B, 0x90, 0x8D, 0xD1, 0x9C, 0x1B, 0x83, 0x0A, 
	0xF1, 0x01, 0x33, 0x31, 0xE5, 0x17, 0xC7, 0xB4, 0x5D, 0x85, 
	0xE4, 0x83, 0x8B, 0xA2, 0x62, 0x82, 0x90, 0x41, 0x48, 0xDE, 
	0xCE, 0xD2, 0x48, 0x24, 0xB7, 0xE5, 0xFC, 0xB8, 0xF9, 0x88, 
	0x43, 0x5A, 0x85, 0x44, 0x9D, 0xF7, 0x20, 0xA7, 0x21, 0x0B, 
	0x91, 0x00, 0xE1, 0x14, 0xE0, 0x02, 0x9D, 0xE8, 0x9F, 0xCD, 
	0x42, 0x77, 0x51, 0x00, 0x77, 0x37, 0x82, 0xF1, 0x2C, 0xB9, 
	0xA9, 0x80, 0x6A, 0xA2, 0x5C, 0x53, 0x52, 0x54, 0xD6, 0xC3, 
	0x08, 0x56, 0xC8, 0x3C, 0x2E, 0x47, 0x4C, 0x61, 0x27, 0xD5, 
	0xC6, 0x9B, 0x1B, 0x90, 0x57, 0x90, 0x9B, 0x56, 0xB1, 0xB4, 
	0x3F, 0x12, 0xDC, 0x74, 0xD2, 0xA7, 0x33, 0x51, 0xEE, 0xB3, 
	0x2E, 0x00, 0xB2, 0xD7, 0x10, 0x4D, 0xFD, 0x3C, 0xB9, 0xA7, 
	0x3D, 0xFD, 0x75, 0x6D, 0x99, 0xF5, 0x04, 0x60, 0x09, 0x30, 
	0x0A, 0xC9, 0x48, 0x74, 0xD5, 0xB5, 0x6C, 0xAD, 0x7B, 0x51, 
	0x9B, 0xA7, 0xEF, 0xE6, 0x31, 0x20, 0xB3, 0x91, 0x76, 0x28, 
	0xD8, 0xC9, 0x20, 0x56, 0xEC, 0x59, 0xDD, 0x4F, 0x1B, 0x4D, 
	0x1F, 0x86, 0xB8, 0x62, 0x45, 0xD3, 0x1D, 0x05, 0xD6, 0xF3, 
	0x53, 0x1F, 0x7B, 0xAA, 0xBA, 0xFD, 0x84, 0xC8, 0x1F, 0xB8, 
	0x9D, 0xFA, 0xFE, 0x61, 0x88, 0x4E, 0x44, 0xCC, 0xA0, 0x0B, 
	0x0C, 0xAA, 0x81, 0x47, 0x80, 0x6B, 0x3D, 0xC6, 0x5C, 0x84, 
	0x44, 0x88, 0x8E, 0x6E, 0x32, 0x63, 0x5D, 0x16, 0xD3, 0xF7, 
	0x0C, 0x53, 0x67, 0xA0, 0x79, 0x9F, 0x14, 0x84, 0x64, 0x4C, 
	0x9B, 0x59, 0xE6, 0xBD, 0x0D, 0x42, 0xB6, 0x2D, 0x60, 0x5D, 
	0xCE, 0x59, 0xFF, 0x52, 0xC1, 0xEA, 0xE8, 0x6C, 0xD3, 0xCF, 
	0xB3, 0x09, 0xED, 0x6D, 0x0E, 0xEF, 0xC1, 0x18, 0x90, 0xD8, 
	0x20, 0x64, 0x68, 0xA0, 0x8F, 0x56, 0x84, 0x83, 0x10, 0x90, 
	0xF4, 0x94, 0x6B, 0x5B, 0xE1, 0x95, 0x6D, 0x85, 0xB8, 0x21, 
	0x59, 0xEA, 0x27, 0xF3, 0x6D, 0x10, 0x62, 0xE9, 0x42, 0xF3, 
	0xBE, 0x28, 0xD3, 0xAB, 0x34, 0xBE, 0x44, 0xA5, 0xA1, 0x1F, 
	0x62, 0xC7, 0xF7, 0x0D, 0x3C, 0xBB, 0xEB, 0xA2, 0xDF, 0xF1, 
	0x18, 0x72, 0xB0, 0x32, 0xDA, 0x45, 0x87, 0xB3, 0x11, 0xE7, 
	0xFE, 0xE2, 0x3C, 0x83, 0x36, 0x41, 0x4C, 0x6E, 0xB5, 0x59, 
	0x68, 0xB9, 0x3E, 0x7D, 0x3C, 0x69, 0xFD, 0x90, 0x28, 0x9A, 
	0x04, 0xB8, 0xD2, 0x7C, 0x1E, 0x8D, 0x98, 0xE9, 0x2E, 0xAA, 
	0x91, 0x76, 0x55, 0xF0, 0xED, 0xAB, 0xE5, 0xAF, 0x01, 0x8F, 
	0x05, 0xC6, 0x2F, 0xD5, 0x36, 0x5B, 0x68, 0xBB, 0xF6, 0xC0, 
	0x1F, 0x4C, 0xF9, 0xDB, 0x31, 0xF3, 0xDE, 0x45, 0x35, 0x72, 
	0x0F, 0xF3, 0xF4, 0x02, 0x3A, 0xC4, 0x68, 0x8A, 0x4A, 0xF3, 
	0xEF, 0x1B, 0xD5, 0x12, 0xA0, 0x7C, 0x1E, 0x5C, 0xC0, 0xE6, 
	0x94, 0x16, 0xA8, 0x05, 0x7D, 0x4A, 0x72, 0xAB, 0x6E, 0x31, 
	0x9F, 0xE7, 0xA9, 0x36, 0xDE, 0x46, 0xF7, 0xFF, 0x45, 0x23, 
	0x98, 0xE3, 0x12, 0xFA, 0x6F, 0x6D, 0xCA, 0xAE, 0x01, 0x3E, 
	0x32, 0x78, 0x38, 0xAA, 0x58, 0x04, 0x96, 0x21, 0xD1, 0xE4, 
	0x71, 0xC4, 0x27, 0x27, 0x4B, 0x54, 0xA5, 0x8F, 0xF2, 0xFE, 
	0xDD, 0xC9, 0xA8, 0x72, 0x10, 0xBF, 0x69, 0x6B, 0x24, 0x0D, 
	0x92, 0x44, 0xCE, 0x3C, 0xBC, 0x8E, 0xF8, 0x85, 0x75, 0x44, 
	0x57, 0xB4, 0xDA, 0xEB, 0x9C, 0x9C, 0xFA, 0xAF, 0x32, 0x9A, 
	0x24, 0xA3, 0xDA, 0xF6, 0x58, 0xE0, 0x2F, 0xFA, 0xEE, 0x74, 
	0x7D, 0x6A, 0xC8, 0x8D, 0x20, 0x57, 0x20, 0x89, 0x70, 0x4B, 
	0x2E, 0xE7, 0x58, 0x89, 0x04, 0x4D, 0x4E, 0x72, 0xCB, 0xBD, 
	0x7A, 0x36, 0xBD, 0x63, 0xCB, 0x1E, 0x4E, 0xD8, 0xD4, 0x33, 
	0xBC, 0x0D, 0x0B, 0x5D, 0x39, 0x3B, 0x13, 0x09, 0xAE, 0x40, 
	0x02, 0x9A, 0xBB, 0xF3, 0xF0, 0x29, 0x53, 0xC0, 0xFB, 0xA6, 
	0x79, 0xC0, 0xEB, 0x03, 0xE8, 0x1A, 0x24, 0x51, 0xDC, 0x17, 
	0x71, 0x21, 0xA6, 0x05, 0xDA, 0xCE, 0x36, 0x3C, 0xC8, 0x26, 
	0x00, 0xD1, 0xB9, 0x1D, 0xE7, 0x20, 0x81, 0x28, 0xC8, 0x41, 
	0xC2, 0x83, 0x34, 0x32, 0xB9, 0xC5, 0x4D, 0x44, 0x4E, 0x35, 
	0xEC, 0xF1, 0x4E, 0x21, 0x91, 0x9D, 0x63, 0xE0, 0x48, 0xC4, 
	0xEC, 0x3A, 0x73, 0x31, 0x55, 0xB5, 0x44, 0x27, 0x53, 0x77, 
	0x3F, 0xC4, 0x7C, 0xF9, 0x8C, 0xEF, 0x0D, 0xCC, 0xA1, 0x7E, 
	0x8E, 0xB1, 0x56, 0x19, 0xB0, 0x59, 0x60, 0xDC, 0x9B, 0x88, 
	0xCF, 0x4D, 0xD6, 0x22, 0x01, 0x45, 0x1F, 0x8F, 0xE1, 0x43, 
	0xC8, 0x7F, 0x04, 0x35, 0xD6, 0x8C, 0x31, 0x8B, 0xE8, 0x34, 
	0xA8, 0x5B, 0x60, 0x0E, 0x8F, 0x9A, 0x76, 0xD7, 0x05, 0xCA, 
	0xDB, 0x99, 0xF2, 0xC7, 0x62, 0x80, 0x68, 0xE7, 0x74, 0x76, 
	0xA0, 0x8F, 0x4A, 0xC2, 0xEE, 0x84, 0xA5, 0x9B, 0x11, 0x0B, 
	0x64, 0xD7, 0xF1, 0x15, 0xF5, 0xDD, 0x31, 0x37, 0xF6, 0x73, 
	0xA6, 0x5E, 0xEB, 0x40, 0x7F, 0xD3, 0x4C, 0xF9, 0xE5, 0x45, 
	0x60, 0x69, 0x7C, 0x63, 0xDD, 0x07, 0x6C, 0x08, 0x65, 0x62, 
	0x18, 0x9E, 0x0D, 0xD4, 0x9B, 0xA3, 0x20, 0xDC, 0x05, 0x49, 
	0x98, 0x56, 0x20, 0x87, 0xFC, 0xF3, 0x89, 0x5C, 0x05, 0x9F, 
	0xCE, 0x02, 0xFE, 0x14, 0xA3, 0x59, 0xBE, 0x24, 0xBA, 0xC1, 
	0x93, 0x31, 0xD2, 0x3D, 0x11, 0x78, 0x19, 0xF1, 0xAB, 0xEA, 
	0x02, 0xF3, 0x2A, 0x23, 0x32, 0x41, 0x20, 0x3E, 0x59, 0x1B, 
	0x15, 0xAA, 0x0F, 0x02, 0xE3, 0x0C, 0x01, 0x76, 0x52, 0x80, 
	0xD6, 0x04, 0xCA, 0x97, 0x23, 0xBE, 0x75, 0x16, 0x49, 0x5B, 
	0x85, 0xD6, 0x3F, 0x05, 0x49, 0x59, 0x65, 0xC8, 0xBD, 0x04, 
	0xE1, 0x68, 0xA5, 0x0A, 0x52, 0x29, 0xD1, 0x09, 0x85, 0x4F, 
	0x67, 0x20, 0xC1, 0xD6, 0x4E, 0x0A, 0xFA, 0x2A, 0x24, 0x98, 
	0xFC, 0x30, 0x86, 0xF7, 0x6E, 0x5D, 0x75, 0xE4, 0x1E, 0xA1, 
	0x3A, 0x3A, 0x0E, 0xF1, 0x91, 0xEB, 0x28, 0xF2, 0x7A, 0x5D, 
	0x99, 0x36, 0x3C, 0x41, 0x99, 0x12, 0x3A, 0x87, 0x2C, 0x41, 
	0xF2, 0x56, 0xB7, 0x7A, 0x9D, 0x57, 0x93, 0x6B, 0xB6, 0xD7, 
	0x12, 0xCE, 0xBB, 0x85, 0x80, 0x96, 0x45, 0x7C, 0x8F, 0xAC, 
	0xA7, 0xDE, 0x6B, 0x90, 0x23, 0x3B, 0x47, 0xAD, 0xA9, 0x7F, 
	0x4B, 0xC5, 0x6E, 0xC8, 0x5C, 0xA2, 0x43, 0xFA, 0x42, 0xE8, 
	0xE5, 0x02, 0xEA, 0xF8, 0xD7, 0xC2, 0xDE, 0x28, 0x42, 0x80, 
	0xE6, 0xE7, 0xA9, 0x53, 0x45, 0xB2, 0x8B, 0x52, 0x4B, 0x6E, 
	0x8E, 0x33, 0x94, 0x84, 0x5E, 0x46, 0xFD, 0x23, 0x50, 0xBF, 
	0x8F, 0x39, 0x79, 0xFA, 0x00, 0xF1, 0xBF, 0x17, 0x16, 0xB8, 
	0xB6, 0x05, 0x79, 0xCA, 0xF3, 0xCD, 0x29, 0x11, 0x80, 0x57, 
	0x23, 0xC9, 0xE0, 0xDA, 0x18, 0xED, 0x50, 0x03, 0x6C, 0xAF, 
	0x12, 0xF3, 0x73, 0xB3, 0x98, 0x25, 0x48, 0x0A, 0xC3, 0xD1, 
	0x16, 0x2A, 0x01, 0x7B, 0x23, 0x67, 0xBD, 0x71, 0x54, 0xAA, 
	0xF5, 0x7A, 0x2A, 0xB0, 0x4B, 0xBC, 0x85, 0x58, 0x90, 0x57, 
	0x1A, 0x89, 0xCB, 0x22, 0x7E, 0xDD, 0x51, 0x48, 0xC2, 0xDA, 
	0x69, 0x91, 0x66, 0x88, 0x2F, 0xF4, 0x01, 0xF0, 0x7B, 0x24, 
	0x1D, 0x30, 0x10, 0x89, 0xE8, 0xEC, 0x3A, 0x17, 0x20, 0x66, 
	0xD8, 0x6E, 0xC8, 0x31, 0x48, 0x2A, 0xA5, 0x42, 0xB5, 0xC5, 
	0x3C, 0xC4, 0x3C, 0xAD, 0x40, 0x7C, 0xCD, 0xB7, 0x03, 0x00, 
	0xEF, 0x80, 0x24, 0xDD, 0xDD, 0x11, 0xE6, 0x30, 0xC4, 0x7D, 
	0x58, 0xE8, 0x09, 0x6D, 0x9D, 0xF2, 0xCB, 0x37, 0xB5, 0x7B, 
	0x00, 0xA7, 0x22, 0x51, 0xE7, 0x4A, 0xE4, 0x62, 0x86, 0xEF, 
	0x5F, 0x9E, 0xA4, 0x40, 0x7D, 0x37, 0x81, 0x8F, 0x3D, 0x54, 
	0xAB, 0x77, 0x51, 0x1E, 0x3D, 0x4C, 0x74, 0x92, 0x63, 0xD7, 
	0x98, 0x45, 0x02, 0xB3, 0x21, 0xAA, 0x6C, 0x56, 0x6B, 0xBF, 
	0x77, 0x11, 0x5D, 0x7F, 0x2B, 0x43, 0xCC, 0xF9, 0x38, 0x55, 
	0x24, 0x5D, 0x91, 0xD8, 0x60, 0x9D, 0xD1, 0xFC, 0xEE, 0x88, 
	0x6F, 0x24, 0xD1, 0x91, 0xE5, 0x99, 0x48, 0xF0, 0xB1, 0x99, 
	0xEE, 0xDB, 0x22, 0x24, 0x62, 0xBE, 0xB7, 0x18, 0x00, 0xAE, 
	0x02, 0x9E, 0xCE, 0x53, 0x6F, 0x26, 0xD1, 0x55, 0x29, 0x37, 
	0xA1, 0x69, 0x88, 0x09, 0x5C, 0xA1, 0xEA, 0xF9, 0xFB, 0xBA, 
	0x29, 0x57, 0x21, 0x51, 0x55, 0x1C, 0xD5, 0x20, 0x09, 0xE9, 
	0x26, 0x44, 0x01, 0xC6, 0x5A, 0x7D, 0xDE, 0x0E, 0x68, 0x49, 
	0x9B, 0xFE, 0x59, 0x82, 0x44, 0xB7, 0xCB, 0x11, 0x47, 0x7A, 
	0x10, 0x30, 0x46, 0x35, 0xA5, 0x4B, 0x90, 0x8F, 0xD2, 0xF5, 
	0xBC, 0x6B, 0x04, 0xAA, 0x94, 0xE8, 0xDE, 0x9C, 0xBB, 0xCD, 
	0x33, 0x43, 0x41, 0x39, 0x5E, 0xCB, 0x2A, 0x15, 0x1C, 0x9D, 
	0x0C, 0x00, 0x1F, 0x0B, 0x00, 0xB0, 0xA3, 0x02, 0xC8, 0x01, 
	0xF0, 0x04, 0xE0, 0x17, 0xBA, 0x69, 0x0E, 0x78, 0xA5, 0x06, 
	0x80, 0x63, 0x0D, 0x18, 0xC6, 0x21, 0x7E, 0xED, 0x6F, 0x54, 
	0x5B, 0x76, 0x00, 0xCE, 0x45, 0x12, 0xEE, 0x07, 0x78, 0x00, 
	0xFC, 0x34, 0x01, 0x80, 0x97, 0x2A, 0x0F, 0xAF, 0x54, 0xE5, 
	0x51, 0x89, 0x04, 0x63, 0x23, 0x11, 0x13, 0x6E, 0xAD, 0xC6, 
	0x5F, 0x15, 0xA4, 0xD7, 0x23, 0x69, 0xB2, 0xE6, 0xBA, 0x57, 
	0x63, 0x90, 0x43, 0x80, 0x45, 0x8A, 0x83, 0x61, 0xBA, 0xA6, 
	0xB5, 0x48, 0x74, 0xBC, 0xB3, 0x2A, 0x27, 0x9B, 0x33, 0xB4, 
	0x6E, 0xC8, 0x64, 0x5D, 0xD7, 0x18, 0x15, 0x80, 0x96, 0x88, 
	0x3B, 0xD4, 0x99, 0xF0, 0x51, 0x66, 0x2C, 0x15, 0x7A, 0x19, 
	0xE1, 0xFC, 0x00, 0xB0, 0x9E, 0x45, 0xCE, 0x72, 0x9D, 0x03, 
	0xFA, 0x26, 0x72, 0x1F, 0xEF, 0xCE, 0x84, 0x7E, 0x7E, 0x80, 
	0xF8, 0x2E, 0x13, 0xBC, 0x76, 0xD3, 0x95, 0x31, 0x4E, 0x30, 
	0x20, 0xF7, 0x5A, 0x96, 0xAF, 0x9D, 0xF7, 0x8C, 0x91, 0xB4, 
	0xE7, 0x48, 0xBE, 0x38, 0x50, 0x86, 0xF8, 0x3A, 0xC7, 0xE7, 
	0x59, 0xEF, 0x44, 0xE0, 0x67, 0x81, 0xF7, 0x3D, 0x3D, 0x81, 
	0x9D, 0xA0, 0x26, 0xCF, 0x06, 0x23, 0x2E, 0x22, 0x7F, 0xCB, 
	0xCC, 0xFB, 0x42, 0xE2, 0x73, 0xA4, 0xBF, 0x53, 0xA0, 0x38, 
	0x7A, 0x84, 0xF0, 0x85, 0x0F, 0x74, 0xDE, 0xF3, 0x62, 0xCA, 
	0xCE, 0x24, 0x37, 0xF0, 0xB8, 0x43, 0x35, 0x5D, 0x12, 0x65, 
	0x90, 0x68, 0xFF, 0x65, 0xA2, 0x44, 0xF4, 0x70, 0x72, 0xB3, 
	0x01, 0x3E, 0xFF, 0x20, 0xEC, 0xE3, 0x16, 0x4B, 0xE3, 0x8B, 
	0x39, 0x09, 0x99, 0x42, 0xEE, 0x51, 0x19, 0x2A, 0x7D, 0x5B, 
	0x11, 0x39, 0xFE, 0x3B, 0x22, 0x0E, 0x7B, 0x0B, 0x5D, 0xD0, 
	0xC9, 0xAA, 0x25, 0xBB, 0x29, 0xF0, 0x26, 0xA9, 0xF4, 0x3F, 
	0xAE, 0x12, 0xEC, 0xE8, 0x05, 0x24, 0x0A, 0x73, 0x3E, 0xDA, 
	0x3A, 0x35, 0x1B, 0xD6, 0xA7, 0xF2, 0xFD, 0x98, 0x56, 0x66, 
	0xA3, 0x7D, 0x70, 0x96, 0xE7, 0x11, 0xA4, 0xA9, 0xC0, 0x7D, 
	0x05, 0x6C, 0x4C, 0xE8, 0x3E, 0x5D, 0xB5, 0x37, 0xDE, 0xE6, 
	0x48, 0x5E, 0xAF, 0x1F, 0x62, 0xFE, 0x7D, 0x72, 0xF3, 0x3E, 
	0x8B, 0xF0, 0xAD, 0xF1, 0x0C, 0x72, 0x3A, 0xD4, 0x83, 0xE8, 
	0x52, 0x44, 0x12, 0x8D, 0x56, 0xED, 0x1C, 0x22, 0x97, 0xBF, 
	0xDB, 0x57, 0xB5, 0xE2, 0x00, 0x8F, 0xCF, 0xC5, 0x50, 0x5C, 
	0x1E, 0xD2, 0xAD, 0x67, 0x26, 0xB9, 0x97, 0x78, 0x1B, 0x44, 
	0xC5, 0x44, 0xC1, 0xF3, 0x11, 0x75, 0xBC, 0x25, 0x62, 0x1E, 
	0x4A, 0x91, 0xE3, 0xB4, 0xC1, 0x48, 0x7E, 0xAB, 0x33, 0xE2, 
	0x0B, 0xEC, 0x8F, 0x5C, 0x46, 0x98, 0xA6, 0x65, 0x23, 0x10, 
	0x95, 0xFC, 0x85, 0x6A, 0x84, 0x2F, 0x88, 0x6E, 0x1A, 0x67, 
	0x54, 0x03, 0xEF, 0xA7, 0x8F, 0xA5, 0xE1, 0x88, 0x5F, 0x52, 
	0xEC, 0x77, 0x15, 0xD6, 0x20, 0x7E, 0xC9, 0x3B, 0x44, 0xFE, 
	0x65, 0x13, 0x05, 0xF9, 0x32, 0xC4, 0x6C, 0x9F, 0x5B, 0x40, 
	0x3F, 0x35, 0x88, 0x3F, 0xBB, 0xC4, 0x00, 0xBA, 0x56, 0x85, 
	0x6C, 0x4D, 0x00, 0x44, 0xFD, 0x11, 0x17, 0xA2, 0x2B, 0xF5, 
	0xA3, 0xCF, 0xDD, 0x11, 0xAD, 0xFF, 0x45, 0xC2, 0x86, 0x4E, 
	0x55, 0x00, 0x27, 0xFD, 0x58, 0xD4, 0x36, 0x44, 0x57, 0xE0, 
	0xE3, 0xE8, 0x41, 0x05, 0x5E, 0x3B, 0xC4, 0xAA, 0x34, 0x84, 
	0xD6, 0x20, 0xC7, 0xA2, 0xFD, 0x10, 0xD3, 0x9A, 0x45, 0xFC, 
	0xEC, 0xF7, 0x10, 0x17, 0x08, 0xDD, 0xDB, 0x3B, 0x74, 0x4F, 
	0xAF, 0x46, 0x2C, 0x01, 0x14, 0x69, 0x7E, 0x8B, 0x4D, 0xC3, 
	0x4C, 0x42, 0x4C, 0xC9, 0x48, 0xA2, 0x84, 0xF2, 0x91, 0x2A, 
	0x0D, 0xF7, 0x20, 0xCE, 0x79, 0x7B, 0xE4, 0x16, 0xCC, 0x29, 
	0x48, 0x2A, 0x61, 0x81, 0x6E, 0x66, 0x47, 0xEA, 0xDF, 0x81, 
	0x9B, 0x8C, 0x5C, 0x29, 0x1A, 0xA9, 0xA0, 0x76, 0x93, 0xEF, 
	0xAF, 0x8B, 0xAD, 0x6A, 0x00, 0xF3, 0xAA, 0x11, 0x1F, 0x6A, 
	0x91, 0x01, 0x47, 0x4B, 0x15, 0x84, 0x65, 0x48, 0xD0, 0x52, 
	0x48, 0xBF, 0xEB, 0x74, 0x03, 0x5A, 0x1B, 0x6D, 0xE0, 0xEE, 
	0x05, 0x7E, 0xE9, 0x01, 0xA8, 0xA5, 0xF6, 0x39, 0x42, 0x85, 
	0xB1, 0xAF, 0xD7, 0x57, 0x6B, 0xA2, 0xB4, 0x4A, 0x1C, 0x7D, 
	0xAA, 0xC2, 0x9D, 0x44, 0x6D, 0x63, 0x40, 0x6C, 0x69, 0x19, 
	0x12, 0x10, 0xB6, 0x22, 0x37, 0xA3, 0x10, 0xD2, 0x70, 0x4D, 
	0x89, 0x82, 0xB5, 0x32, 0x23, 0xB0, 0x6B, 0x11, 0xCB, 0x35, 
	0x54, 0xEB, 0x64, 0xB5, 0xBF, 0x87, 0x0C, 0x00, 0xD1, 0x3D, 
	0xEE, 0x86, 0xF8, 0xDD, 0xA3, 0x10, 0x3F, 0xF3, 0xA6, 0xC6, 
	0xD2, 0x80, 0x20, 0x89, 0xE7, 0x63, 0x10, 0x87, 0xF9, 0x69, 
	0xB3, 0xE1, 0xBB, 0x21, 0x97, 0x4C, 0x67, 0xE8, 0x84, 0x77, 
	0x53, 0x66, 0xB6, 0xD3, 0xC7, 0xD7, 0x2C, 0xCF, 0x21, 0xF9, 
	0xB3, 0x3E, 0xAA, 0x8D, 0xDC, 0x09, 0x81, 0x93, 0x9C, 0x11, 
	0xC0, 0x11, 0x0D, 0x94, 0xDE, 0x36, 0x2A, 0x9D, 0x1F, 0x26, 
	0x6C, 0xF4, 0x76, 0x84, 0x73, 0x68, 0x96, 0x9A, 0x21, 0x0E, 
	0xB6, 0x6F, 0xAA, 0xBB, 0x52, 0x3F, 0x61, 0x9B, 0x35, 0x02, 
	0x3A, 0x08, 0xF8, 0x2D, 0x12, 0x98, 0x38, 0xFA, 0x48, 0x85, 
	0x32, 0x89, 0x76, 0x22, 0x7C, 0x74, 0x68, 0xE9, 0x7D, 0x05, 
	0x61, 0x12, 0x6D, 0x8F, 0x04, 0x64, 0x0B, 0x49, 0xF6, 0x73, 
	0xF7, 0xD1, 0x39, 0x0E, 0xA4, 0xFE, 0xC9, 0x4D, 0x2B, 0xC4, 
	0xBA, 0xFD, 0xB2, 0x00, 0x7E, 0xBF, 0x85, 0x98, 0xF9, 0x4A, 
	0xD5, 0x82, 0xFD, 0x29, 0xE2, 0x48, 0xAE, 0x21, 0x57, 0xF2, 
	0xCF, 0x55, 0x2D, 0xD8, 0xDE, 0xD3, 0x16, 0x07, 0xAA, 0x26, 
	0xDC, 0x0A, 0xC9, 0x9D, 0xDD, 0x8D, 0x98, 0x83, 0x99, 0x88, 
	0xF9, 0x9B, 0xAA, 0x1A, 0x6F, 0x2A, 0x51, 0xFA, 0xE6, 0x00, 
	0x05, 0x5F, 0x89, 0xA7, 0x65, 0xC7, 0x50, 0xD8, 0xD5, 0xF3, 
	0xB8, 0x1B, 0x25, 0xF6, 0x4B, 0x49, 0x19, 0xEA, 0x7F, 0x39, 
	0x69, 0x54, 0x01, 0x7D, 0x67, 0xC9, 0x8D, 0x00, 0x33, 0x66, 
	0x73, 0x92, 0x5C, 0x82, 0xE3, 0x55, 0x03, 0xF7, 0x31, 0xDA, 
	0xEA, 0x4D, 0xD5, 0x82, 0x3D, 0x13, 0xDA, 0x0D, 0x20, 0xFF, 
	0x81, 0xFE, 0x0A, 0xF2, 0x7F, 0x03, 0x71, 0x30, 0x12, 0xC4, 
	0x3C, 0x83, 0x9C, 0x8F, 0x6F, 0x1E, 0x53, 0x6F, 0x39, 0xE1, 
	0x5B, 0x33, 0x6E, 0xED, 0x9B, 0x25, 0xF0, 0x30, 0x84, 0xA3, 
	0x2A, 0x9D, 0xD7, 0xD6, 0x44, 0xC1, 0x64, 0xA3, 0x00, 0xB0, 
	0x4E, 0x55, 0xF3, 0xDD, 0x01, 0x69, 0xBC, 0x4E, 0x07, 0xBF, 
	0x53, 0x01, 0xD4, 0x56, 0x99, 0xF6, 0x99, 0x2E, 0xA8, 0x02, 
	0xC9, 0x11, 0x1E, 0x82, 0x98, 0xE3, 0xA5, 0x9E, 0xE6, 0xBB, 
	0x15, 0xB9, 0xDA, 0xFF, 0x7C, 0x81, 0x00, 0xC9, 0xC6, 0xAC, 
	0x69, 0xB9, 0x57, 0xC7, 0xD6, 0xBB, 0x0F, 0xF1, 0x71, 0x6E, 
	0x2B, 0x02, 0xDC, 0xB6, 0x0F, 0x3F, 0x59, 0x1F, 0xDA, 0x9C, 
	0x01, 0x88, 0xB9, 0x6A, 0x49, 0x64, 0x65, 0x86, 0x01, 0xFF, 
	0x88, 0x01, 0xC4, 0x4B, 0xCA, 0xBB, 0x2A, 0xD3, 0x67, 0x9C, 
	0xA9, 0x1D, 0xAA, 0xFC, 0xDD, 0x29, 0x50, 0xF6, 0x28, 0x92, 
	0x0F, 0x74, 0x41, 0xE1, 0x05, 0x2A, 0xFC, 0x6D, 0x02, 0x75, 
	0x4F, 0x35, 0xFC, 0xCF, 0x06, 0x78, 0xB8, 0x3A, 0x81, 0x87, 
	0xA5, 0xE4, 0x5A, 0x36, 0xEB, 0xF3, 0xB9, 0x3D, 0x2F, 0x88, 
	0x1A, 0x72, 0x14, 0x97, 0x41, 0x54, 0xFC, 0x10, 0xC4, 0xEF, 
	0xBB, 0x04, 0xB9, 0x49, 0x81, 0x51, 0xE5, 0x93, 0xF4, 0x41, 
	0x37, 0xC1, 0x2D, 0xA8, 0xC6, 0x5B, 0x84, 0x93, 0xC0, 0x72, 
	0xD5, 0x4C, 0x0F, 0x21, 0xD7, 0xF4, 0x0B, 0x09, 0x3C, 0x32, 
	0x31, 0xF3, 0x5F, 0x85, 0xA4, 0x1E, 0x3E, 0x32, 0xC0, 0x28, 
	0x41, 0x7C, 0x42, 0x67, 0x16, 0x07, 0x22, 0x39, 0xB1, 0x05, 
	0xBA, 0x69, 0x0B, 0x11, 0x13, 0xD2, 0x17, 0xB9, 0xE6, 0xF5, 
	0xA2, 0xF6, 0x5D, 0x1A, 0x33, 0xAE, 0xBD, 0x04, 0xD0, 0x24, 
	0x00, 0xC0, 0x37, 0x90, 0xD4, 0xCA, 0xA5, 0x66, 0x73, 0xA6, 
	0x23, 0x47, 0x60, 0xAF, 0x22, 0xEE, 0xCB, 0xEB, 0x48, 0xE0, 
	0x36, 0x48, 0x05, 0xEF, 0x5A, 0x72, 0x1D, 0xF8, 0xB1, 0x0A, 
	0x24, 0xB7, 0xC6, 0x0A, 0x24, 0x35, 0x74, 0x3F, 0xF2, 0x05, 
	0xA5, 0xA9, 0x48, 0xD6, 0x60, 0x8E, 0x82, 0x7A, 0x90, 0xAE, 
	0x65, 0x84, 0x99, 0xC7, 0x24, 0x33, 0x9F, 0x19, 0x88, 0xB9, 
	0x6C, 0xAB, 0x02, 0x32, 0x0F, 0xB9, 0x16, 0xE7, 0x40, 0x66, 
	0xD7, 0xB1, 0x52, 0x01, 0xDA, 0xD9, 0xAC, 0xD5, 0xF9, 0xD2, 
	0xC7, 0xE9, 0x9C, 0xA6, 0xA9, 0xC0, 0xCC, 0x46, 0x02, 0xB5, 
	0x0A, 0x24, 0x3A, 0xBF, 0x8B, 0xFC, 0x27, 0x27, 0x39, 0xCC, 
	0x1C, 0xAF, 0x83, 0x35, 0x84, 0x4A, 0x94, 0x79, 0x4B, 0x88, 
	0xAE, 0xEA, 0x17, 0x4B, 0xC7, 0x23, 0x5F, 0xC9, 0x1C, 0x4D, 
	0x71, 0x5F, 0x4C, 0x6F, 0xAB, 0xEA, 0xDE, 0x4F, 0x14, 0x77, 
	0x43, 0xAE, 0x49, 0xD5, 0x78, 0xF3, 0x5C, 0x89, 0xF8, 0xA9, 
	0x96, 0x3A, 0x20, 0xD7, 0xE4, 0xDB, 0xAB, 0xD6, 0x9C, 0xAD, 
	0x1A, 0x23, 0x8B, 0x24, 0x62, 0x97, 0x53, 0xFF, 0x52, 0x6B, 
	0x2B, 0x24, 0x12, 0x76, 0xDF, 0xB9, 0xDD, 0x05, 0xF1, 0xCD, 
	0x56, 0x7A, 0xE3, 0xD5, 0x21, 0xB9, 0xCA, 0x59, 0x01, 0x9E, 
	0x1D, 0x8B, 0xA4, 0x5C, 0x96, 0x22, 0x5F, 0xE2, 0xF2, 0x83, 
	0xA2, 0xAE, 0x48, 0x14, 0x6A, 0x35, 0x4F, 0xB9, 0x82, 0xD6, 
	0x46, 0xC0, 0x83, 0x74, 0x2E, 0x2B, 0x90, 0xFC, 0xEB, 0xE2, 
	0x84, 0x7D, 0x3A, 0x42, 0xC7, 0xAC, 0x42, 0xF2, 0x91, 0xEF, 
	0x7B, 0x38, 0xE8, 0xAD, 0xBC, 0xAC, 0x55, 0xA0, 0xED, 0xAD, 
	0xED, 0xAC, 0x22, 0x68, 0xAA, 0xC0, 0x77, 0xBC, 0xED, 0x8E, 
	0xB8, 0x1A, 0xED, 0x55, 0x63, 0x4F, 0x23, 0xBF, 0x6F, 0x6D, 
	0x69, 0xFC, 0xFF, 0xFE, 0xB3, 0x9E, 0x34, 0x00, 0xF1, 0x3B, 
	0xCE, 0x8B, 0x31, 0x0D, 0x3E, 0x75, 0x44, 0x1C, 0xD5, 0x07, 
	0x90, 0xD3, 0x82, 0x12, 0xC3, 0x88, 0xF5, 0xA1, 0xCC, 0x7A, 
	0x96, 0xB3, 0x81, 0xE6, 0xD1, 0x98, 0xF4, 0x4D, 0xFA, 0x65, 
	0xB1, 0x0D, 0x76, 0x1B, 0x66, 0x9A, 0x3E, 0x03, 0x91, 0xCB, 
	0xAB, 0xA1, 0x1F, 0x27, 0x6A, 0xA5, 0xDA, 0xC9, 0xFE, 0x38, 
	0xD1, 0x89, 0xE4, 0x9E, 0xFD, 0xAE, 0xEF, 0x77, 0x22, 0xB2, 
	0xEB, 0x59, 0xBE, 0xA1, 0xE6, 0xD1, 0x98, 0xF4, 0x75, 0xFC, 
	0xED, 0x9C, 0x58, 0xDA, 0xD0, 0xD7, 0xB1, 0x1E, 0xD3, 0xA7, 
	0x29, 0xF5, 0x7F, 0x9E, 0x6D, 0x31, 0x12, 0xE5, 0xA5, 0x3F, 
	0xCF, 0x96, 0x52, 0xA3, 0x01, 0xD0, 0xD1, 0x3A, 0x24, 0xF2, 
	0x5D, 0x1A, 0x28, 0x73, 0x81, 0xCA, 0x37, 0x4A, 0x92, 0x53, 
	0xFA, 0xFF, 0x02, 0x60, 0x5D, 0x03, 0xCB, 0x52, 0xFA, 0x96, 
	0x51, 0xFA, 0x1B, 0xD1, 0x29, 0xA5, 0x00, 0x4C, 0x29, 0x05, 
	0x60, 0x4A, 0x29, 0xA5, 0x00, 0x4C, 0xE9, 0xDB, 0x09, 0xC0, 
	0xD5, 0x29, 0x1B, 0x52, 0xDA, 0x44, 0xB4, 0xDA, 0x7D, 0x93, 
	0x2B, 0xFD, 0xDF, 0xB5, 0xA6, 0xB4, 0xD1, 0xC1, 0x07, 0x1C, 
	0xF4, 0x5F, 0x28, 0x6A, 0x4E, 0x69, 0x1D, 0xA1, 0x5A, 0x60, 
	0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4E, 0x44, 0xAE, 0x42, 
	0x60, 0x82, 
};

wxBitmap& oberthur_png_to_wx_bitmap()
{
	static wxMemoryInputStream memIStream( oberthur_png, sizeof( oberthur_png ) );
	static wxImage image( memIStream, wxBITMAP_TYPE_PNG );
	static wxBitmap bmp( image );
	return bmp;
};


#endif //OBERTHUR_PNG_H
