/*
 * Code generated from START.
 *
 * This file will be overwritten when reconfiguring your START project.
 * Please copy examples or other code you want to keep to a separate file
 * to avoid losing it when reconfiguring.
 */
#ifndef ATMEL_START_PINS_H_INCLUDED
#define ATMEL_START_PINS_H_INCLUDED

#include <port.h>

/**
 * \brief Set PA6 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PA6_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTA_set_pin_pull_mode(6, pull_mode);
}

/**
 * \brief Set PA6 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PA6_set_dir(const enum port_dir dir)
{
	PORTA_set_pin_dir(6, dir);
}

/**
 * \brief Set PA6 input/sense configuration
 *
 * Enable/disable PA6 digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void PA6_set_isc(const PORT_ISC_t isc)
{
	PORTA_pin_set_isc(6, isc);
}

/**
 * \brief Set PA6 inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on PA6 is inverted
 *                     false = I/O on PA6 is not inverted
 */
static inline void PA6_set_inverted(const bool inverted)
{
	PORTA_pin_set_inverted(6, inverted);
}

/**
 * \brief Set PA6 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PA6_set_level(const bool level)
{
	PORTA_set_pin_level(6, level);
}

/**
 * \brief Toggle output level on PA6
 *
 * Toggle the pin level
 */
static inline void PA6_toggle_level()
{
	PORTA_toggle_pin_level(6);
}

/**
 * \brief Get level on PA6
 *
 * Reads the level on a pin
 */
static inline bool PA6_get_level()
{
	return PORTA_get_pin_level(6);
}

/**
 * \brief Set PB2 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PB2_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTB_set_pin_pull_mode(2, pull_mode);
}

/**
 * \brief Set PB2 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PB2_set_dir(const enum port_dir dir)
{
	PORTB_set_pin_dir(2, dir);
}

/**
 * \brief Set PB2 input/sense configuration
 *
 * Enable/disable PB2 digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void PB2_set_isc(const PORT_ISC_t isc)
{
	PORTB_pin_set_isc(2, isc);
}

/**
 * \brief Set PB2 inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on PB2 is inverted
 *                     false = I/O on PB2 is not inverted
 */
static inline void PB2_set_inverted(const bool inverted)
{
	PORTB_pin_set_inverted(2, inverted);
}

/**
 * \brief Set PB2 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PB2_set_level(const bool level)
{
	PORTB_set_pin_level(2, level);
}

/**
 * \brief Toggle output level on PB2
 *
 * Toggle the pin level
 */
static inline void PB2_toggle_level()
{
	PORTB_toggle_pin_level(2);
}

/**
 * \brief Get level on PB2
 *
 * Reads the level on a pin
 */
static inline bool PB2_get_level()
{
	return PORTB_get_pin_level(2);
}

/**
 * \brief Set PB3 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PB3_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTB_set_pin_pull_mode(3, pull_mode);
}

/**
 * \brief Set PB3 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PB3_set_dir(const enum port_dir dir)
{
	PORTB_set_pin_dir(3, dir);
}

/**
 * \brief Set PB3 input/sense configuration
 *
 * Enable/disable PB3 digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void PB3_set_isc(const PORT_ISC_t isc)
{
	PORTB_pin_set_isc(3, isc);
}

/**
 * \brief Set PB3 inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on PB3 is inverted
 *                     false = I/O on PB3 is not inverted
 */
static inline void PB3_set_inverted(const bool inverted)
{
	PORTB_pin_set_inverted(3, inverted);
}

/**
 * \brief Set PB3 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PB3_set_level(const bool level)
{
	PORTB_set_pin_level(3, level);
}

/**
 * \brief Toggle output level on PB3
 *
 * Toggle the pin level
 */
static inline void PB3_toggle_level()
{
	PORTB_toggle_pin_level(3);
}

/**
 * \brief Get level on PB3
 *
 * Reads the level on a pin
 */
static inline bool PB3_get_level()
{
	return PORTB_get_pin_level(3);
}

/**
 * \brief Set LED0 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void LED0_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTB_set_pin_pull_mode(4, pull_mode);
}

/**
 * \brief Set LED0 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void LED0_set_dir(const enum port_dir dir)
{
	PORTB_set_pin_dir(4, dir);
}

/**
 * \brief Set LED0 input/sense configuration
 *
 * Enable/disable LED0 digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void LED0_set_isc(const PORT_ISC_t isc)
{
	PORTB_pin_set_isc(4, isc);
}

/**
 * \brief Set LED0 inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on LED0 is inverted
 *                     false = I/O on LED0 is not inverted
 */
static inline void LED0_set_inverted(const bool inverted)
{
	PORTB_pin_set_inverted(4, inverted);
}

/**
 * \brief Set LED0 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void LED0_set_level(const bool level)
{
	PORTB_set_pin_level(4, level);
}

/**
 * \brief Toggle output level on LED0
 *
 * Toggle the pin level
 */
static inline void LED0_toggle_level()
{
	PORTB_toggle_pin_level(4);
}

/**
 * \brief Get level on LED0
 *
 * Reads the level on a pin
 */
static inline bool LED0_get_level()
{
	return PORTB_get_pin_level(4);
}

#endif /* ATMEL_START_PINS_H_INCLUDED */
