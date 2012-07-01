/*
 * Codepage definitions for libcsplit
 *
 * Copyright (c) 2008-2012, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#if !defined( _LIBCSPLIT_CODEPAGE_H )
#define _LIBCSPLIT_CODEPAGE_H

#include <libcsplit/types.h>

#if defined( __cplusplus )
extern "C" {
#endif

/* The codepage definitions
 */
enum LIBCSPLIT_CODEPAGE
{
	LIBCSPLIT_CODEPAGE_ASCII				= 20127,

	LIBCSPLIT_CODEPAGE_ISO_8859_1			= 28591,
	LIBCSPLIT_CODEPAGE_ISO_8859_2			= 28592,
	LIBCSPLIT_CODEPAGE_ISO_8859_3			= 28593,
	LIBCSPLIT_CODEPAGE_ISO_8859_4			= 28594,
	LIBCSPLIT_CODEPAGE_ISO_8859_5			= 28595,
	LIBCSPLIT_CODEPAGE_ISO_8859_6			= 28596,
	LIBCSPLIT_CODEPAGE_ISO_8859_7			= 28597,
	LIBCSPLIT_CODEPAGE_ISO_8859_8			= 28598,
	LIBCSPLIT_CODEPAGE_ISO_8859_9			= 28599,
	LIBCSPLIT_CODEPAGE_ISO_8859_10			= 28600,
	LIBCSPLIT_CODEPAGE_ISO_8859_11			= 28601,
	LIBCSPLIT_CODEPAGE_ISO_8859_13			= 28603,
	LIBCSPLIT_CODEPAGE_ISO_8859_14			= 28604,
	LIBCSPLIT_CODEPAGE_ISO_8859_15			= 28605,
	LIBCSPLIT_CODEPAGE_ISO_8859_16			= 28606,

	LIBCSPLIT_CODEPAGE_KOI8_R			= 20866,
	LIBCSPLIT_CODEPAGE_KOI8_U			= 21866,

	LIBCSPLIT_CODEPAGE_WINDOWS_874			= 874,
	LIBCSPLIT_CODEPAGE_WINDOWS_932			= 932,
	LIBCSPLIT_CODEPAGE_WINDOWS_936			= 936,
	LIBCSPLIT_CODEPAGE_WINDOWS_949			= 949,
	LIBCSPLIT_CODEPAGE_WINDOWS_950			= 950,
	LIBCSPLIT_CODEPAGE_WINDOWS_1250			= 1250,
	LIBCSPLIT_CODEPAGE_WINDOWS_1251			= 1251,
	LIBCSPLIT_CODEPAGE_WINDOWS_1252			= 1252,
	LIBCSPLIT_CODEPAGE_WINDOWS_1253			= 1253,
	LIBCSPLIT_CODEPAGE_WINDOWS_1254			= 1254,
	LIBCSPLIT_CODEPAGE_WINDOWS_1255			= 1255,
	LIBCSPLIT_CODEPAGE_WINDOWS_1256			= 1256,
	LIBCSPLIT_CODEPAGE_WINDOWS_1257			= 1257,
	LIBCSPLIT_CODEPAGE_WINDOWS_1258			= 1258
};

#define LIBCSPLIT_CODEPAGE_US_ASCII			LIBCSPLIT_CODEPAGE_ASCII

#define LIBCSPLIT_CODEPAGE_ISO_WESTERN_EUROPEAN		LIBCSPLIT_CODEPAGE_ISO_8859_1
#define LIBCSPLIT_CODEPAGE_ISO_CENTRAL_EUROPEAN		LIBCSPLIT_CODEPAGE_ISO_8859_2
#define LIBCSPLIT_CODEPAGE_ISO_SOUTH_EUROPEAN		LIBCSPLIT_CODEPAGE_ISO_8859_3
#define LIBCSPLIT_CODEPAGE_ISO_NORTH_EUROPEAN		LIBCSPLIT_CODEPAGE_ISO_8859_4
#define LIBCSPLIT_CODEPAGE_ISO_CYRILLIC			LIBCSPLIT_CODEPAGE_ISO_8859_5
#define LIBCSPLIT_CODEPAGE_ISO_ARABIC			LIBCSPLIT_CODEPAGE_ISO_8859_6
#define LIBCSPLIT_CODEPAGE_ISO_GREEK			LIBCSPLIT_CODEPAGE_ISO_8859_7
#define LIBCSPLIT_CODEPAGE_ISO_HEBREW			LIBCSPLIT_CODEPAGE_ISO_8859_8
#define LIBCSPLIT_CODEPAGE_ISO_TURKISH			LIBCSPLIT_CODEPAGE_ISO_8859_9
#define LIBCSPLIT_CODEPAGE_ISO_NORDIC			LIBCSPLIT_CODEPAGE_ISO_8859_10
#define LIBCSPLIT_CODEPAGE_ISO_THAI			LIBCSPLIT_CODEPAGE_ISO_8859_11
#define LIBCSPLIT_CODEPAGE_ISO_BALTIC			LIBCSPLIT_CODEPAGE_ISO_8859_13
#define LIBCSPLIT_CODEPAGE_ISO_CELTIC			LIBCSPLIT_CODEPAGE_ISO_8859_14

#define LIBCSPLIT_CODEPAGE_ISO_LATIN_1			LIBCSPLIT_CODEPAGE_ISO_8859_1
#define LIBCSPLIT_CODEPAGE_ISO_LATIN_2			LIBCSPLIT_CODEPAGE_ISO_8859_2
#define LIBCSPLIT_CODEPAGE_ISO_LATIN_3			LIBCSPLIT_CODEPAGE_ISO_8859_3
#define LIBCSPLIT_CODEPAGE_ISO_LATIN_4			LIBCSPLIT_CODEPAGE_ISO_8859_4
#define LIBCSPLIT_CODEPAGE_ISO_LATIN_5			LIBCSPLIT_CODEPAGE_ISO_8859_9
#define LIBCSPLIT_CODEPAGE_ISO_LATIN_6			LIBCSPLIT_CODEPAGE_ISO_8859_10
#define LIBCSPLIT_CODEPAGE_ISO_LATIN_7			LIBCSPLIT_CODEPAGE_ISO_8859_13
#define LIBCSPLIT_CODEPAGE_ISO_LATIN_8			LIBCSPLIT_CODEPAGE_ISO_8859_14
#define LIBCSPLIT_CODEPAGE_ISO_LATIN_9			LIBCSPLIT_CODEPAGE_ISO_8859_15
#define LIBCSPLIT_CODEPAGE_ISO_LATIN_10			LIBCSPLIT_CODEPAGE_ISO_8859_16

#define LIBCSPLIT_CODEPAGE_KOI8_RUSSIAN			LIBCSPLIT_CODEPAGE_KOI8_R
#define LIBCSPLIT_CODEPAGE_KOI8_UKRAINIAN		LIBCSPLIT_CODEPAGE_KOI8_U

#define LIBCSPLIT_CODEPAGE_WINDOWS_THAI			LIBCSPLIT_CODEPAGE_WINDOWS_874
#define LIBCSPLIT_CODEPAGE_WINDOWS_JAPANESE		LIBCSPLIT_CODEPAGE_WINDOWS_932
#define LIBCSPLIT_CODEPAGE_WINDOWS_CHINESE_SIMPLIFIED	LIBCSPLIT_CODEPAGE_WINDOWS_936
#define LIBCSPLIT_CODEPAGE_WINDOWS_KOREAN		LIBCSPLIT_CODEPAGE_WINDOWS_949
#define LIBCSPLIT_CODEPAGE_WINDOWS_CHINESE_TRADITIONAL	LIBCSPLIT_CODEPAGE_WINDOWS_950
#define LIBCSPLIT_CODEPAGE_WINDOWS_CENTRAL_EUROPEAN	LIBCSPLIT_CODEPAGE_WINDOWS_1250
#define LIBCSPLIT_CODEPAGE_WINDOWS_CYRILLIC		LIBCSPLIT_CODEPAGE_WINDOWS_1251
#define LIBCSPLIT_CODEPAGE_WINDOWS_WESTERN_EUROPEAN	LIBCSPLIT_CODEPAGE_WINDOWS_1252
#define LIBCSPLIT_CODEPAGE_WINDOWS_GREEK			LIBCSPLIT_CODEPAGE_WINDOWS_1253
#define LIBCSPLIT_CODEPAGE_WINDOWS_TURKISH		LIBCSPLIT_CODEPAGE_WINDOWS_1254
#define LIBCSPLIT_CODEPAGE_WINDOWS_HEBREW		LIBCSPLIT_CODEPAGE_WINDOWS_1255
#define LIBCSPLIT_CODEPAGE_WINDOWS_ARABIC		LIBCSPLIT_CODEPAGE_WINDOWS_1256
#define LIBCSPLIT_CODEPAGE_WINDOWS_BALTIC		LIBCSPLIT_CODEPAGE_WINDOWS_1257
#define LIBCSPLIT_CODEPAGE_WINDOWS_VIETNAMESE		LIBCSPLIT_CODEPAGE_WINDOWS_1258

#if defined( __cplusplus )
}
#endif

#endif

