/*
 * Automatically generated C config: don't edit
 */
#define AUTOCONF_INCLUDED

/*
 * Development Platform
 */
#undef  AVR
#define DSPIC 1

/*
 * Hardware
 */
#define CONFIG_QUARTZ (10000000)
#define CONFIG_F_CPU (40000000)
#define CONFIG_MODULE_DSPIC_OSCILLATOR 1
#define CONFIG_MODULE_DSPIC_OSCILLATOR_CREATE_CONFIG 1
#define CONFIG_MODULE_DSPIC_CONFIGURATION_BITS_CREATE_CONFIG 1

/*
 * Base modules
 */

/*
 * Enable math library in generation options to see all modules
 */
#define CONFIG_MODULE_CIRBUF 1
#undef  CONFIG_MODULE_CIRBUF_LARGE
#undef  CONFIG_MODULE_FIXED_POINT
#undef  CONFIG_MODULE_VECT2
#undef  CONFIG_MODULE_GEOMETRY
#undef  CONFIG_MODULE_SCHEDULER
#undef  CONFIG_MODULE_SCHEDULER_CREATE_CONFIG
#undef  CONFIG_MODULE_SCHEDULER_USE_TIMERS
#define CONFIG_MODULE_SCHEDULER_TIMER0 1
#undef  CONFIG_MODULE_SCHEDULER_MANUAL
#undef  CONFIG_MODULE_TIME
#undef  CONFIG_MODULE_TIME_CREATE_CONFIG
#undef  CONFIG_MODULE_TIME_EXT
#undef  CONFIG_MODULE_TIME_EXT_CREATE_CONFIG

/*
 * Communication modules
 */

/*
 * uart needs circular buffer, mf2 client may need scheduler
 */
#define CONFIG_MODULE_UART 1
#define CONFIG_MODULE_DSPIC_UART_CREATE_CONFIG 1
#undef  CONFIG_MODULE_SPI
#undef  CONFIG_MODULE_SPI_CREATE_CONFIG
#undef  CONFIG_MODULE_I2C
#undef  CONFIG_MODULE_I2C_MASTER
#undef  CONFIG_MODULE_I2C_MULTIMASTER
#undef  CONFIG_MODULE_I2C_CREATE_CONFIG
#undef  CONFIG_MODULE_MF2_CLIENT
#undef  CONFIG_MODULE_MF2_CLIENT_USE_SCHEDULER
#undef  CONFIG_MODULE_MF2_CLIENT_CREATE_CONFIG
#undef  CONFIG_MODULE_MF2_SERVER
#undef  CONFIG_MODULE_MF2_SERVER_CREATE_CONFIG

/*
 * Hardware modules
 */
#undef  CONFIG_MODULE_TIMER
#undef  CONFIG_MODULE_TIMER_CREATE_CONFIG
#undef  CONFIG_MODULE_TIMER_DYNAMIC
#undef  CONFIG_MODULE_PWM
#undef  CONFIG_MODULE_PWM_CREATE_CONFIG
#undef  CONFIG_MODULE_PWM_NG
#undef  CONFIG_MODULE_ADC
#undef  CONFIG_MODULE_ADC_CREATE_CONFIG

/*
 * IHM modules
 */
#undef  CONFIG_MODULE_MENU
#undef  CONFIG_MODULE_VT100
#undef  CONFIG_MODULE_RDLINE
#undef  CONFIG_MODULE_RDLINE_CREATE_CONFIG
#undef  CONFIG_MODULE_RDLINE_KILL_BUF
#undef  CONFIG_MODULE_RDLINE_HISTORY
#undef  CONFIG_MODULE_PARSE
#undef  CONFIG_MODULE_PARSE_NO_FLOAT

/*
 * External devices modules
 */
#undef  CONFIG_MODULE_LCD
#undef  CONFIG_MODULE_LCD_CREATE_CONFIG
#undef  CONFIG_MODULE_MULTISERVO
#undef  CONFIG_MODULE_MULTISERVO_CREATE_CONFIG
#undef  CONFIG_MODULE_AX12
#undef  CONFIG_MODULE_AX12_CREATE_CONFIG

/*
 * Brushless motor drivers (you should enable pwm modules to see all)
 */
#undef  CONFIG_MODULE_BRUSHLESS_3PHASE_DIGITAL_HALL
#undef  CONFIG_MODULE_BRUSHLESS_3PHASE_DIGITAL_HALL_CREATE_CONFIG
#undef  CONFIG_MODULE_BRUSHLESS_3PHASE_DIGITAL_HALL_DOUBLE
#undef  CONFIG_MODULE_BRUSHLESS_3PHASE_DIGITAL_HALL_DOUBLE_CREATE_CONFIG

/*
 * Encoders (you need comm/spi for encoders_spi)
 */
#undef  CONFIG_MODULE_ENCODERS_MICROB
#undef  CONFIG_MODULE_ENCODERS_MICROB_CREATE_CONFIG
#undef  CONFIG_MODULE_ENCODERS_EIRBOT
#undef  CONFIG_MODULE_ENCODERS_EIRBOT_CREATE_CONFIG
#undef  CONFIG_MODULE_ENCODERS_SPI
#undef  CONFIG_MODULE_ENCODERS_SPI_CREATE_CONFIG

/*
 * Robot specific modules
 */
#undef  CONFIG_MODULE_ROBOT_SYSTEM
#undef  CONFIG_MODULE_ROBOT_SYSTEM_MOT_AND_EXT
#undef  CONFIG_MODULE_POSITION_MANAGER
#undef  CONFIG_MODULE_COMPENSATE_CENTRIFUGAL_FORCE
#undef  CONFIG_MODULE_TRAJECTORY_MANAGER
#undef  CONFIG_MODULE_BLOCKING_DETECTION_MANAGER
#undef  CONFIG_MODULE_OBSTACLE_AVOIDANCE
#undef  CONFIG_MODULE_OBSTACLE_AVOIDANCE_CREATE_CONFIG

/*
 * Control system modules
 */
#undef  CONFIG_MODULE_CONTROL_SYSTEM_MANAGER

/*
 * Filters
 */
#undef  CONFIG_MODULE_PID
#undef  CONFIG_MODULE_PID_CREATE_CONFIG
#undef  CONFIG_MODULE_RAMP
#undef  CONFIG_MODULE_QUADRAMP
#undef  CONFIG_MODULE_QUADRAMP_DERIVATE
#undef  CONFIG_MODULE_BIQUAD

/*
 * Radio devices
 */

/*
 * Some radio devices require SPI to be activated
 */
#undef  CONFIG_MODULE_CC2420
#undef  CONFIG_MODULE_CC2420_CREATE_CONFIG

/*
 * Crypto modules
 */

/*
 * Crypto modules depend on utils module
 */
#undef  CONFIG_MODULE_AES
#undef  CONFIG_MODULE_AES_CTR
#undef  CONFIG_MODULE_MD5
#undef  CONFIG_MODULE_MD5_HMAC
#undef  CONFIG_MODULE_RC4

/*
 * Encodings modules
 */

/*
 * Encoding modules depend on utils module
 */
#undef  CONFIG_MODULE_BASE64
#undef  CONFIG_MODULE_HAMMING

/*
 * Debug modules
 */

/*
 * Debug modules depend on utils module
 */
#undef  CONFIG_MODULE_DIAGNOSTIC
#undef  CONFIG_MODULE_DIAGNOSTIC_CREATE_CONFIG
#undef  CONFIG_MODULE_ERROR
#undef  CONFIG_MODULE_ERROR_CREATE_CONFIG
