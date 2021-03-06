#pragma once

#include "../colours.h"

typedef enum {
  CfgKeyTemperature,
  CfgKeyCelsiusTemperature,
  CfgKeyConditions,
  CfgKeyWeatherError,
  CfgKeyWeatherMode,
  CfgKeyUseCelsius,
  CfgKeyWeatherLocation,
  CfgKeyLanguage,
  CfgKeyEuropeanDate,
  CfgKeyHourlyVibe,
  CfgKeyVibeOnDisconnect,
  CfgKeyVibeOnConnect,
  CfgKeyBackgroundColour,
  CfgKeyTextColour,
  CfgKeyTimeTextColour,
  CfgKeyDateTextColour,
  CfgKeyTemperatureTextColour,
  CfgKeyConditionTextColour,
  CfgKeyInvertColours,
  CfgKeyShowSeconds,
  CfgKeyLeadingZero,
  CfgKeyMiddleBarMode,
  CfgKeyEnableHealth,
  CfgKeyUseAutomaticStepGoal,
  CfgKeyManualStepGoal,
  CfgKeyUseNightMode,
  CfgKeyNightModeStart,
  CfgKeyNightModeEnd,
  CfgKeyNightBackgroundColour,
  CfgKeyNightTextColour,


  CfgKeyCount,
} CfgKey;

// Define ints for non-bool settings
int background_colour, text_colour, time_text_colour, date_text_colour, temperature_text_colour, condition_text_colour, night_background_colour, night_text_colour;
int night_start_hour, night_end_hour;
int last_language, language;
int middle_bar_mode;
int manual_step_goal, enable_health;
int last_weather_mode, weather_mode;

int euro_date, inv_colours, auto_step_goal, use_night_mode, hourly_vibe, vibe_disconnect, vibe_connect, show_seconds, leading_zero, use_celsius;

void save_settings();
void load_settings();
