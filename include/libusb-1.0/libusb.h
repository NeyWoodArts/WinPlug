#ifndef LIBUSB_H
#define LIBUSB_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

#define LIBUSB_API_VERSION 0x0100010A

typedef struct libusb_context libusb_context;
typedef struct libusb_device libusb_device;
typedef struct libusb_device_handle libusb_device_handle;

typedef struct libusb_device_descriptor {
    uint8_t  bLength;
    uint8_t  bDescriptorType;
    uint16_t bcdUSB;
    uint8_t  bDeviceClass;
    uint8_t  bDeviceSubClass;
    uint8_t  bDeviceProtocol;
    uint8_t  bMaxPacketSize0;
    uint16_t idVendor;
    uint16_t idProduct;
    uint16_t bcdDevice;
    uint8_t  iManufacturer;
    uint8_t  iProduct;
    uint8_t  iSerialNumber;
    uint8_t  bNumConfigurations;
} libusb_device_descriptor;

enum libusb_error {
    LIBUSB_SUCCESS = 0,
    LIBUSB_ERROR_IO = -1,
    LIBUSB_ERROR_INVALID_PARAM = -2,
    LIBUSB_ERROR_ACCESS = -3,
    LIBUSB_ERROR_NO_DEVICE = -4,
    LIBUSB_ERROR_NOT_FOUND = -5,
    LIBUSB_ERROR_BUSY = -6,
    LIBUSB_ERROR_TIMEOUT = -7,
    LIBUSB_ERROR_OVERFLOW = -8,
    LIBUSB_ERROR_PIPE = -9,
    LIBUSB_ERROR_INTERRUPTED = -10,
    LIBUSB_ERROR_NO_MEM = -11,
    LIBUSB_ERROR_NOT_SUPPORTED = -12,
    LIBUSB_ERROR_OTHER = -99,
};

inline int libusb_init(libusb_context **ctx) { (void)ctx; *ctx = nullptr; return LIBUSB_SUCCESS; }
inline void libusb_exit(libusb_context *ctx) { (void)ctx; }
inline int libusb_get_device_list(libusb_context *ctx, libusb_device ***list) { (void)ctx; *list = nullptr; return 0; }
inline void libusb_free_device_list(libusb_device **list, int unref_devices) { (void)list; (void)unref_devices; }
inline int libusb_release_interface(libusb_device_handle *dev_handle, int interface_number) { (void)dev_handle; (void)interface_number; return LIBUSB_ERROR_NOT_SUPPORTED; }
inline int libusb_attach_kernel_driver(libusb_device_handle *dev_handle, int interface_number) { (void)dev_handle; (void)interface_number; return LIBUSB_ERROR_NOT_SUPPORTED; }
inline int libusb_kernel_driver_active(libusb_device_handle *dev_handle, int interface_number) { (void)dev_handle; (void)interface_number; return LIBUSB_ERROR_NOT_SUPPORTED; }
inline int libusb_detach_kernel_driver(libusb_device_handle *dev_handle, int interface_number) { (void)dev_handle; (void)interface_number; return LIBUSB_ERROR_NOT_SUPPORTED; }
inline int libusb_open(libusb_device *dev, libusb_device_handle **dev_handle) { (void)dev; (void)dev_handle; return LIBUSB_ERROR_NOT_SUPPORTED; }
inline void libusb_close(libusb_device_handle *dev_handle) { (void)dev_handle; }
inline libusb_device_handle *libusb_open_device_with_vid_pid(libusb_context *ctx, uint16_t vendor_id, uint16_t product_id) { (void)ctx; (void)vendor_id; (void)product_id; return nullptr; }
inline const char *libusb_strerror(enum libusb_error errcode) { (void)errcode; return "Not supported"; }
inline const char *libusb_error_name(int error_code) { (void)error_code; return "LIBUSB_ERROR_NOT_SUPPORTED"; }

// Additional functions needed for UsbDevice.cpp
inline libusb_device *libusb_ref_device(libusb_device *dev) { return dev; }
inline void libusb_unref_device(libusb_device *dev) { (void)dev; }
inline int libusb_set_auto_detach_kernel_driver(libusb_device_handle *dev_handle, int enable) { (void)dev_handle; (void)enable; return LIBUSB_ERROR_NOT_SUPPORTED; }
inline int libusb_claim_interface(libusb_device_handle *dev_handle, int interface_number) { (void)dev_handle; (void)interface_number; return LIBUSB_ERROR_NOT_SUPPORTED; }
inline int libusb_get_string_descriptor_ascii(libusb_device_handle *dev_handle, uint8_t desc_index, unsigned char *data, int length) { (void)dev_handle; (void)desc_index; (void)data; (void)length; return LIBUSB_ERROR_NOT_SUPPORTED; }
inline int libusb_interrupt_transfer(libusb_device_handle *dev_handle, unsigned char endpoint, unsigned char *data, int length, int *actual_length, unsigned int timeout) { (void)dev_handle; (void)endpoint; (void)data; (void)length; (void)actual_length; (void)timeout; return LIBUSB_ERROR_NOT_SUPPORTED; }
inline int libusb_get_device_descriptor(libusb_device *dev, libusb_device_descriptor *desc) { (void)dev; (void)desc; return LIBUSB_ERROR_NOT_SUPPORTED; }

#ifdef __cplusplus
}
#endif

#endif /* LIBUSB_H */