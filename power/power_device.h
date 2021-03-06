/*
 * Copyright (C) 2016 The CyanogenMod Project
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

static power_profile profiles[PROFILE_MAX] = {
    [PROFILE_POWER_SAVE] = {
        .boost = 0,
        .boostpulse_duration = 0,
        .go_hispeed_load = 95,
        .go_hispeed_load_off = 95,
        .hispeed_freq = 800000,
        .hispeed_freq_off = 800000,
        .min_sample_time = 50000,
        .timer_rate = 30000,
        .above_hispeed_delay = "25000 1094400:50000",
        .target_loads = "1 800000:90 998400:95 1094400:85",
        .target_loads_off = 95,
        .scaling_max_freq = 998400,
        .scaling_min_freq = 400000,
        .scaling_min_freq_off = 200000,
    },
    [PROFILE_BALANCED] = {
        .boost = 0,
        .boostpulse_duration = 60000,
        .go_hispeed_load = 90,
        .go_hispeed_load_off = 95,
        .hispeed_freq = 998400,
        .hispeed_freq_off = 800000,
        .min_sample_time = 50000,
        .timer_rate = 30000,
        .above_hispeed_delay = "25000 1094400:50000",
        .target_loads = "1 800000:85 998400:90 1094400:80",
        .target_loads_off = 95,
        .scaling_max_freq = 1363200,
        .scaling_min_freq = 800000,
        .scaling_min_freq_off = 200000,
    },
    [PROFILE_HIGH_PERFORMANCE] = {
        .boost = 1,
        /* The CPU is already boosted, set duration to zero
         * to avoid unneccessary writes to boostpulse */
        .boostpulse_duration = 0,
        .go_hispeed_load = 60,
        .go_hispeed_load_off = 70,
        .hispeed_freq = 998400,
        .hispeed_freq_off = 998400,
        .min_sample_time = 50000,
        .timer_rate = 30000,
        .above_hispeed_delay = "25000 1094400:50000",
        .target_loads = "1 800000:70 998400:60 1094400:80",
        .target_loads_off = 80,
        .scaling_max_freq = 1363200,
        .scaling_min_freq = 800000,
        .scaling_min_freq_off = 200000,
    },
    [PROFILE_BIAS_POWER_SAVE] = {
        .boost = 0,
        .boostpulse_duration = 40000,
        .go_hispeed_load = 90,
        .go_hispeed_load_off = 95,
        .hispeed_freq = 800000,
        .hispeed_freq_off = 800000,
        .min_sample_time = 50000,
        .timer_rate = 30000,
        .above_hispeed_delay = "25000 1094400:50000",
        .target_loads = "1 800000:90 998400:95 1094400:85",
        .target_loads_off = 95,
        .scaling_max_freq = 1363200,
        .scaling_min_freq = 400000,
        .scaling_min_freq_off = 200000,
    },
};
