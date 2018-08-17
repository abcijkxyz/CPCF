/*
//
//               INTEL CORPORATION PROPRIETARY INFORMATION
//  This software is supplied under the terms of a license agreement or
//  nondisclosure agreement with Intel Corporation and may not be copied
//  or disclosed except in accordance with the terms of that agreement.
//        Copyright (c) 1998-2006 Intel Corporation. All Rights Reserved.
//
//  Intel?Integrated Performance Primitives Intel?JPEG Library -
//        Intel?IPP Version for Windows*
//
//  By downloading and installing this sample, you hereby agree that the
//  accompanying Materials are being provided to you under the terms and
//  conditions of the End User License Agreement for the Intel?Integrated
//  Performance Primitives product previously accepted by you. Please refer
//  to the file ippEULA.rtf or ippEULA.txt located in the root directory of your Intel?IPP product
//  installation for more information.
//
//  JPEG is an international standard promoted by ISO/IEC and other organizations.
//  Implementations of these standards, or the standard enabled platforms may
//  require licenses from various entities, including Intel Corporation.
//
*/

#ifndef __ENCODER_PARSER_H__
#define __ENCODER_PARSER_H__

#ifdef _FULLDIAG
#pragma message("  Encoder_Parser.h")
#endif

#ifndef __OWN_H__
#include "own.h"
#endif
#ifndef __VERSION_H__
#include "version.h"
#endif
#ifndef __ENCODE_BUFFER_H__
#include "encode_buffer.h"
#endif




/* ///////////////////////////////////////////////////////////////////////////
// Function Prototypes
*/

OWNAPI(IJLERR,EP_Write_SOI,(
  STATE* pState));

OWNAPI(IJLERR,EP_Write_APP0,(
  int    version,
  int    units,
  int    Xdensity,
  int    Ydensity,
  Ipp8u* pThumbnail,
  int    thWidth,
  int    thHeight,
  STATE* pState));

OWNAPI(IJLERR,EP_Write_COM,(
  Ipp8u* pData,
  int    nDataBytes,
  STATE* pState));

OWNAPI(IJLERR,EP_Write_EOI,(
  STATE* pState));

OWNAPI(IJLERR,EP_Write_SOF,(
  FRAME* pFrame,
  STATE* pState));

OWNAPI(IJLERR,EP_Write_SOF2,(
  FRAME* pFrame,
  STATE* pState));

OWNAPI(IJLERR,EP_Write_DQT,(
  int    precision,
  int    ident,
  Ipp8u  quant[64],
  STATE* pState));

OWNAPI(IJLERR,EP_Write_DHT_Ex,(
  int    type,
  int    ident,
  Ipp8u* pBits,
  Ipp8u* pVals,
  STATE* pState));

OWNAPI(IJLERR,EP_Write_DHTs,(
  JPEG_PROPERTIES* jprops,
  STATE*           pState));

OWNAPI(IJLERR,EP_Write_SOS,(
  int    DCHuff[4],
  int    ACHuff[4],
  SCAN*  pScan,
  FRAME* pFrame,
  STATE* pState));

OWNAPI(IJLERR,EP_Write_DRI,(
  int    restart_interv,
  STATE* pState));

OWNAPI(IJLERR,EP_Write_RST,(
  int    restart_num,
  STATE* pState));

OWNAPI(IJLERR,EP_Write_APP14,(
  int    version,
  int    transform,
  int    flag0,
  int    flag1,
  STATE* pState));


#endif /* __ENCODER_PARSER_H__ */

