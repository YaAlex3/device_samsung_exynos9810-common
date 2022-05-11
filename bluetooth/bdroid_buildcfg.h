/*
 * Copyright (C) 2021 The LineageOS Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _BDROID_BUILDCFG_H
#define _BDROID_BUILDCFG_H

#pragma push_macro("PROPERTY_VALUE_MAX")

#if !defined(OS_GENERIC)
#include <cutils/properties.h>
#include <string.h>

#define BTM_DEF_LOCAL_NAME "Galaxy Note10 Lite"
#endif /* OS_GENERIC */

/*
 * Toggles support for vendor specific extensions such as RPA offloading,
 * feature discovery, multi-adv etc.
 */
#define BLE_VND_INCLUDED TRUE

/* 'strings libbluetooth.so' */
#define BTA_AV_SINK_INCLUDED TRUE

#define BTM_ESCO_TRANSPORT_UNIT_SIZE_PCM16

#pragma pop_macro("PROPERTY_VALUE_MAX")

#endif /* _BDROID_BUILDCFG_H */
