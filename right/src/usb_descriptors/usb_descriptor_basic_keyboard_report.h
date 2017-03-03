#ifndef __USB_DESCRIPTOR_BASIC_KEYBOARD_REPORT_H__
#define __USB_DESCRIPTOR_BASIC_KEYBOARD_REPORT_H__

// Macros:

    #define USB_BASIC_KEYBOARD_REPORT_DESCRIPTOR_LENGTH 63
    #define USB_BASIC_KEYBOARD_MAX_KEYS 6

// Variables:

    extern uint8_t UsbBasicKeyboardReportDescriptor[USB_BASIC_KEYBOARD_REPORT_DESCRIPTOR_LENGTH];

#endif
