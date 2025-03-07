#ifndef __GSTVIMBASRC_STATUS_CODE_H__
#define __GSTVIMBASRC_STATUS_CODE_H__

typedef enum {
   GST_VIMBA_SRC_STATUS_CODE_NOT_INITIALISED=0,
   GST_VIMBA_SRC_STATUS_CODE_OK=1,
   GST_VIMBA_SRC_STATUS_CODE_VIMBA_INSTALLATION_ERROR=2,
   GST_VIMBA_SRC_STATUS_CODE_DRIVER_ERROR=3,
   GST_VIMBA_SRC_STATUS_CODE_CAMERA_NOT_FOUND=4,
   GST_VIMBA_SRC_STATUS_CODE_INVALID_PARAM=5,
   GST_VIMBA_SRC_STATUS_CODE_MEMORY_OVERFLOW=6,
   GST_VIMBA_SRC_STATUS_CODE_UNKNOWN
}GstVimbaSrcStatusCode;

#endif // __GSTVIMBASRC_STATUS_CODE_H__
