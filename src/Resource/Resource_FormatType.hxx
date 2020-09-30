// Created on: 1995-04-20
// Created by: Tony GEORGIADES
// Copyright (c) 1995-1999 Matra Datavision
// Copyright (c) 1999-2014 OPEN CASCADE SAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.

#ifndef _Resource_FormatType_HeaderFile
#define _Resource_FormatType_HeaderFile

//! List of non ASCII format types which may be converted into the Unicode 16 bits format type.
//! Use the functions provided by the Resource_Unicode class to convert a string
//! from one of these non ASCII format to Unicode, and vice versa.
enum Resource_FormatType
{
  Resource_FormatType_SJIS,         //!< SJIS (Shift Japanese Industrial Standards) encoding
  Resource_FormatType_EUC,          //!< EUC (Extended Unix Code) multi-byte encoding primarily for Japanese, Korean, and simplified Chinese
  Resource_FormatType_ANSI,         //!< ANSI encoding (pass through without conversion)
  Resource_FormatType_GB,           //!< GB (Guobiao) encoding for Simplified Chinese
  Resource_FormatType_UTF8,         //!< multi-byte UTF-8 encoding
  Resource_FormatType_SystemLocale, //!< active system-defined locale; this value is strongly NOT recommended to use

  // non ASCII format types
  Resource_FormatType_CP1250,       //!< cp1250 (Central European) encoding
  Resource_FormatType_CP1251,       //!< cp1251 (Cyrillic) encoding
  Resource_FormatType_CP1252,       //!< cp1252 (Western European) encoding
  Resource_FormatType_CP1253,       //!< cp1253 (Greek) encoding
  Resource_FormatType_CP1254,       //!< cp1254 (Turkish) encoding
  Resource_FormatType_CP1255,       //!< cp1255 (Hebrew) encoding
  Resource_FormatType_CP1256,       //!< cp1256 (Arabic) encoding
  Resource_FormatType_CP1257,       //!< cp1257 (Baltic) encoding
  Resource_FormatType_CP1258,       //!< cp1258 (Vietnamese) encoding

  // old aliases
  Resource_SJIS = Resource_FormatType_SJIS,
  Resource_EUC  = Resource_FormatType_EUC,
  Resource_ANSI = Resource_FormatType_ANSI,
  Resource_GB   = Resource_FormatType_GB,
};

#endif // _Resource_FormatType_HeaderFile
