#ifndef CANCEL_PNG_H
#define CANCEL_PNG_H

#include <wx/mstream.h>
#include <wx/image.h>
#include <wx/bitmap.h>

static const unsigned char cancel_png[] = 
{
	0x89, 0x50, 0x4E, 0x47, 0x0D, 0x0A, 0x1A, 0x0A, 0x00, 0x00, 
	0x00, 0x0D, 0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x18, 
	0x00, 0x00, 0x00, 0x18, 0x08, 0x06, 0x00, 0x00, 0x00, 0xE0, 
	0x77, 0x3D, 0xF8, 0x00, 0x00, 0x00, 0x04, 0x67, 0x41, 0x4D, 
	0x41, 0x00, 0x00, 0xD9, 0x04, 0xDC, 0xB2, 0xDA, 0x02, 0x00, 
	0x00, 0x00, 0x06, 0x62, 0x4B, 0x47, 0x44, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0xF9, 0x43, 0xBB, 0x7F, 0x00, 0x00, 0x00, 
	0x09, 0x70, 0x48, 0x59, 0x73, 0x00, 0x00, 0x00, 0x48, 0x00, 
	0x00, 0x00, 0x48, 0x00, 0x46, 0xC9, 0x6B, 0x3E, 0x00, 0x00, 
	0x00, 0x09, 0x76, 0x70, 0x41, 0x67, 0x00, 0x00, 0x00, 0x18, 
	0x00, 0x00, 0x00, 0x18, 0x00, 0x78, 0x4C, 0xA5, 0xA6, 0x00, 
	0x00, 0x06, 0x7B, 0x49, 0x44, 0x41, 0x54, 0x48, 0xC7, 0x85, 
	0x96, 0x5B, 0x6C, 0x54, 0xC7, 0x19, 0x80, 0xBF, 0x39, 0xB7, 
	0x3D, 0x97, 0xBD, 0xDA, 0x60, 0x7C, 0xC1, 0x18, 0xDB, 0xA4, 
	0x26, 0x18, 0xEA, 0x26, 0x7E, 0xC1, 0x01, 0x04, 0x52, 0x21, 
	0x95, 0xAA, 0xD2, 0xB4, 0x48, 0x4D, 0x54, 0xFA, 0xD4, 0x56, 
	0xEA, 0x63, 0x95, 0x06, 0x55, 0xA1, 0xEA, 0x53, 0x5A, 0xA9, 
	0x2F, 0x7D, 0xA8, 0x50, 0x5B, 0x7A, 0x91, 0xA2, 0xAA, 0x6A, 
	0x1B, 0x89, 0xB4, 0x11, 0x6D, 0x1A, 0x25, 0x88, 0x34, 0x0D, 
	0x4D, 0x5C, 0x2E, 0x31, 0x08, 0x61, 0x30, 0xC6, 0xD8, 0x38, 
	0x36, 0x5E, 0x1B, 0x7B, 0xBD, 0xDE, 0xF5, 0xDE, 0x77, 0xCF, 
	0x65, 0x4E, 0x1F, 0x36, 0x40, 0x40, 0x55, 0x3B, 0xD2, 0xAF, 
	0x79, 0x98, 0x99, 0xEF, 0xD3, 0xFC, 0xFF, 0x8C, 0x66, 0x00, 
	0x68, 0x24, 0x93, 0x2C, 0x41, 0xAC, 0xB1, 0x77, 0xEF, 0xB1, 
	0xE0, 0xC8, 0x91, 0xF1, 0xC6, 0x81, 0x03, 0x3F, 0x58, 0xD4, 
	0xB4, 0x78, 0x3D, 0x1E, 0xE7, 0x7F, 0xB5, 0x51, 0xE0, 0x4D, 
	0x10, 0xC5, 0xBE, 0xBE, 0x5D, 0xFE, 0xE1, 0xC3, 0x6F, 0xFA, 
	0x87, 0x0F, 0x9F, 0xAD, 0x0C, 0x0C, 0xEC, 0x19, 0x03, 0x65, 
	0xFE, 0x93, 0x39, 0xEA, 0x49, 0x60, 0x7B, 0x24, 0x92, 0x88, 
	0x8F, 0x8C, 0x7C, 0xDD, 0x38, 0x78, 0xF0, 0xBB, 0xCA, 0xDE, 
	0xBD, 0x9F, 0x51, 0x5A, 0x5B, 0xFB, 0x23, 0x52, 0x96, 0xAB, 
	0x77, 0xEF, 0xCE, 0xFC, 0x78, 0x68, 0xA8, 0x7E, 0x74, 0x69, 
	0x89, 0x5F, 0x3E, 0x06, 0xCF, 0x68, 0x1A, 0x37, 0xA4, 0x14, 
	0x87, 0x9E, 0x78, 0x62, 0xBB, 0xB5, 0x6F, 0xDF, 0x31, 0xED, 
	0xD0, 0xA1, 0x2F, 0x29, 0x3B, 0x76, 0xF4, 0x28, 0x9A, 0xD6, 
	0x99, 0xAA, 0x56, 0x67, 0xEB, 0xD9, 0xEC, 0x72, 0x0E, 0xA4, 
	0x7A, 0x02, 0xEC, 0xD6, 0xA1, 0xA1, 0xA3, 0xC6, 0xFE, 0xFD, 
	0xC7, 0xC5, 0xCE, 0x9D, 0xFD, 0x38, 0x8E, 0x22, 0xE2, 0xF1, 
	0x94, 0x6A, 0x18, 0x83, 0x8A, 0xEB, 0xD6, 0xD6, 0xC7, 0xC6, 
	0x6E, 0xF5, 0x0C, 0x0C, 0x34, 0x26, 0xB3, 0x59, 0x26, 0x3E, 
	0x81, 0x2F, 0x02, 0x1D, 0x52, 0xF2, 0x6A, 0x77, 0xF7, 0x80, 
	0xF5, 0xCC, 0x33, 0x2F, 0xAB, 0xBB, 0x77, 0xBF, 0x20, 0x3A, 
	0x3A, 0x1C, 0x1C, 0x47, 0x57, 0x92, 0xC9, 0x7E, 0x35, 0x08, 
	0xBA, 0x95, 0xF5, 0xF5, 0x5B, 0x57, 0x0A, 0x85, 0x25, 0xE5, 
	0x1C, 0xB4, 0x2F, 0x97, 0x4A, 0x5F, 0x96, 0xBE, 0xDF, 0x8B, 
	0xEF, 0x43, 0xB9, 0x0C, 0x41, 0x80, 0xD8, 0xB6, 0x6D, 0xAB, 
	0x31, 0x32, 0x72, 0x2C, 0xB1, 0x67, 0xCF, 0x37, 0x57, 0x67, 
	0x67, 0xE3, 0xA7, 0x5A, 0x5A, 0x1E, 0xA4, 0xE5, 0x0A, 0x88, 
	0x62, 0x67, 0xE7, 0x80, 0x35, 0x32, 0xF2, 0x43, 0xF5, 0xE9, 
	0xA7, 0x9F, 0x17, 0xA9, 0x94, 0x4D, 0xB5, 0x0A, 0xD5, 0x2A, 
	0x28, 0x8A, 0x56, 0x6F, 0x34, 0xF6, 0xCF, 0x54, 0x2A, 0x9F, 
	0x9F, 0x80, 0x88, 0xEA, 0x40, 0x87, 0x5C, 0x5F, 0x7F, 0x2E, 
	0x9A, 0xC9, 0xF4, 0xA6, 0x12, 0x09, 0x94, 0x68, 0x14, 0x7C, 
	0x1F, 0xA4, 0x44, 0xC4, 0x62, 0x09, 0xD5, 0x34, 0x77, 0x68, 
	0x52, 0xD6, 0x0A, 0x4B, 0x4B, 0xB7, 0x7F, 0xD4, 0xDD, 0x5D, 
	0x1F, 0xCB, 0xE7, 0xC5, 0xB3, 0x3D, 0x3D, 0xDB, 0xAD, 0xE1, 
	0xE1, 0x97, 0xD5, 0xA7, 0x9E, 0xFA, 0x9A, 0x68, 0x6D, 0xB5, 
	0xF1, 0xFD, 0xE6, 0x9A, 0x62, 0x91, 0xEA, 0x87, 0x1F, 0x32, 
	0xF6, 0xEE, 0xBB, 0xE1, 0xB9, 0xB5, 0xB5, 0x2B, 0xA3, 0x30, 
	0xAA, 0xF6, 0x42, 0x8B, 0x90, 0xF2, 0xD9, 0x42, 0x3E, 0xBF, 
	0x2D, 0xBE, 0xBA, 0x4A, 0x2A, 0x16, 0x7B, 0x54, 0xE2, 0x38, 
	0x09, 0xC5, 0x30, 0x76, 0xE8, 0x9E, 0xD7, 0x28, 0xDC, 0xB8, 
	0x31, 0xF5, 0xE4, 0xA6, 0x4D, 0xDD, 0xD6, 0xD0, 0xD0, 0x71, 
	0x75, 0xD7, 0xAE, 0xE7, 0x1F, 0xC0, 0x3D, 0x0F, 0xCA, 0x65, 
	0xAA, 0x17, 0x2F, 0x72, 0xF9, 0xEC, 0x59, 0xCE, 0x67, 0xB3, 
	0xEE, 0x02, 0x9C, 0xBB, 0x0D, 0xE7, 0x55, 0x07, 0x94, 0x18, 
	0xF4, 0x78, 0x61, 0xB8, 0x33, 0x9F, 0xCB, 0x59, 0xF1, 0xD5, 
	0x55, 0x5A, 0x1C, 0x07, 0xC5, 0xB6, 0x9B, 0x92, 0x20, 0x40, 
	0xD8, 0x76, 0x52, 0x31, 0x8C, 0x41, 0x1D, 0x92, 0xC6, 0xD6, 
	0xAD, 0xCF, 0xA9, 0x83, 0x83, 0x47, 0x44, 0x2A, 0xF5, 0x28, 
	0xFC, 0xD2, 0x25, 0xC6, 0xDE, 0x7F, 0x9F, 0x0B, 0xB9, 0x5C, 
	0xB8, 0x0C, 0x53, 0xF7, 0xE0, 0xD4, 0x18, 0x4C, 0xAA, 0xCB, 
	0xE0, 0x86, 0xB0, 0xEA, 0x40, 0x54, 0x40, 0x7F, 0xA9, 0x50, 
	0x30, 0xA3, 0xAB, 0xAB, 0xA4, 0x1C, 0x07, 0xC5, 0xB2, 0x20, 
	0x08, 0x9A, 0x3B, 0xB1, 0xAC, 0xB8, 0x1A, 0x8B, 0x7D, 0x4E, 
	0x6D, 0x6F, 0x1F, 0x14, 0x89, 0x84, 0xF5, 0x69, 0x78, 0xED, 
	0xEA, 0x55, 0xAE, 0x8C, 0x8E, 0x72, 0x69, 0x7D, 0x5D, 0xDE, 
	0x83, 0xE9, 0x59, 0xF8, 0xF5, 0x15, 0x38, 0x93, 0x87, 0x92, 
	0x0A, 0xC8, 0x15, 0xC8, 0x79, 0x30, 0x9F, 0x80, 0xB8, 0x12, 
	0x86, 0xBD, 0xA5, 0x62, 0xD1, 0x8C, 0xE7, 0x72, 0x24, 0x2C, 
	0xAB, 0x29, 0xB9, 0x9F, 0x2E, 0xCB, 0x32, 0xD0, 0x75, 0xED, 
	0x01, 0xBC, 0x52, 0xA1, 0x76, 0xFD, 0x3A, 0xD7, 0x2E, 0x5E, 
	0xE4, 0x72, 0xA1, 0x10, 0x2E, 0xC3, 0xF4, 0x34, 0xFC, 0xE6, 
	0xDF, 0x70, 0x2A, 0x03, 0x19, 0x00, 0x15, 0xC0, 0x02, 0x79, 
	0x0F, 0xB2, 0x1E, 0xCC, 0x25, 0x20, 0xA2, 0x41, 0x7F, 0xA9, 
	0x54, 0xB2, 0xEC, 0x5C, 0x8E, 0xA4, 0x69, 0x3E, 0x4C, 0xD7, 
	0xA7, 0xA3, 0x5E, 0xA7, 0x76, 0xF3, 0x26, 0xE3, 0x97, 0x2F, 
	0x73, 0xB5, 0x58, 0x0C, 0x97, 0x61, 0xEA, 0x36, 0xFC, 0x6A, 
	0x14, 0x4E, 0xE5, 0x60, 0x05, 0x08, 0x1F, 0x08, 0x7C, 0xA0, 
	0x0D, 0xE4, 0x1C, 0xAC, 0xF9, 0x70, 0x37, 0x0E, 0x86, 0x09, 
	0xFD, 0x96, 0xEF, 0xDB, 0x1D, 0xD1, 0x28, 0x7A, 0x2A, 0x05, 
	0x61, 0x08, 0x52, 0x3E, 0x8C, 0x5A, 0x8D, 0xFC, 0xED, 0xDB, 
	0x5C, 0xCF, 0x64, 0xE4, 0x82, 0x94, 0x33, 0x93, 0x70, 0xF2, 
	0x02, 0xFC, 0x65, 0x05, 0x96, 0xEF, 0xC3, 0x1F, 0x08, 0x00, 
	0x2A, 0xCD, 0x4E, 0xAE, 0xC0, 0x9A, 0x09, 0xE9, 0x7D, 0xB6, 
	0xBD, 0x6D, 0x78, 0xEB, 0xD6, 0xFE, 0x54, 0x5F, 0x9F, 0xA2, 
	0x44, 0x22, 0xCD, 0xD1, 0x30, 0x7C, 0x18, 0x8A, 0x82, 0x6E, 
	0x9A, 0x08, 0xDF, 0x2F, 0xCF, 0xD7, 0xEB, 0xAF, 0xBD, 0xEE, 
	0x79, 0xAF, 0x2E, 0x3E, 0x06, 0x07, 0xD0, 0x1E, 0xB9, 0xFE, 
	0x2D, 0x2D, 0x18, 0x8D, 0x86, 0xEA, 0x25, 0x93, 0x3D, 0x66, 
	0x67, 0x67, 0xB7, 0xD3, 0xD5, 0xA5, 0x0A, 0xDB, 0x7E, 0x08, 
	0x95, 0x12, 0x14, 0x05, 0x84, 0x00, 0xC0, 0x48, 0x26, 0xD9, 
	0xDE, 0xD7, 0x17, 0xD9, 0xA2, 0xAA, 0x4F, 0x7E, 0xAB, 0x58, 
	0xEC, 0x92, 0x41, 0xB0, 0xE2, 0xD9, 0x76, 0xD8, 0x31, 0x37, 
	0xF7, 0xA8, 0x60, 0x3E, 0x1E, 0xA7, 0x3D, 0x12, 0xA1, 0xE4, 
	0xFB, 0xB6, 0x69, 0x9A, 0x87, 0x63, 0x8A, 0xF2, 0x7D, 0x05, 
	0x76, 0x51, 0xAF, 0x0B, 0x84, 0x00, 0xC3, 0x00, 0x21, 0xF0, 
	0x8B, 0x45, 0x84, 0xA6, 0xA1, 0xDA, 0x36, 0x34, 0x1A, 0x50, 
	0xA9, 0xA0, 0x15, 0x0A, 0x46, 0x5C, 0x51, 0x0E, 0x06, 0xB6, 
	0x8D, 0x1B, 0x86, 0x3F, 0xCD, 0x07, 0xC1, 0xF9, 0xEA, 0xC0, 
	0x80, 0x37, 0x59, 0x2A, 0x31, 0xBC, 0xB4, 0x84, 0xFA, 0x86, 
	0x10, 0xEC, 0x8E, 0xC5, 0xC8, 0x07, 0x81, 0x13, 0xD3, 0xB4, 
	0x17, 0x74, 0x5D, 0x3F, 0xAE, 0x68, 0xDA, 0x67, 0x91, 0x52, 
	0xC1, 0x75, 0xC1, 0x75, 0xC1, 0xF3, 0xA8, 0x16, 0x0A, 0xCC, 
	0xCD, 0xCC, 0x50, 0x5A, 0x5F, 0xC7, 0x51, 0x55, 0x54, 0xD7, 
	0x6D, 0x4A, 0xA4, 0x04, 0x4D, 0xD3, 0x84, 0xAA, 0xF6, 0x29, 
	0x42, 0xF4, 0x47, 0x14, 0x65, 0x29, 0xEB, 0xBA, 0xF3, 0x03, 
	0xD1, 0xA8, 0x7C, 0x25, 0x9B, 0x45, 0x84, 0x1B, 0x36, 0x90, 
	0xF7, 0xFD, 0x94, 0xA3, 0xEB, 0xDF, 0xD0, 0x75, 0xFD, 0x25, 
	0x11, 0x89, 0xF4, 0x62, 0x59, 0x60, 0x9A, 0xCD, 0xB0, 0x2C, 
	0x2A, 0x52, 0x32, 0xF7, 0xF1, 0xC7, 0x2C, 0xA5, 0xD3, 0x28, 
	0x9A, 0xC6, 0x96, 0xFE, 0x7E, 0xB6, 0xF4, 0xF6, 0x12, 0x51, 
	0xD5, 0xA6, 0xE4, 0xBE, 0xAC, 0x5E, 0x97, 0xD2, 0x75, 0xAF, 
	0x79, 0x9E, 0xF7, 0x93, 0x75, 0xD7, 0x7D, 0x5B, 0x87, 0xAA, 
	0xFA, 0xA2, 0xA6, 0xB5, 0x47, 0x35, 0xED, 0xDB, 0xBA, 0xAE, 
	0x7F, 0x4F, 0x98, 0x66, 0x0F, 0xB6, 0x0D, 0x8E, 0x03, 0xD1, 
	0x28, 0x61, 0x22, 0x41, 0x55, 0xD3, 0x98, 0x9F, 0x9B, 0x63, 
	0x65, 0x61, 0xC1, 0x5B, 0xF1, 0xBC, 0x85, 0x86, 0xEF, 0x57, 
	0xC3, 0x4A, 0xC5, 0x09, 0x23, 0x11, 0x61, 0x77, 0x76, 0xA2, 
	0x59, 0x16, 0xA8, 0x6A, 0xB3, 0x36, 0x8A, 0x22, 0x04, 0xB4, 
	0x2B, 0x61, 0x38, 0x18, 0x81, 0x92, 0x27, 0xE5, 0xAC, 0xFA, 
	0xA2, 0x69, 0x1E, 0x8D, 0xEA, 0xFA, 0x4B, 0x8A, 0x69, 0x6E, 
	0xC1, 0xB2, 0xC0, 0xB6, 0x21, 0x1A, 0x85, 0x54, 0x8A, 0x8A, 
	0xAE, 0x93, 0xBE, 0x73, 0x87, 0xCC, 0xEC, 0xAC, 0xBF, 0xE8, 
	0xBA, 0x97, 0xFF, 0x01, 0xBF, 0x5D, 0x85, 0xEB, 0xAD, 0x9E, 
	0xD7, 0x29, 0x0A, 0x85, 0x56, 0x69, 0x18, 0xC2, 0xEA, 0xEA, 
	0x42, 0xB7, 0xED, 0x66, 0x45, 0x85, 0x00, 0x21, 0x84, 0x08, 
	0xC3, 0x36, 0xE9, 0xFB, 0xBD, 0xD9, 0x46, 0x63, 0x5A, 0xFD, 
	0x22, 0x1C, 0x8D, 0x19, 0xC6, 0x7E, 0x2B, 0x1A, 0xD5, 0x85, 
	0xE3, 0x80, 0xE3, 0x10, 0xB6, 0xB6, 0x52, 0xD6, 0x75, 0x96, 
	0x26, 0x27, 0x59, 0x9B, 0x9E, 0x76, 0xE7, 0x5C, 0xF7, 0x83, 
	0xF7, 0xE0, 0xC4, 0xEF, 0xE1, 0x6F, 0x33, 0x70, 0x3D, 0x09, 
	0xF9, 0x94, 0xE7, 0x6D, 0xD6, 0xD6, 0xD6, 0xDA, 0x02, 0x21, 
	0x14, 0x73, 0xF3, 0x66, 0x74, 0xC7, 0x69, 0xD6, 0x03, 0x08, 
	0x3C, 0x8F, 0xE5, 0x7C, 0x5E, 0xBB, 0x96, 0xCD, 0xDE, 0x50, 
	0x0F, 0x05, 0xC1, 0x17, 0xD4, 0x20, 0x18, 0x36, 0x23, 0x11, 
	0xC3, 0x4C, 0xA5, 0xA0, 0xAD, 0x8D, 0xB2, 0x69, 0xB2, 0x3C, 
	0x31, 0xC1, 0xDA, 0xCC, 0x4C, 0xF5, 0x8E, 0xEB, 0xFE, 0xF3, 
	0x0C, 0x9C, 0x38, 0x0D, 0xFF, 0xF2, 0xA0, 0x50, 0x83, 0xCA, 
	0x5D, 0xB8, 0x6B, 0x42, 0xA6, 0xD5, 0xF7, 0x3B, 0x8D, 0x5C, 
	0x6E, 0x93, 0x0C, 0x02, 0x35, 0xB2, 0x79, 0x33, 0xBA, 0x69, 
	0x22, 0x6B, 0x35, 0x56, 0xD2, 0x69, 0x66, 0xD3, 0xE9, 0xEA, 
	0x9D, 0x4A, 0xE5, 0x03, 0xF5, 0x00, 0xEC, 0x8C, 0x06, 0xC1, 
	0xB0, 0xF4, 0xBC, 0x98, 0xBE, 0x71, 0x23, 0x5E, 0x4B, 0x0B, 
	0xD9, 0x89, 0x09, 0xD6, 0xA6, 0xA6, 0xCA, 0x53, 0xAE, 0x7B, 
	0xE6, 0xEF, 0xF0, 0xF3, 0x53, 0x30, 0xEA, 0x41, 0xF9, 0xFE, 
	0xD9, 0x2E, 0x43, 0x6D, 0x1C, 0xE6, 0x6D, 0x58, 0x6E, 0xF1, 
	0xFD, 0x36, 0x33, 0x9B, 0xED, 0x92, 0x9E, 0xA7, 0xA9, 0x1B, 
	0x37, 0x52, 0x48, 0xA7, 0x49, 0xDF, 0xBC, 0x49, 0xB6, 0x5A, 
	0x4D, 0xCF, 0xC3, 0x5B, 0xAA, 0x80, 0x72, 0x0A, 0x9C, 0xB8, 
	0x94, 0xFD, 0x6A, 0x22, 0x61, 0x37, 0xCA, 0x65, 0x72, 0x93, 
	0x93, 0x85, 0x1B, 0x9E, 0x77, 0xFA, 0x34, 0xFC, 0xE2, 0xAF, 
	0xF0, 0xD1, 0x57, 0xA1, 0x76, 0xEB, 0xB1, 0x37, 0xD9, 0x87, 
	0xC6, 0x57, 0x60, 0xC1, 0x80, 0x85, 0x96, 0x20, 0x48, 0x3A, 
	0xB9, 0xDC, 0x96, 0x40, 0x4A, 0xBD, 0x94, 0xC9, 0x90, 0xC9, 
	0x64, 0x16, 0xC7, 0xE1, 0x4F, 0xEF, 0xC0, 0x5B, 0xEA, 0x0C, 
	0xAC, 0xD7, 0x61, 0xBE, 0x45, 0x51, 0xD4, 0x8D, 0xC9, 0x64, 
	0x8F, 0xEB, 0xFB, 0xE5, 0x6B, 0xD9, 0xEC, 0x1B, 0x7F, 0x0E, 
	0xC3, 0x93, 0x6F, 0xC3, 0xB5, 0x05, 0x68, 0x7C, 0xE7, 0xBF, 
	0xFC, 0x28, 0x5E, 0x69, 0x76, 0xEE, 0x0D, 0xB8, 0x07, 0xCC, 
	0x6F, 0x10, 0x22, 0x9A, 0x8C, 0x46, 0x3B, 0x4A, 0x9E, 0xB7, 
	0xFA, 0x51, 0xA1, 0xF0, 0xBB, 0xD3, 0xF0, 0x87, 0x0B, 0x30, 
	0xAF, 0x02, 0xC1, 0x1C, 0xE4, 0xF2, 0x42, 0x2C, 0x2A, 0x61, 
	0x28, 0xEF, 0xD4, 0x6A, 0xE3, 0xA7, 0x6B, 0xB5, 0x3F, 0xBE, 
	0x17, 0x86, 0xE3, 0x80, 0xFB, 0x33, 0xFE, 0x6F, 0xF3, 0x6E, 
	0xC1, 0x4A, 0x43, 0x51, 0xEE, 0xF9, 0x52, 0xFA, 0xB7, 0x6A, 
	0xB5, 0x0B, 0xAF, 0xD7, 0xEB, 0xAF, 0x5D, 0x85, 0x59, 0x20, 
	0xF8, 0x0F, 0xAE, 0x0E, 0x2A, 0xBF, 0x91, 0x93, 0x92, 0x58, 
	0x00, 0x00, 0x00, 0x25, 0x74, 0x45, 0x58, 0x74, 0x64, 0x61, 
	0x74, 0x65, 0x3A, 0x63, 0x72, 0x65, 0x61, 0x74, 0x65, 0x00, 
	0x32, 0x30, 0x31, 0x30, 0x2D, 0x30, 0x32, 0x2D, 0x32, 0x33, 
	0x54, 0x31, 0x38, 0x3A, 0x31, 0x34, 0x3A, 0x32, 0x31, 0x2D, 
	0x30, 0x37, 0x3A, 0x30, 0x30, 0x53, 0x8C, 0xE7, 0xC7, 0x00, 
	0x00, 0x00, 0x25, 0x74, 0x45, 0x58, 0x74, 0x64, 0x61, 0x74, 
	0x65, 0x3A, 0x6D, 0x6F, 0x64, 0x69, 0x66, 0x79, 0x00, 0x32, 
	0x30, 0x31, 0x30, 0x2D, 0x30, 0x32, 0x2D, 0x32, 0x33, 0x54, 
	0x31, 0x38, 0x3A, 0x31, 0x34, 0x3A, 0x32, 0x31, 0x2D, 0x30, 
	0x37, 0x3A, 0x30, 0x30, 0x22, 0xD1, 0x5F, 0x7B, 0x00, 0x00, 
	0x00, 0x35, 0x74, 0x45, 0x58, 0x74, 0x4C, 0x69, 0x63, 0x65, 
	0x6E, 0x73, 0x65, 0x00, 0x68, 0x74, 0x74, 0x70, 0x3A, 0x2F, 
	0x2F, 0x63, 0x72, 0x65, 0x61, 0x74, 0x69, 0x76, 0x65, 0x63, 
	0x6F, 0x6D, 0x6D, 0x6F, 0x6E, 0x73, 0x2E, 0x6F, 0x72, 0x67, 
	0x2F, 0x6C, 0x69, 0x63, 0x65, 0x6E, 0x73, 0x65, 0x73, 0x2F, 
	0x4C, 0x47, 0x50, 0x4C, 0x2F, 0x32, 0x2E, 0x31, 0x2F, 0x3B, 
	0xC1, 0xB4, 0x18, 0x00, 0x00, 0x00, 0x14, 0x74, 0x45, 0x58, 
	0x74, 0x53, 0x6F, 0x75, 0x72, 0x63, 0x65, 0x00, 0x43, 0x72, 
	0x79, 0x73, 0x74, 0x61, 0x6C, 0x20, 0x43, 0x6C, 0x65, 0x61, 
	0x72, 0xF5, 0xE2, 0xE7, 0xA8, 0x00, 0x00, 0x00, 0x3A, 0x74, 
	0x45, 0x58, 0x74, 0x53, 0x6F, 0x75, 0x72, 0x63, 0x65, 0x5F, 
	0x55, 0x52, 0x4C, 0x00, 0x68, 0x74, 0x74, 0x70, 0x3A, 0x2F, 
	0x2F, 0x63, 0x6F, 0x6D, 0x6D, 0x6F, 0x6E, 0x73, 0x2E, 0x77, 
	0x69, 0x6B, 0x69, 0x6D, 0x65, 0x64, 0x69, 0x61, 0x2E, 0x6F, 
	0x72, 0x67, 0x2F, 0x77, 0x69, 0x6B, 0x69, 0x2F, 0x43, 0x72, 
	0x79, 0x73, 0x74, 0x61, 0x6C, 0x5F, 0x43, 0x6C, 0x65, 0x61, 
	0x72, 0xAF, 0xBE, 0x45, 0x63, 0x00, 0x00, 0x00, 0x00, 0x49, 
	0x45, 0x4E, 0x44, 0xAE, 0x42, 0x60, 0x82, 
};

wxBitmap& cancel_png_to_wx_bitmap()
{
	static wxMemoryInputStream memIStream( cancel_png, sizeof( cancel_png ) );
	static wxImage image( memIStream, wxBITMAP_TYPE_PNG );
	static wxBitmap bmp( image );
	return bmp;
};


#endif //CANCEL_PNG_H
