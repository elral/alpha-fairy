#ifndef _ALPHAFAIRY_H_
#define _ALPHAFAIRY_H_

#include <stdint.h>
#include <stdbool.h>

#include "alfy_conf.h"
#include "alfy_types.h"
#include "alfy_defs.h"

#include <M5StickCPlus.h>
#include <M5DisplayExt.h>
#include <SpriteMgr.h>
#include <FS.h>
#include <SPIFFS.h>
#include <PtpIpCamera.h>
#include <PtpIpSonyAlphaCamera.h>
#include <SonyHttpCamera.h>
#include "AlphaFairyCamera.h"
#include <AlphaFairy_NetMgr.h>
#include <AlphaFairyImu.h>
#include <FairyKeyboard.h>
#include <FairyEncoder.h>
#include <SerialCmdLine.h>
#include <SonyCameraInfraredRemote.h>
#include <DebuggingSerial.h>
#include "FairyMenu.h"

#ifdef ENABLE_BUILD_LEPTON
#include <Lepton.h>
#endif

extern PtpIpSonyAlphaCamera ptpcam;
extern SonyHttpCamera       httpcam;
extern AlphaFairyCamera     fairycam;
extern SerialCmdLine        cmdline;
extern configsettings_t     config_settings;
extern AlphaFairyImu        imu;
extern SpriteMgr* sprites;
extern bool redraw_flag; // forces menu redraw
extern FairyEncoder  fencoder;
extern uint32_t gpio_time;

extern
#ifdef DISABLE_ALL_MSG
    DebuggingSerialDisabled
#else
    DebuggingSerial
#endif
                            dbg_ser;

void critical_error(const char* fp);
void setup_menus();
void setup_aboutme(void);
void shutterrelease_task();
void spiffs_init(void);


extern bool app_poll(void);
extern void app_waitAllRelease(void);
extern void app_waitAllReleaseConnecting(void);
extern void app_waitAllReleaseUnsupported(void);
extern void app_sleep(uint32_t x, bool forget_btns);

extern void settings_save(void);

extern void pwr_lcdUndim(void);
extern void pwr_sleepCheck(void);
extern void pwr_tick(bool);

#endif
