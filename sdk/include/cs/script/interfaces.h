////////////////////////////////////////////////////////////////////////////
//	Module 		: interfaces.h
//	Created 	: 15.06.2005
//  Modified 	: 22.09.2008
//	Author		: Dmitriy Iassenev
//	Description : lua studio backend interfaces
////////////////////////////////////////////////////////////////////////////

#ifndef CS_LUA_STUDIO_BACKEND_INTERFACES_H_INCLUDED
#define CS_LUA_STUDIO_BACKEND_INTERFACES_H_INCLUDED

#include <cs/config.h>

#define CS_SCRIPT_CALL		__stdcall

#ifndef CS_LUA_STUDIO_BACKEND_API
#	define CS_LUA_STUDIO_BACKEND_API	__declspec(dllimport)
#endif // #ifndef CS_LUA_STUDIO_BACKEND_API

#define CS_LUA_STUDIO_BACKEND_FILE_NAME	CS_LIBRARY_NAME( lua_studio_backend, dll )

#include <cs/script/backend.h>
#include <cs/script/engine.h>
#include <cs/script/world.h>

#endif // #ifndef CS_LUA_STUDIO_BACKEND_INTERFACES_H_INCLUDE