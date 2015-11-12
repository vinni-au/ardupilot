/// -*- tab-width: 4; Mode: C++; c-basic-offset: 4; indent-tabs-mode: nil -*-


#ifdef USERHOOK_INIT
void userhook_init()
{
}
#endif

#ifdef USERHOOK_FASTLOOP
void userhook_FastLoop()
{
}
#endif

#ifdef USERHOOK_50HZLOOP
void userhook_50Hz()
{
}
#endif

#ifdef USERHOOK_MEDIUMLOOP
void userhook_MediumLoop()
{
}
#endif


#ifdef USERHOOK_SLOWLOOP
void userhook_SlowLoop()
{
}
#endif

#ifdef USERHOOK_SUPERSLOWLOOP
void userhook_SuperSlowLoop()
{
//    mavlink_status_t* status0 = mavlink_get_channel_status(MAVLINK_COMM_0);
//    mavlink_status_t* status1 = mavlink_get_channel_status(MAVLINK_COMM_1);
//    mavlink_status_t* status2 = mavlink_get_channel_status(MAVLINK_COMM_2);
//    mavlink_status_t* status3 = mavlink_get_channel_status(MAVLINK_COMM_2);
//    gcs_send_text_fmt(PSTR("%d %d / %d | %d %d / %d | %d %d / %d | %d %d / %d"),
//            status0->parse_error, status0->packet_rx_drop_count, status0->packet_rx_success_count,
//            status1->parse_error, status1->packet_rx_drop_count, status1->packet_rx_success_count,
//            status2->parse_error, status2->packet_rx_drop_count, status2->packet_rx_success_count,
//            status3->parse_error, status3->packet_rx_drop_count, status3->packet_rx_success_count
//            );
}
#endif
