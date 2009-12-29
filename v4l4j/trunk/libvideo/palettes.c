/*
* Copyright (C) 2007-2008 Gilles Gigan (gilles.gigan@gmail.com)
* eResearch Centre, James Cook University (eresearch.jcu.edu.au)
*
* This program was developed as part of the ARCHER project
* (Australian Research Enabling Environment) funded by a
* Systemic Infrastructure Initiative (SII) grant and supported by the Australian
* Department of Innovation, Industry, Science and Research
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public  License as published by the
* Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
* or FITNESS FOR A PARTICULAR PURPOSE.
* See the GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
*
*/

#include "libvideo.h"
#include "log.h"
#include "libvideo-palettes.h"

const struct libvideo_palette libvideo_palettes[] = {
	// RGB palettes
	{
		RGB332,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_RGB332,
		8,
		"RGB332"
	},
	{
		RGB444,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_RGB444,
		16,
		"RGB444"
	},
	{
		RGB555,
		VIDEO_PALETTE_RGB555,
		V4L2_PIX_FMT_RGB555,
		16,
		"RGB555"
	},
	{
		RGB565,
		VIDEO_PALETTE_RGB565,
		V4L2_PIX_FMT_RGB565,
		16,
		"RGB565"
	},
	{
		RGB555X,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_RGB555X,
		16,
		"RGB555 BE"
	},
	{
		RGB565X,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_RGB565X,
		16,
		"RGB565 BE"
	},
	{
		BGR24,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_BGR24,
		24,
		"BGR24"
	},
	{
		RGB24,
		VIDEO_PALETTE_RGB24,
		V4L2_PIX_FMT_RGB24,
		24,
		"RGB24"
	},
	{
		BGR32,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_BGR32,
		32,
		"BGR32"
	},
	{
		RGB32,
		VIDEO_PALETTE_RGB32,
		V4L2_PIX_FMT_RGB32,
		32,
		"RGB32"
	},

	// Grey palettes
	{
		GREY,
		VIDEO_PALETTE_GREY,
		V4L2_PIX_FMT_GREY,
		8,
		"GREY"
	},
	{
		Y10,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_Y10,
		10,
		"Y10"
	},
	{
		Y16,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_Y16,
		16,
		"Y16"
	},

	// PAL8 format
	{
		PAL8,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_PAL8,
		8,
		"PAL8"
	},

	// YUV formats
	{
		YVU410,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_YVU410,
		9,
		"YVU410"
	},
	{
		YVU420,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_YVU420,
		12,
		"YVU420"
	},
	{
		YUYV,
		VIDEO_PALETTE_YUYV,
		V4L2_PIX_FMT_YUYV,
		16,
		"YUYV"
	},
	{
		YYUV,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_YYUV,
		16,
		"YYUV"
	},
	{
		YVYU,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_YVYU,
		16,
		"YVYU"
	},
	{
		UYVY,
		VIDEO_PALETTE_UYVY,
		V4L2_PIX_FMT_UYVY,
		16,
		"UYVY"
	},
	{
		VYUY,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_VYUY,
		16,
		"VYUY"
	},
	{
		YUV422P,
		VIDEO_PALETTE_YUV422P,
		V4L2_PIX_FMT_YUV422P,
		16,
		"YUV422P"
	},
	{
		YUV411P,
		VIDEO_PALETTE_YUV411P,
		V4L2_PIX_FMT_YUV411P,
		16,
		"YUV411P"
	},
	{
		Y41P,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_Y41P,
		12,
		"Y41P"
	},
	{
		YUV444,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_YUV444,
		16,
		"YUV444"
	},
	{
		YUV555,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_YUV555,
		16,
		"YUV555"
	},
	{
		YUV565,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_YUV565,
		16,
		"YUV565"
	},
	{
		YUV32,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_YUV32,
		32,
		"YUV32"
	},
	{
		YUV410,
		VIDEO_PALETTE_YUV410P,
		V4L2_PIX_FMT_YUV410,
		9,
		"YUV410"
	},
	{
		YUV420,
		VIDEO_PALETTE_YUV420,
		V4L2_PIX_FMT_YUV420,
		12,
		"YUV420"
	},
	{
		HI240,
		VIDEO_PALETTE_HI240,
		V4L2_PIX_FMT_HI240,
		8,
		"HI240"
	},
	{
		HM12,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_HM12,
		8,
		"HM12"
	},

	// two planes
	{
		NV12,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_NV12,
		12,
		"NV12"
	},
	{
		NV21,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_NV21,
		12,
		"NV21"
	},
	{
		NV16,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_NV16,
		16,
		"NV16"
	},
	{
		NV61,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_NV61,
		16,
		"NV61"
	},

	// bayer formats
	{
		SBGGR8,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_SBGGR8,
		8,
		"SBGGR8"
	},
	{
		SGBRG8,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_SGBRG8,
		8,
		"SGBRG8"
	},
	{
		SGRBG8,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_SGRBG8,
		8,
		"SGRBG8"
	},
	{
		SRGGB8,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_SRGGB8,
		8,
		"SRGGB8"
	},
	{
		SBGGR10,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_SBGGR10,
		10,
		"SBGGR10"
	},
	{
		SGBRG10,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_SGBRG10,
		10,
		"SGBRG10"
	},
	{
		SGRBG10,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_SGRBG10,
		10,
		"SGRBG10"
	},
	{
		SRGGB10,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_SRGGB10,
		10,
		"SRGGB10"
	},
	{
		SGRBG10DPCM8,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_SGRBG10DPCM8,
		8,
		"SGRBG10DPCM8"
	},
	{
		SBGGR16,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_SBGGR16,
		16,
		"SBGGR16"
	},

	// compressed formats
	{
		MJPEG,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_MJPEG,
		COMPRESSED_FORMAT_DEPTH,
		"MJPEG"
	},
		{
		JPEG,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_JPEG,
		COMPRESSED_FORMAT_DEPTH,
		"JPEG"
	},
	{
		MPEG,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_MPEG,
		COMPRESSED_FORMAT_DEPTH,
		"MPEG 1/2/4"
	},
/*	{
		DV,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_DV,
		, left out until more info
		"DV"
	}, */

	// vendor-specific
	{
		WNVA,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_WNVA,
		16,
		"WNVA"
	},
	{
		SN9C10X,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_SN9C10X,
		COMPRESSED_FORMAT_DEPTH,
		"SN9C10X"
	},
	{
		SN9C20X_I420,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_SN9C20X_I420,
		COMPRESSED_FORMAT_DEPTH,
		"SN9C20X_I420"
	},
	{
		PWC1,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_PWC1,
		COMPRESSED_FORMAT_DEPTH,
		"PWC1"
	},
	{
		PWC2,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_PWC2,
		COMPRESSED_FORMAT_DEPTH,
		"PWC2"
	},
	{
		ET61X251,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_ET61X251,
		COMPRESSED_FORMAT_DEPTH,
		"ET61X251"
	},
	{
		SPCA501,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_SPCA501,
		16,
		"SPCA501"
	},
	{
		SPCA505,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_SPCA505,
		16,
		"SPCA505"
	},
	{
		SPCA508,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_SPCA508,
		16,
		"SPCA508"
	},
	{
		SPCA561,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_SPCA561,
		COMPRESSED_FORMAT_DEPTH,
		"SPCA561"
	},
	{
		PAC207,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_PAC207,
		COMPRESSED_FORMAT_DEPTH,
		"PAC207"
	},
	{
		MR97310A,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_MR97310A,
		COMPRESSED_FORMAT_DEPTH,
		"MR97310A"
	},
	{
		SQ905C,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_SQ905C,
		COMPRESSED_FORMAT_DEPTH,
		"SQ905C"
	},
	{
		PJPG,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_PJPG,
		COMPRESSED_FORMAT_DEPTH,
		"PJPG"
	},
	{
		OV511,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_OV511,
		COMPRESSED_FORMAT_DEPTH,
		"OV511"
	},
	{
		OV518,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_OV518,
		COMPRESSED_FORMAT_DEPTH,
		"OV518"
	},
	{
		STV0680,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_STV0680,
		COMPRESSED_FORMAT_DEPTH,
		"STV0680"
	},
	{
		TM6000,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_TM6000,
		COMPRESSED_FORMAT_DEPTH,
		"TM6000"
	},


//Dont use the following, use YUV420, YUYV & YUV411 instead !!
	{
		YUV420P,
		VIDEO_PALETTE_YUV420P,
		0,
		12,
		"YUV420-w"
	},
		{
		YUV422,
		VIDEO_PALETTE_YUV422,
		0,
		8,
		"YUYV-w"
	},
	{
		YUV411,
		VIDEO_PALETTE_YUV411,
		V4L2_PIX_FMT_YUV411P,
		16,
		"YUV411-w"
	}

};

const int libvideo_palettes_size=ARRAY_SIZE(libvideo_palettes);
