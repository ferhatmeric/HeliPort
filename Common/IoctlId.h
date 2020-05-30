//
//  IoctlId.h
//  HeliPort
//
//  Created by 钟先耀 on 2020/4/8.
//  Copyright © 2020 lhy. All rights reserved.
//

/*
 * This program and the accompanying materials are licensed and made available
 * under the terms and conditions of the The 3-Clause BSD License
 * which accompanies this distribution. The full text of the license may be found at
 * https://opensource.org/licenses/BSD-3-Clause
 */

#ifndef IoctlId_h
#define IoctlId_h

enum IOCTL_IDS {
    IOCTL_80211_TEST,
    IOCTL_80211_BSSID,
    IOCTL_80211_SSID,
    IOCTL_80211_NETWORK_TYPES_SUPPORTED,
    IOCTL_80211_NETWORK_TYPE_IN_USE,
    IOCTL_80211_TX_POWER_LEVEL,
    IOCTL_80211_RSSI,
    IOCTL_80211_RSSI_TRIGGER,
    IOCTL_80211_INFRASTRUCTURE_MODE,
    IOCTL_80211_FRAGMENTATION_THRESHOLD,
    IOCTL_80211_RTS_THRESHOLD,
    IOCTL_80211_NUMBER_OF_ANTENNAS,
    IOCTL_80211_RX_ANTENNA_SELECTED,
    IOCTL_80211_TX_ANTENNA_SELECTED,
    IOCTL_80211_SUPPORTED_RATES,
    IOCTL_80211_DESIRED_RATES,
    IOCTL_80211_CONFIGURATION,
    IOCTL_80211_STATISTICS,
    IOCTL_80211_ADD_WEP,
    IOCTL_80211_REMOVE_WEP,
    IOCTL_80211_DISASSOCIATE,
    IOCTL_80211_POWER_MODE,
    IOCTL_80211_BSSID_LIST,
    IOCTL_80211_BSSID_LIST_NEXT,
    IOCTL_80211_AUTHENTICATION_MODE,
    IOCTL_80211_PRIVACY_FILTER,
    IOCTL_80211_BSSID_LIST_SCAN,
    IOCTL_80211_WEP_STATUS,
    IOCTL_80211_RELOAD_DEFAULTS,
    IOCTL_80211_ADD_KEY,
    IOCTL_80211_REMOVE_KEY,
    IOCTL_80211_ASSOCIATION_INFORMATION,
    IOCTL_80211_TEST_SLEEP,
    IOCTL_80211_DEVICE_READY_AFTER_SLEEP,
    IOCTL_80211_IS_PORT_SECURED,
    
    IOCTL_ID_MAX
};

#define SIOCSTEST 0x10086

#endif /* IoctlId_h */
