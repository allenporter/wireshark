/* gui_stat_menu.h
 * GTK+-specific menu definitions for use by stats
 *
 * $Id$
 *
 * Wireshark - Network traffic analyzer
 * By Gerald Combs <gerald@wireshark.org>
 * Copyright 1998 Gerald Combs
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 */

#ifndef __GTK_STAT_MENU_H__
#define __GTK_STAT_MENU_H__

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/** @file
 * Add a new menu item for a stat.
 */

/**
 * XXX TODO: Rewrite me
 * NOTE comments refere to old menus.c implementation.
 *
 * Same as register_stat_menu_item() but with optional stock item.
 *
 * @param name the menu label
 *
 * @param group the menu group this stat should be registered to
 *
 * @param stock_id the stock_id (icon) to show, or NULL
 *
 * @param callback gets called when the menu item is selected; it should do
 * the work of creating the stat window.
 *
 * @param selected_packet_enabled gets called by set_menus_for_selected_packet();
 * it's passed a pointer to the "frame_data" structure for the current frame,
 * if any, and to the "epan_dissect_t" structure for that frame, if any, and
 * should return TRUE if the stat will work now (which might depend on whether
 * a frame is selected and, if one is, on the frame) and FALSE if not.
 *
 * @param selected_tree_row_enabled gets called by
 * set_menus_for_selected_tree_row(); it's passed a pointer to the
 * "field_info" structure for the currently selected field, if any,
 * and should return TRUE if the stat will work now (which might depend on
 * whether a tree row is selected and, if one is, on the tree row) and
 * FALSE if not.
 *
 * @param callback_data data for callback function
 */
void register_lua_menu_bar_menu_items(
    const char   *gui_path,
    const char   *name,
    const gchar  *stock_id,
    const char   *label,
    const char   *accelerator,
    const gchar  *tooltip,
    gpointer     callback,
    gpointer	 callback_data,
    gboolean     enabled,
    gboolean (*selected_packet_enabled)(frame_data *, epan_dissect_t *, gpointer callback_data),
    gboolean (*selected_tree_row_enabled)(field_info *, gpointer callback_data));

void eth_endpoints_cb(GtkAction *action, gpointer user_data);
void fc_endpoints_cb(GtkAction *action, gpointer user_data);
void fddi_endpoints_cb(GtkAction *action, gpointer user_data);
void ip_endpoints_cb(GtkAction *action, gpointer user_data);
void ipv6_endpoints_cb(GtkAction *action, gpointer user_data);
void ipx_endpoints_cb(GtkAction *action, gpointer user_data);
void jxta_conversation_cb(GtkAction *action, gpointer user_data);
void ncp_endpoints_cb(GtkAction *action, gpointer user_data);
void rsvp_endpoints_cb(GtkAction *action, gpointer user_data);
void sctp_conversation_cb(GtkAction *action, gpointer user_data);
void tcpip_conversation_cb(GtkAction *action, gpointer user_data);
void tr_conversation_cb(GtkAction *action, gpointer user_data);
void udpip_conversation_cb(GtkAction *action, gpointer user_data);
void usb_endpoints_cb(GtkAction *action, gpointer user_data);
void wlan_endpoints_cb(GtkAction *action, gpointer user_data);

void gtk_eth_hostlist_cb(GtkAction *action, gpointer user_data);
void gtk_fc_hostlist_cb(GtkAction *action, gpointer user_data);
void gtk_fddi_hostlist_cb(GtkAction *action, gpointer user_data);
void gtk_ip_hostlist_cb(GtkAction *action, gpointer user_data);
void gtk_ipv6_hostlist_cb(GtkAction *action, gpointer user_data);
void gtk_ipx_hostlist_cb(GtkAction *action, gpointer user_data);
void gtk_jxta_hostlist_cb(GtkAction *action, gpointer user_data);
void gtk_ncp_hostlist_cb(GtkAction *action, gpointer user_data);
void gtk_rsvp_hostlist_cb(GtkAction *action, gpointer user_data);
void gtk_sctp_hostlist_cb(GtkAction *action, gpointer user_data);
void gtk_tcpip_hostlist_cb(GtkAction *action, gpointer user_data);
void gtk_tr_hostlist_cb(GtkAction *action, gpointer user_data);
void gtk_udpip_hostlist_cb(GtkAction *action, gpointer user_data);
void gtk_usb_hostlist_cb(GtkAction *action, gpointer user_data);
void gtk_wlan_hostlist_cb(GtkAction *action, gpointer user_data);

void gtk_rpcstat_cb(GtkAction *action, gpointer user_data);
void bootp_dhcp_stat_cb(GtkAction *action, gpointer user_data);
void gtk_comparestat_cb(GtkAction *action, gpointer user_data);

void flow_graph_launch(GtkAction *action, gpointer user_data);

void iax2_analysis_cb(GtkAction *action, gpointer user_data);
void mtp3_stat_gtk_cb(GtkAction *action, gpointer user_data);
void mtp3_sum_gtk_sum_cb(GtkAction *action, gpointer user_data);
void rtp_analysis_cb(GtkAction *action, gpointer user_data);
void rtpstream_launch(GtkAction *action, gpointer user_data);
void sctp_analyse_start(GtkAction *action, gpointer user_data);
void sctp_chunk_counter_cb(GtkAction *action, gpointer user_data);
void sctp_stat_start(GtkAction *action, gpointer user_data);

void gui_iostat_cb(GtkAction *action, gpointer user_data);

void voip_calls_launch(GtkAction *action, gpointer user_data);

void ansi_a_stat_gtk_bsmap_cb(GtkAction *action, gpointer user_data);
void ansi_a_stat_gtk_dtap_cb(GtkAction *action, gpointer user_data);
void ansi_map_stat_gtk_cb(GtkAction *action, gpointer user_data);

void camel_counter_cb(GtkAction *action, gpointer user_data);
void h225_counter_cb(GtkAction *action, gpointer user_data);
void gsm_a_stat_gtk_bssmap_cb(GtkAction *action, gpointer user_data);
void gsm_a_stat_gtk_dtap_mm_cb(GtkAction *action, gpointer user_data);
void gsm_a_stat_gtk_dtap_rr_cb(GtkAction *action, gpointer user_data);
void gsm_a_stat_gtk_dtap_cc_cb(GtkAction *action, gpointer user_data);
void gsm_a_stat_gtk_dtap_gmm_cb(GtkAction *action, gpointer user_data);
void gsm_a_stat_gtk_dtap_sms_cb(GtkAction *action, gpointer user_data);
void gsm_a_stat_gtk_dtap_sm_cb(GtkAction *action, gpointer user_data);
void gsm_a_stat_gtk_dtap_ss_cb(GtkAction *action, gpointer user_data);
void gsm_a_stat_gtk_dtap_tp_cb(GtkAction *action, gpointer user_data);
void gsm_a_stat_gtk_sacch_rr_cb(GtkAction *action, gpointer user_data);
void mac_lte_stat_cb(GtkAction *action, gpointer user_data);
void rlc_lte_stat_cb(GtkAction *action, gpointer user_data);
void sipstat_cb(GtkAction *action, gpointer user_data);
void wsp_stat_cb(GtkAction *action, gpointer user_data);

void gsm_map_stat_gtk_cb(GtkAction *action, gpointer user_data);
void gsm_map_stat_gtk_sum_cb(GtkAction *action, gpointer user_data);

void afp_srt_stat_cb(GtkAction *action, gpointer user_data);
void camel_srt_cb(GtkAction *action, gpointer user_data);
void gtk_dcerpcstat_cb(GtkAction *action, gpointer user_data);
void diameter_srt_cb(GtkAction *action, gpointer user_data);
void fc_srt_cb(GtkAction *action, gpointer user_data);
void gtp_srt_cb(GtkAction *action, gpointer user_data);
void h225_srt_cb(GtkAction *action, gpointer user_data);
void ldap_srt_cb(GtkAction *action, gpointer user_data);
void megaco_srt_cb(GtkAction *action, gpointer user_data);
void mgcp_srt_cb(GtkAction *action, gpointer user_data);
void ncp_srt_cb(GtkAction *action, gpointer user_data);
void radius_srt_cb(GtkAction *action, gpointer user_data);
void scsi_srt_cb(GtkAction *action, gpointer user_data);
void smb2_srt_cb(GtkAction *action, gpointer user_data);
void smb_srt_cb(GtkAction *action, gpointer user_data);

void gtk_stats_tree_cb(GtkAction *action, gpointer user_data);

void tcp_graph_cb (GtkAction *action, gpointer user_data);
gboolean tcp_graph_selected_packet_enabled(frame_data *current_frame, epan_dissect_t *edt, gpointer callback_data _U_);

void gtk_rpcprogs_cb(GtkWidget *w, gpointer data);
void mcaststream_launch(GtkAction *action, gpointer user_data);
void wlanstat_launch(GtkAction *action, gpointer user_data);

/** Adds a callback to be executed when the menubar is ready to have menus and items added to it */
void ws_add_build_menubar_items_callback(gpointer callback);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __GTK_STAT_MENU_H__ */