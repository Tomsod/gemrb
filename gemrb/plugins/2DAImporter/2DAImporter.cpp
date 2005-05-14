/* GemRB - Infinity Engine Emulator
 * Copyright (C) 2003 The GemRB Project
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 *
 * $Header: /data/gemrb/cvs2svn/gemrb/gemrb/gemrb/plugins/2DAImporter/2DAImporter.cpp,v 1.7 2005/05/14 11:18:04 avenger_teambg Exp $
 *
 */

// 2DAImporter.cpp : Defines the entry point for the DLL application.
//
#include "../../includes/globals.h"
#include "2DAImpCD.h"

#ifdef WIN32
#define GEM_EXPORT_DLL __declspec(dllexport)
#else
#define GEM_EXPORT_DLL
#endif

#ifdef WIN32
#include <windows.h>

BOOL APIENTRY DllMain(HANDLE hModule, DWORD  ul_reason_for_call,
	LPVOID lpReserved)
{
	return TRUE;
}

#endif

GEM_EXPORT_DLL ClassDesc* LibClassDesc()
{
	return &p2daImpCD;
}

GEM_EXPORT_DLL const char* LibDescription()
{
	return "2DA File Importer";
}

GEM_EXPORT_DLL const char* LibVersion()
{
	return VERSION_GEMRB;
}
