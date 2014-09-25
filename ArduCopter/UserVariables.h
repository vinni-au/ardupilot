/// -*- tab-width: 4; Mode: C++; c-basic-offset: 4; indent-tabs-mode: nil -*-

// user defined variables

// example variables used in Wii camera testing - replace with your own
// variables
#ifdef USERHOOK_VARIABLES

#if WII_CAMERA == 1
WiiCamera           ircam;
int                 WiiRange=0;
int                 WiiRotation=0;
int                 WiiDisplacementX=0;
int                 WiiDisplacementY=0;
#endif  // WII_CAMERA

#endif  // USERHOOK_VARIABLES


// uncomment this to enable camera storage
#define CAMERA_STORAGE

#if CAMERA == ENABLED && defined(CAMERA_STORAGE)
struct camera_storage_t {
	uint16_t size;
} CameraStorage;
#endif
#if defined(CAMERA_STORAGE) && defined(HAL_BOARD_LOG_DIRECTORY)
#define CAMERA_STORAGE_ENABLED
DataFlash_File CameraDataFlash(HAL_BOARD_LOG_DIRECTORY "/CAMERA");
#endif
