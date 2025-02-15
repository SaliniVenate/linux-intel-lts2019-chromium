/******************************************************************************
 *
 * This file is provided under a dual BSD/GPLv2 license.  When using or
 * redistributing this file, you may do so under either license.
 *
 * GPL LICENSE SUMMARY
 *
 * Copyright(c) 2013 - 2015 Intel Mobile Communications GmbH
 * Copyright(c) 2016 - 2017 Intel Deutschland GmbH
 * Copyright(c) 2012 - 2014, 2018, 2020 Intel Corporation
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of version 2 of the GNU General Public License as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * The full GNU General Public License is included in this distribution
 * in the file called COPYING.
 *
 * Contact Information:
 *  Intel Linux Wireless <linuxwifi@intel.com>
 * Intel Corporation, 5200 N.E. Elam Young Parkway, Hillsboro, OR 97124-6497
 *
 * BSD LICENSE
 *
 * Copyright(c) 2013 - 2015 Intel Mobile Communications GmbH
 * Copyright(c) 2012 - 2014, 2018, 2020 Intel Corporation
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *  * Neither the name Intel Corporation nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 *****************************************************************************/

#ifndef __iwl_fw_api_stats_h__
#define __iwl_fw_api_stats_h__
#include "mac.h"

struct mvm_statistics_dbg {
	__le32 burst_check;
	__le32 burst_count;
	__le32 wait_for_silence_timeout_cnt;
	u8 reserved[12];
} __packed; /* STATISTICS_DEBUG_API_S_VER_2 */

struct mvm_statistics_div {
	__le32 tx_on_a;
	__le32 tx_on_b;
	__le32 exec_time;
	__le32 probe_time;
	__le32 rssi_ant;
	__le32 reserved2;
} __packed; /* STATISTICS_SLOW_DIV_API_S_VER_2 */

/**
 * struct mvm_statistics_rx_non_phy
 * @bogus_cts: CTS received when not expecting CTS
 * @bogus_ack: ACK received when not expecting ACK
 * @non_channel_beacons: beacons with our bss id but not on our serving channel
 * @channel_beacons: beacons with our bss id and in our serving channel
 * @num_missed_bcon: number of missed beacons
 * @adc_rx_saturation_time: count in 0.8us units the time the ADC was in
 *	saturation
 * @ina_detection_search_time: total time (in 0.8us) searched for INA
 * @beacon_silence_rssi_a: RSSI silence after beacon frame
 * @beacon_silence_rssi_b: RSSI silence after beacon frame
 * @beacon_silence_rssi_c: RSSI silence after beacon frame
 * @interference_data_flag: flag for interference data availability. 1 when data
 *	is available.
 * @channel_load: counts RX Enable time in uSec
 * @beacon_rssi_a: beacon RSSI on anntena A
 * @beacon_rssi_b: beacon RSSI on antenna B
 * @beacon_rssi_c: beacon RSSI on antenna C
 * @beacon_energy_a: beacon energy on antenna A
 * @beacon_energy_b: beacon energy on antenna B
 * @beacon_energy_c: beacon energy on antenna C
 * @num_bt_kills: number of BT "kills" (frame TX aborts)
 * @mac_id: mac ID
 */
struct mvm_statistics_rx_non_phy {
	__le32 bogus_cts;
	__le32 bogus_ack;
	__le32 non_channel_beacons;
	__le32 channel_beacons;
	__le32 num_missed_bcon;
	__le32 adc_rx_saturation_time;
	__le32 ina_detection_search_time;
	__le32 beacon_silence_rssi_a;
	__le32 beacon_silence_rssi_b;
	__le32 beacon_silence_rssi_c;
	__le32 interference_data_flag;
	__le32 channel_load;
	__le32 beacon_rssi_a;
	__le32 beacon_rssi_b;
	__le32 beacon_rssi_c;
	__le32 beacon_energy_a;
	__le32 beacon_energy_b;
	__le32 beacon_energy_c;
	__le32 num_bt_kills;
	__le32 mac_id;
} __packed; /* STATISTICS_RX_NON_PHY_API_S_VER_4 */

struct mvm_statistics_rx_non_phy_v3 {
	__le32 bogus_cts;	/* CTS received when not expecting CTS */
	__le32 bogus_ack;	/* ACK received when not expecting ACK */
	__le32 non_bssid_frames;	/* number of frames with BSSID that
					 * doesn't belong to the STA BSSID */
	__le32 filtered_frames;	/* count frames that were dumped in the
				 * filtering process */
	__le32 non_channel_beacons;	/* beacons with our bss id but not on
					 * our serving channel */
	__le32 channel_beacons;	/* beacons with our bss id and in our
				 * serving channel */
	__le32 num_missed_bcon;	/* number of missed beacons */
	__le32 adc_rx_saturation_time;	/* count in 0.8us units the time the
					 * ADC was in saturation */
	__le32 ina_detection_search_time;/* total time (in 0.8us) searched
					  * for INA */
	__le32 beacon_silence_rssi_a;	/* RSSI silence after beacon frame */
	__le32 beacon_silence_rssi_b;	/* RSSI silence after beacon frame */
	__le32 beacon_silence_rssi_c;	/* RSSI silence after beacon frame */
	__le32 interference_data_flag;	/* flag for interference data
					 * availability. 1 when data is
					 * available. */
	__le32 channel_load;		/* counts RX Enable time in uSec */
	__le32 dsp_false_alarms;	/* DSP false alarm (both OFDM
					 * and CCK) counter */
	__le32 beacon_rssi_a;
	__le32 beacon_rssi_b;
	__le32 beacon_rssi_c;
	__le32 beacon_energy_a;
	__le32 beacon_energy_b;
	__le32 beacon_energy_c;
	__le32 num_bt_kills;
	__le32 mac_id;
	__le32 directed_data_mpdu;
} __packed; /* STATISTICS_RX_NON_PHY_API_S_VER_3 */

struct mvm_statistics_rx_phy {
	__le32 unresponded_rts;
	__le32 rxe_frame_lmt_overrun;
	__le32 sent_ba_rsp_cnt;
	__le32 dsp_self_kill;
	__le32 reserved;
} __packed; /* STATISTICS_RX_PHY_API_S_VER_3 */

struct mvm_statistics_rx_phy_v2 {
	__le32 ina_cnt;
	__le32 fina_cnt;
	__le32 plcp_err;
	__le32 crc32_err;
	__le32 overrun_err;
	__le32 early_overrun_err;
	__le32 crc32_good;
	__le32 false_alarm_cnt;
	__le32 fina_sync_err_cnt;
	__le32 sfd_timeout;
	__le32 fina_timeout;
	__le32 unresponded_rts;
	__le32 rxe_frame_lmt_overrun;
	__le32 sent_ack_cnt;
	__le32 sent_cts_cnt;
	__le32 sent_ba_rsp_cnt;
	__le32 dsp_self_kill;
	__le32 mh_format_err;
	__le32 re_acq_main_rssi_sum;
	__le32 reserved;
} __packed; /* STATISTICS_RX_PHY_API_S_VER_2 */

struct mvm_statistics_rx_ht_phy_v1 {
	__le32 plcp_err;
	__le32 overrun_err;
	__le32 early_overrun_err;
	__le32 crc32_good;
	__le32 crc32_err;
	__le32 mh_format_err;
	__le32 agg_crc32_good;
	__le32 agg_mpdu_cnt;
	__le32 agg_cnt;
	__le32 unsupport_mcs;
} __packed;  /* STATISTICS_HT_RX_PHY_API_S_VER_1 */

struct mvm_statistics_rx_ht_phy {
	__le32 mh_format_err;
	__le32 agg_mpdu_cnt;
	__le32 agg_cnt;
	__le32 unsupport_mcs;
} __packed;  /* STATISTICS_HT_RX_PHY_API_S_VER_2 */

struct mvm_statistics_tx_non_phy_v3 {
	__le32 preamble_cnt;
	__le32 rx_detected_cnt;
	__le32 bt_prio_defer_cnt;
	__le32 bt_prio_kill_cnt;
	__le32 few_bytes_cnt;
	__le32 cts_timeout;
	__le32 ack_timeout;
	__le32 expected_ack_cnt;
	__le32 actual_ack_cnt;
	__le32 dump_msdu_cnt;
	__le32 burst_abort_next_frame_mismatch_cnt;
	__le32 burst_abort_missing_next_frame_cnt;
	__le32 cts_timeout_collision;
	__le32 ack_or_ba_timeout_collision;
} __packed; /* STATISTICS_TX_NON_PHY_API_S_VER_3 */

struct mvm_statistics_tx_non_phy {
	__le32 bt_prio_defer_cnt;
	__le32 bt_prio_kill_cnt;
	__le32 few_bytes_cnt;
	__le32 cts_timeout;
	__le32 ack_timeout;
	__le32 dump_msdu_cnt;
	__le32 burst_abort_next_frame_mismatch_cnt;
	__le32 burst_abort_missing_next_frame_cnt;
	__le32 cts_timeout_collision;
	__le32 ack_or_ba_timeout_collision;
} __packed; /* STATISTICS_TX_NON_PHY_API_S_VER_4 */

#define MAX_CHAINS 3

struct mvm_statistics_tx_non_phy_agg {
	__le32 ba_timeout;
	__le32 ba_reschedule_frames;
	__le32 scd_query_agg_frame_cnt;
	__le32 scd_query_no_agg;
	__le32 scd_query_agg;
	__le32 scd_query_mismatch;
	__le32 frame_not_ready;
	__le32 underrun;
	__le32 bt_prio_kill;
	__le32 rx_ba_rsp_cnt;
	__s8 txpower[MAX_CHAINS];
	__s8 reserved;
	__le32 reserved2;
} __packed; /* STATISTICS_TX_NON_PHY_AGG_API_S_VER_1 */

struct mvm_statistics_tx_channel_width {
	__le32 ext_cca_narrow_ch20[1];
	__le32 ext_cca_narrow_ch40[2];
	__le32 ext_cca_narrow_ch80[3];
	__le32 ext_cca_narrow_ch160[4];
	__le32 last_tx_ch_width_indx;
	__le32 rx_detected_per_ch_width[4];
	__le32 success_per_ch_width[4];
	__le32 fail_per_ch_width[4];
}; /* STATISTICS_TX_CHANNEL_WIDTH_API_S_VER_1 */

struct mvm_statistics_tx_v4 {
	struct mvm_statistics_tx_non_phy_v3 general;
	struct mvm_statistics_tx_non_phy_agg agg;
	struct mvm_statistics_tx_channel_width channel_width;
} __packed; /* STATISTICS_TX_API_S_VER_4 */

struct mvm_statistics_tx {
	struct mvm_statistics_tx_non_phy general;
	struct mvm_statistics_tx_non_phy_agg agg;
	struct mvm_statistics_tx_channel_width channel_width;
} __packed; /* STATISTICS_TX_API_S_VER_5 */


struct mvm_statistics_bt_activity {
	__le32 hi_priority_tx_req_cnt;
	__le32 hi_priority_tx_denied_cnt;
	__le32 lo_priority_tx_req_cnt;
	__le32 lo_priority_tx_denied_cnt;
	__le32 hi_priority_rx_req_cnt;
	__le32 hi_priority_rx_denied_cnt;
	__le32 lo_priority_rx_req_cnt;
	__le32 lo_priority_rx_denied_cnt;
} __packed;  /* STATISTICS_BT_ACTIVITY_API_S_VER_1 */

struct mvm_statistics_general_common_v19 {
	__le32 radio_temperature;
	__le32 radio_voltage;
	struct mvm_statistics_dbg dbg;
	__le32 sleep_time;
	__le32 slots_out;
	__le32 slots_idle;
	__le32 ttl_timestamp;
	struct mvm_statistics_div slow_div;
	__le32 rx_enable_counter;
	/*
	 * num_of_sos_states:
	 *  count the number of times we have to re-tune
	 *  in order to get out of bad PHY status
	 */
	__le32 num_of_sos_states;
	__le32 beacon_filtered;
	__le32 missed_beacons;
	u8 beacon_filter_average_energy;
	u8 beacon_filter_reason;
	u8 beacon_filter_current_energy;
	u8 beacon_filter_reserved;
	__le32 beacon_filter_delta_time;
	struct mvm_statistics_bt_activity bt_activity;
	__le64 rx_time;
	__le64 on_time_rf;
	__le64 on_time_scan;
	__le64 tx_time;
} __packed;

struct mvm_statistics_general_common {
	__le32 radio_temperature;
	struct mvm_statistics_dbg dbg;
	__le32 sleep_time;
	__le32 slots_out;
	__le32 slots_idle;
	__le32 ttl_timestamp;
	struct mvm_statistics_div slow_div;
	__le32 rx_enable_counter;
	/*
	 * num_of_sos_states:
	 *  count the number of times we have to re-tune
	 *  in order to get out of bad PHY status
	 */
	__le32 num_of_sos_states;
	__le32 beacon_filtered;
	__le32 missed_beacons;
	u8 beacon_filter_average_energy;
	u8 beacon_filter_reason;
	u8 beacon_filter_current_energy;
	u8 beacon_filter_reserved;
	__le32 beacon_filter_delta_time;
	struct mvm_statistics_bt_activity bt_activity;
	__le64 rx_time;
	__le64 on_time_rf;
	__le64 on_time_scan;
	__le64 tx_time;
} __packed; /* STATISTICS_GENERAL_API_S_VER_10 */

struct mvm_statistics_general_v8 {
	struct mvm_statistics_general_common_v19 common;
	__le32 beacon_counter[NUM_MAC_INDEX];
	u8 beacon_average_energy[NUM_MAC_INDEX];
	u8 reserved[4 - (NUM_MAC_INDEX % 4)];
} __packed; /* STATISTICS_GENERAL_API_S_VER_8 */

struct mvm_statistics_general {
	struct mvm_statistics_general_common common;
	__le32 beacon_counter[MAC_INDEX_AUX];
	u8 beacon_average_energy[MAC_INDEX_AUX];
	u8 reserved[8 - MAC_INDEX_AUX];
} __packed; /* STATISTICS_GENERAL_API_S_VER_10 */

/**
 * struct mvm_statistics_load - RX statistics for multi-queue devices
 * @air_time: accumulated air time, per mac
 * @byte_count: accumulated byte count, per mac
 * @pkt_count: accumulated packet count, per mac
 * @avg_energy: average RSSI, per station
 */
struct mvm_statistics_load {
	__le32 air_time[MAC_INDEX_AUX];
	__le32 byte_count[MAC_INDEX_AUX];
	__le32 pkt_count[MAC_INDEX_AUX];
	u8 avg_energy[IWL_MVM_STATION_COUNT_MAX];
} __packed; /* STATISTICS_RX_MAC_STATION_S_VER_3 */

struct mvm_statistics_load_v1 {
	__le32 air_time[NUM_MAC_INDEX];
	__le32 byte_count[NUM_MAC_INDEX];
	__le32 pkt_count[NUM_MAC_INDEX];
	u8 avg_energy[IWL_MVM_STATION_COUNT_MAX];
} __packed; /* STATISTICS_RX_MAC_STATION_S_VER_1 */

struct mvm_statistics_rx {
	struct mvm_statistics_rx_phy ofdm;
	struct mvm_statistics_rx_phy cck;
	struct mvm_statistics_rx_non_phy general;
	struct mvm_statistics_rx_ht_phy ofdm_ht;
} __packed; /* STATISTICS_RX_API_S_VER_4 */

struct mvm_statistics_rx_v3 {
	struct mvm_statistics_rx_phy_v2 ofdm;
	struct mvm_statistics_rx_phy_v2 cck;
	struct mvm_statistics_rx_non_phy_v3 general;
	struct mvm_statistics_rx_ht_phy_v1 ofdm_ht;
} __packed; /* STATISTICS_RX_API_S_VER_3 */

/*
 * STATISTICS_NOTIFICATION = 0x9d (notification only, not a command)
 *
 * By default, uCode issues this notification after receiving a beacon
 * while associated.  To disable this behavior, set DISABLE_NOTIF flag in the
 * STATISTICS_CMD (0x9c), below.
 */

struct iwl_notif_statistics_v10 {
	__le32 flag;
	struct mvm_statistics_rx_v3 rx;
	struct mvm_statistics_tx_v4 tx;
	struct mvm_statistics_general_v8 general;
} __packed; /* STATISTICS_NTFY_API_S_VER_10 */

struct iwl_notif_statistics_v11 {
	__le32 flag;
	struct mvm_statistics_rx_v3 rx;
	struct mvm_statistics_tx_v4 tx;
	struct mvm_statistics_general_v8 general;
	struct mvm_statistics_load_v1 load_stats;
} __packed; /* STATISTICS_NTFY_API_S_VER_11 */

struct iwl_notif_statistics {
	__le32 flag;
	struct mvm_statistics_rx rx;
	struct mvm_statistics_tx tx;
	struct mvm_statistics_general general;
	struct mvm_statistics_load load_stats;
} __packed; /* STATISTICS_NTFY_API_S_VER_13 */

/**
 * enum iwl_statistics_notif_flags - flags used in statistics notification
 * @IWL_STATISTICS_REPLY_FLG_CLEAR: statistics were cleared after this report
 */
enum iwl_statistics_notif_flags {
	IWL_STATISTICS_REPLY_FLG_CLEAR		= 0x1,
};

/**
 * enum iwl_statistics_cmd_flags - flags used in statistics command
 * @IWL_STATISTICS_FLG_CLEAR: request to clear statistics after the report
 *	that's sent after this command
 * @IWL_STATISTICS_FLG_DISABLE_NOTIF: disable unilateral statistics
 *	notifications
 */
enum iwl_statistics_cmd_flags {
	IWL_STATISTICS_FLG_CLEAR		= 0x1,
	IWL_STATISTICS_FLG_DISABLE_NOTIF	= 0x2,
};

/**
 * struct iwl_statistics_cmd - statistics config command
 * @flags: flags from &enum iwl_statistics_cmd_flags
 */
struct iwl_statistics_cmd {
	__le32 flags;
} __packed; /* STATISTICS_CMD_API_S_VER_1 */

#endif /* __iwl_fw_api_stats_h__ */
