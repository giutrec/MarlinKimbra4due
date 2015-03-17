/**
 * Portuguese
 *
 * LCD Menu Messages
 * Please note these are limited to 17 characters!
 *
 */
#ifndef LANGUAGE_PT_H
#define LANGUAGE_PT_H

#define WELCOME_MSG                         MACHINE_NAME " pronto."
#define MSG_SD_INSERTED                     "Cartao inserido"
#define MSG_SD_REMOVED                      "Cartao removido"
#define MSG_MAIN                            " Menu principal \003"
#define MSG_AUTOSTART                       "Autostart"
#define MSG_DISABLE_STEPPERS                " Desligar motores"
#define MSG_AUTO_HOME                       "Ir para home"
#define MSG_BED_SETTING                     "Bed Setting"
#define MSG_LP_INTRO                        " Leveling bed...       Press to start  "
#define MSG_LP_1                            " Adjust first point  & Press the button"
#define MSG_LP_2                            " Adjust second point & Press the button"
#define MSG_LP_3                            " Adjust third point  & Press the button"
#define MSG_LP_4                            " Adjust fourth point & Press the button"
#define MSG_LP_5                            "     Is it ok?         Press to end"       
#define MSG_LP_6                            " BED leveled!"
#define MSG_SET_HOME_OFFSETS                "Def. home offsets"
#define MSG_SET_ORIGIN                      "Estabelecer orig."
#define MSG_PREHEAT_PLA                     "Pre-aquecer PLA"
#define MSG_PREHEAT_PLA_ALL                 "Pre-aq. PLA Tudo"
#define MSG_PREHEAT_PLA_BEDONLY             "Pre-aq. PLA \002Base"
#define MSG_PREHEAT_PLA_SETTINGS            "PLA definicoes"
#define MSG_PREHEAT_ABS                     "Pre-aquecer ABS"
#define MSG_PREHEAT_ABS_ALL                 "Pre-aq. ABS Tudo"
#define MSG_PREHEAT_ABS_BEDONLY             "Pre-aq. ABS \002Base"
#define MSG_PREHEAT_ABS_SETTINGS            "ABS definicoes"
#define MSG_PREHEAT_GUM                     "Pre-aquecer GUM"
#define MSG_PREHEAT_GUM_ALL                 "Pre-aquecer GUM Tudo"
#define MSG_PREHEAT_GUM_BEDONLY             "Pre-aquecer GUM \002Base"
#define MSG_PREHEAT_GUM_SETTINGS            "GUM definicoes"
#define MSG_COOLDOWN                        "Arrefecer"
#define MSG_SWITCH_PS_ON                    "Ligar"
#define MSG_SWITCH_PS_OFF                   "Desligar"
#define MSG_EXTRUDE                         "Extrudir"
#define MSG_RETRACT                         "Retrair"
#define MSG_MOVE_AXIS                       "Mover eixo      \x7E"
#define MSG_MOVE_X                          "Mover X"
#define MSG_MOVE_Y                          "Mover Y"
#define MSG_MOVE_Z                          "Mover Z"
#define MSG_MOVE_E                          "Extrusor"
#define MSG_MOVE_01MM                       "Mover 0.1mm"
#define MSG_MOVE_1MM                        "Mover 1mm"
#define MSG_MOVE_10MM                       "Mover 10mm"
#define MSG_SPEED                           "Velocidade"
#define MSG_NOZZLE                          "Bico"
#define MSG_BED                             "Base"
#define MSG_FAN_SPEED                       "Velocidade do ar."
#define MSG_FLOW                            "Fluxo"
#define MSG_CONTROL                         "Control"
#define MSG_MIN                             " " STR_THERMOMETER " Min"
#define MSG_MAX                             " " STR_THERMOMETER " Max"
#define MSG_FACTOR                          " " STR_THERMOMETER " Fact"
#define MSG_AUTOTEMP                        "Autotemp"
#define MSG_ON                              "On "
#define MSG_OFF                             "Off"
#define MSG_PID_P                           "PID-P"
#define MSG_PID_I                           "PID-I"
#define MSG_PID_D                           "PID-D"
#define MSG_ACC                             "Acc"
#define MSG_VXY_JERK                        "Vxy-jerk"
#define MSG_VZ_JERK                         "Vz-jerk"
#define MSG_VE_JERK                         "Ve-jerk"
#define MSG_VMAX                            " Vmax "
#define MSG_X                               "x"
#define MSG_Y                               "y"
#define MSG_Z                               "z"
#define MSG_E                               "e"
#define MSG_VMIN                            "Vmin"
#define MSG_VTRAV_MIN                       "VTrav min"
#define MSG_AMAX                            "Amax "
#define MSG_A_RETRACT                       "A-retract"
#define MSG_A_TRAVEL                        "A-travel"
#define MSG_XSTEPS                          "Xpasso/mm"
#define MSG_YSTEPS                          "Ypasso/mm"
#define MSG_ZSTEPS                          "Zpasso/mm"
#define MSG_E0STEPS                         "E0 passo/mm"
#define MSG_E1STEPS                         "E1 passo/mm"
#define MSG_E2STEPS                         "E2 passo/mm"
#define MSG_E3STEPS                         "E3 passo/mm"
#define MSG_TEMPERATURE                     "Temperatura"
#define MSG_MOTION                          "Movimento"
#define MSG_VOLUMETRIC                      "Filamento"
#define MSG_VOLUMETRIC_ENABLED              "E in mm" STR_h3
#define MSG_FILAMENT_SIZE_EXTRUDER          "Fil. Diam."
#define MSG_CONTRAST                        "Contraste"
#define MSG_STORE_EPROM                     "Guardar na memoria"
#define MSG_LOAD_EPROM                      "Carregar da memoria"
#define MSG_RESTORE_FAILSAFE                "Rest. de emergen."
#define MSG_REFRESH                         "\004Recarregar"
#define MSG_WATCH                           "Monitorar   \003"
#define MSG_PREPARE                         "Preparar \x7E"
#define MSG_TUNE                            "Afinar    \x7E"
#define MSG_PAUSE_PRINT                     "Pausar impressao"
#define MSG_RESUME_PRINT                    "Resumir impressao"
#define MSG_STOP_PRINT                      "Parar impressao"
#define MSG_CARD_MENU                       "Menu cartao SD"
#define MSG_NO_CARD                         "Sem cartao SD"
#define MSG_DWELL                           "Repouso..."
#define MSG_USERWAIT                        "A espera de ordem"
#define MSG_RESUMING                        "Resumir impressao"
#define MSG_PRINT_ABORTED                   "Impr. Cancelada"
#define MSG_NO_MOVE                         "Sem movimento"
#define MSG_KILLED                          "INTRRP. DE EMERG."
#define MSG_STOPPED                         "PARADO. "
#define MSG_CONTROL_RETRACT                 " Retrair mm"
#define MSG_CONTROL_RETRACT_SWAP            "Troca Retrair mm"
#define MSG_CONTROL_RETRACTF                " Retrair  V"
#define MSG_CONTROL_RETRACT_ZLIFT           " Levantar mm"
#define MSG_CONTROL_RETRACT_RECOVER         " DesRet +mm"
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    "Troca DesRet +mm"
#define MSG_CONTROL_RETRACT_RECOVERF        " DesRet  V"
#define MSG_AUTORETRACT                     " AutoRetr."
#define MSG_FILAMENTCHANGE                  "Trocar filamento"
#define MSG_INIT_SDCARD                     "Inic. SD-Card"
#define MSG_CNG_SDCARD                      "Trocar SD-Card"
#define MSG_ZPROBE_OUT                      "Sens. fora da Base"
#define MSG_POSITION_UNKNOWN                "XY antes de Z"
#define MSG_ZPROBE_ZOFFSET                  "Z Offset"
#define MSG_BABYSTEP_X                      "Babystep X"
#define MSG_BABYSTEP_Y                      "Babystep Y"
#define MSG_BABYSTEP_Z                      "Babystep Z"
#define MSG_ENDSTOP_ABORT                   "Endstop abort"

#define MSG_HEATING_FAILED_LCD              "Heating failed"
#define MSG_ERR_REDUNDANT_TEMP              "Err: REDUNDANT TEMP ERROR"
#define MSG_THERMAL_RUNAWAY                 "THERMAL RUNAWAY"
#define MSG_ERR_MAXTEMP                     "Err: MAXTEMP"
#define MSG_ERR_MINTEMP                     "Err: MINTEMP"
#define MSG_ERR_MAXTEMP_BED                 "Err: MAXTEMP BED"

#ifdef DELTA
  #define MSG_DELTA_CALIBRATE               "Delta Calibration"
  #define MSG_DELTA_CALIBRATE_X             "Calibrate X"
  #define MSG_DELTA_CALIBRATE_Y             "Calibrate Y"
  #define MSG_DELTA_CALIBRATE_Z             "Calibrate Z"
  #define MSG_DELTA_CALIBRATE_CENTER        "Calibrate Center"
#endif // DELTA

#define MSG_LASER                           "Laser Preset"
#define MSG_CONFIG                          "Configuration"
#define MSG_BAUDRATE                        "Baudrate"
#define MSG_E_BOWDEN_LENGTH                 "Extrude " STRINGIFY(BOWDEN_LENGTH) "mm"
#define MSG_R_BOWDEN_LENGTH                 "Retract " STRINGIFY(BOWDEN_LENGTH) "mm"
#define MSG_PURGE_XMM                       "Purge " STRINGIFY(LCD_PURGE_LENGTH) "mm"
#define MSG_RETRACT_XMM                     "Retract " STRINGIFY(LCD_RETRACT_LENGTH) "mm"

#ifdef FIRMWARE_TEST
  #define MSG_FWTEST_YES                    "Put the Y command to go next"
  #define MSG_FWTEST_NO                     "Put the N command to go next"
  #define MSG_FWTEST_YES_NO                 "Put the Y or N command to go next"
  #define MSG_FWTEST_ENDSTOP_ERR            "ENDSTOP ERROR! Check wire and connection"
  #define MSG_FWTEST_PRESS                  "Press and hold the endstop "
  #define MSG_FWTEST_INVERT                 "Reverse value in "
  #define MSG_FWTEST_XAXIS                  "Has the nozzle moved to the right?"
  #define MSG_FWTEST_YAXIS                  "Has the nozzle moved forward?"
  #define MSG_FWTEST_ZAXIS                  "Has the nozzle moved up?"
  #define MSG_FWTEST_01                     "Manually move the axes X, Y and Z away from the endstop"
  #define MSG_FWTEST_02                     "Do you want check ENDSTOP?"
  #define MSG_FWTEST_03                     "Start check ENDSTOP"
  #define MSG_FWTEST_04                     "Start check MOTOR"
  #define MSG_FWTEST_ATTENTION              "ATTENTION! Check that the three axes are more than 5 mm from the endstop!"
#endif // FIRMWARE_TEST

#endif // LANGUAGE_PT_H
