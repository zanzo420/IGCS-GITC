//////////////////////////	////////	//////////////////////////////////////////////////////////////////////
// Part of Injectable Generic Camera System
// Copyright(c) 2019, Frans Bouma
// All rights reserved.
// https://github.com/FransBouma/InjectableGenericCameraSystem
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met :
//
//  * Redistributions of source code must retain the above copyright notice, this
//	  list of conditions and the following disclaimer.
//
//  * Redistributions in binary form must reproduce the above copyright notice,
//    this list of conditions and the following disclaimer in the documentation
//    and / or other materials provided with the distribution.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
// DISCLAIMED.IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
// FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
// DAMAGES(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
// SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
// CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
// OR TORT(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
////////////////////////////////////////////////////////////////////////////////////////////////////////
#pragma once

namespace IGCS::GameSpecific
{
	// Mandatory constants to define for a game
	#define GAME_NAME									"Dirt Rally 2.0 v1.6+"
	#define CAMERA_VERSION								"2.1"
	#define CAMERA_CREDITS								"Ghostinthecamera & Hattiwatti"
	#define GAME_WINDOW_TITLE							"DiRT Rally 2.0"
	#define INITIAL_PITCH_RADIANS						0.0f	// around X axis	(right)
	#define INITIAL_YAW_RADIANS							0.0f	// around Y axis	(up)
	#define INITIAL_ROLL_RADIANS						0.0f	// around Z axis	(into the screen)
	#define CONTROLLER_Y_INVERT							false
	#define FASTER_MULTIPLIER							5.0f
	#define SLOWER_MULTIPLIER							0.1f
	#define MOUSE_SPEED_CORRECTION						0.2f	// to correct for the mouse-deltas related to normal rotation.
	#define DEFAULT_MOVEMENT_SPEED						0.04f
	#define DEFAULT_ROTATION_SPEED						0.008f
	#define DEFAULT_FOV_SPEED							0.5f	// fov in degrees
	#define DEFAULT_UP_MOVEMENT_MULTIPLIER				0.7f
	#define DEFAULT_FOV									64.0f	// fov in degrees
	// End Mandatory constants

	// AOB Keys for interceptor's AOB scanner
	#define CAMERA_ADDRESS_INTERCEPT_KEY				"AOB_CAMERA_ADDRESS_INTERCEPT"
	#define CAMERA_ADDRESS2_INTERCEPT_KEY				"AOB_CAMERA_ADDRESS2_INTERCEPT"
	#define CAMERA_WRITE1_INTERCEPT_KEY					"AOB_CAMERA_WRITE1_INTERCEPT"
	#define CAMERA_WRITE2_INTERCEPT_KEY					"AOB_CAMERA_WRITE2_INTERCEPT"
	#define CAMERA_WRITE3_INTERCEPT_KEY					"AOB_CAMERA_WRITE3_INTERCEPT"
	#define CAMERA_WRITE4_INTERCEPT_KEY					"AOB_CAMERA_WRITE4_INTERCEPT"
	#define CAMERA_WRITE5_INTERCEPT_KEY					"AOB_CAMERA_WRITE5_INTERCEPT"
	#define QUATERNION_WRITE2_KEY						"QUATERNION_WRITE2"

	// Indices in the structures read by interceptors 
	#define COORDS_IN_STRUCT_OFFSET						0x40
	#define MATRIX_IN_STRUCT_OFFSET						0x10
	#define FOV_IN_STRUCT_OFFSET						0x50
	#define COORDS_IN_STRUCT2_OFFSET					0x10
	#define QUATERNION_IN_STRUCT2_OFFSET				0x00
	#define FOV_IN_STRUCT2_OFFSET						0x70
	#define OTHER_QUAT1									0x110
	#define OTHER_QUAT2									0x120
}
