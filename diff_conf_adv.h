#define LONG_FILENAME_HOST_SUPPORT    // Get the long filename of a file/folder with 'M33 <dosname>' and list long filenames with 'M20 L'
#define AUTO_REPORT_SD_STATUS         // Auto-report media status with 'M27 S<seconds>'
#define SDCARD_CONNECTION ONBOARD
#define BABYSTEPPING
#define EMERGENCY_PARSER
#define SERIAL_FLOAT_PRECISION 4
#define SENSORLESS_HOMING // StallGuard capable drivers only
#define IMPROVE_HOMING_RELIABILITY
#define TMC_DEBUG
#define AUTO_REPORT_POSITION
#define M115_GEOMETRY_REPORT
#define M114_DETAIL         // Use 'M114` for details to check planner calculations
#define REPORT_FAN_CHANGE   // Report the new fan speed when changed by M106 (and others)
#define HOST_ACTION_COMMANDS
#define HOST_PROMPT_SUPPORT           // Initiate host prompts to get user feedback
#define HOST_STATUS_NOTIFICATIONS   // Send some status messages to the host as notifications
