// MESSAGE CAMERA_FEEDBACK_REQUEST PACKING

#define MAVLINK_MSG_ID_CAMERA_FEEDBACK_REQUEST 184

typedef struct __mavlink_camera_feedback_request_t
{
 uint16_t img_idx; ///< Image index
 uint8_t target_system; ///< System ID
 uint8_t cam_idx; ///< Camera ID
} mavlink_camera_feedback_request_t;

#define MAVLINK_MSG_ID_CAMERA_FEEDBACK_REQUEST_LEN 4
#define MAVLINK_MSG_ID_184_LEN 4

#define MAVLINK_MSG_ID_CAMERA_FEEDBACK_REQUEST_CRC 125
#define MAVLINK_MSG_ID_184_CRC 125



#define MAVLINK_MESSAGE_INFO_CAMERA_FEEDBACK_REQUEST { \
	"CAMERA_FEEDBACK_REQUEST", \
	3, \
	{  { "img_idx", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_camera_feedback_request_t, img_idx) }, \
         { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_camera_feedback_request_t, target_system) }, \
         { "cam_idx", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_camera_feedback_request_t, cam_idx) }, \
         } \
}


/**
 * @brief Pack a camera_feedback_request message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system System ID
 * @param cam_idx Camera ID
 * @param img_idx Image index
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_camera_feedback_request_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint8_t target_system, uint8_t cam_idx, uint16_t img_idx)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_CAMERA_FEEDBACK_REQUEST_LEN];
	_mav_put_uint16_t(buf, 0, img_idx);
	_mav_put_uint8_t(buf, 2, target_system);
	_mav_put_uint8_t(buf, 3, cam_idx);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CAMERA_FEEDBACK_REQUEST_LEN);
#else
	mavlink_camera_feedback_request_t packet;
	packet.img_idx = img_idx;
	packet.target_system = target_system;
	packet.cam_idx = cam_idx;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CAMERA_FEEDBACK_REQUEST_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_CAMERA_FEEDBACK_REQUEST;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CAMERA_FEEDBACK_REQUEST_LEN, MAVLINK_MSG_ID_CAMERA_FEEDBACK_REQUEST_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CAMERA_FEEDBACK_REQUEST_LEN);
#endif
}

/**
 * @brief Pack a camera_feedback_request message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_system System ID
 * @param cam_idx Camera ID
 * @param img_idx Image index
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_camera_feedback_request_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint8_t target_system,uint8_t cam_idx,uint16_t img_idx)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_CAMERA_FEEDBACK_REQUEST_LEN];
	_mav_put_uint16_t(buf, 0, img_idx);
	_mav_put_uint8_t(buf, 2, target_system);
	_mav_put_uint8_t(buf, 3, cam_idx);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CAMERA_FEEDBACK_REQUEST_LEN);
#else
	mavlink_camera_feedback_request_t packet;
	packet.img_idx = img_idx;
	packet.target_system = target_system;
	packet.cam_idx = cam_idx;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CAMERA_FEEDBACK_REQUEST_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_CAMERA_FEEDBACK_REQUEST;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CAMERA_FEEDBACK_REQUEST_LEN, MAVLINK_MSG_ID_CAMERA_FEEDBACK_REQUEST_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CAMERA_FEEDBACK_REQUEST_LEN);
#endif
}

/**
 * @brief Encode a camera_feedback_request struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param camera_feedback_request C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_camera_feedback_request_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_camera_feedback_request_t* camera_feedback_request)
{
	return mavlink_msg_camera_feedback_request_pack(system_id, component_id, msg, camera_feedback_request->target_system, camera_feedback_request->cam_idx, camera_feedback_request->img_idx);
}

/**
 * @brief Encode a camera_feedback_request struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param camera_feedback_request C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_camera_feedback_request_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_camera_feedback_request_t* camera_feedback_request)
{
	return mavlink_msg_camera_feedback_request_pack_chan(system_id, component_id, chan, msg, camera_feedback_request->target_system, camera_feedback_request->cam_idx, camera_feedback_request->img_idx);
}

/**
 * @brief Send a camera_feedback_request message
 * @param chan MAVLink channel to send the message
 *
 * @param target_system System ID
 * @param cam_idx Camera ID
 * @param img_idx Image index
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_camera_feedback_request_send(mavlink_channel_t chan, uint8_t target_system, uint8_t cam_idx, uint16_t img_idx)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_CAMERA_FEEDBACK_REQUEST_LEN];
	_mav_put_uint16_t(buf, 0, img_idx);
	_mav_put_uint8_t(buf, 2, target_system);
	_mav_put_uint8_t(buf, 3, cam_idx);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAMERA_FEEDBACK_REQUEST, buf, MAVLINK_MSG_ID_CAMERA_FEEDBACK_REQUEST_LEN, MAVLINK_MSG_ID_CAMERA_FEEDBACK_REQUEST_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAMERA_FEEDBACK_REQUEST, buf, MAVLINK_MSG_ID_CAMERA_FEEDBACK_REQUEST_LEN);
#endif
#else
	mavlink_camera_feedback_request_t packet;
	packet.img_idx = img_idx;
	packet.target_system = target_system;
	packet.cam_idx = cam_idx;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAMERA_FEEDBACK_REQUEST, (const char *)&packet, MAVLINK_MSG_ID_CAMERA_FEEDBACK_REQUEST_LEN, MAVLINK_MSG_ID_CAMERA_FEEDBACK_REQUEST_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAMERA_FEEDBACK_REQUEST, (const char *)&packet, MAVLINK_MSG_ID_CAMERA_FEEDBACK_REQUEST_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_CAMERA_FEEDBACK_REQUEST_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_camera_feedback_request_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t target_system, uint8_t cam_idx, uint16_t img_idx)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint16_t(buf, 0, img_idx);
	_mav_put_uint8_t(buf, 2, target_system);
	_mav_put_uint8_t(buf, 3, cam_idx);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAMERA_FEEDBACK_REQUEST, buf, MAVLINK_MSG_ID_CAMERA_FEEDBACK_REQUEST_LEN, MAVLINK_MSG_ID_CAMERA_FEEDBACK_REQUEST_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAMERA_FEEDBACK_REQUEST, buf, MAVLINK_MSG_ID_CAMERA_FEEDBACK_REQUEST_LEN);
#endif
#else
	mavlink_camera_feedback_request_t *packet = (mavlink_camera_feedback_request_t *)msgbuf;
	packet->img_idx = img_idx;
	packet->target_system = target_system;
	packet->cam_idx = cam_idx;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAMERA_FEEDBACK_REQUEST, (const char *)packet, MAVLINK_MSG_ID_CAMERA_FEEDBACK_REQUEST_LEN, MAVLINK_MSG_ID_CAMERA_FEEDBACK_REQUEST_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAMERA_FEEDBACK_REQUEST, (const char *)packet, MAVLINK_MSG_ID_CAMERA_FEEDBACK_REQUEST_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE CAMERA_FEEDBACK_REQUEST UNPACKING


/**
 * @brief Get field target_system from camera_feedback_request message
 *
 * @return System ID
 */
static inline uint8_t mavlink_msg_camera_feedback_request_get_target_system(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Get field cam_idx from camera_feedback_request message
 *
 * @return Camera ID
 */
static inline uint8_t mavlink_msg_camera_feedback_request_get_cam_idx(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  3);
}

/**
 * @brief Get field img_idx from camera_feedback_request message
 *
 * @return Image index
 */
static inline uint16_t mavlink_msg_camera_feedback_request_get_img_idx(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Decode a camera_feedback_request message into a struct
 *
 * @param msg The message to decode
 * @param camera_feedback_request C-struct to decode the message contents into
 */
static inline void mavlink_msg_camera_feedback_request_decode(const mavlink_message_t* msg, mavlink_camera_feedback_request_t* camera_feedback_request)
{
#if MAVLINK_NEED_BYTE_SWAP
	camera_feedback_request->img_idx = mavlink_msg_camera_feedback_request_get_img_idx(msg);
	camera_feedback_request->target_system = mavlink_msg_camera_feedback_request_get_target_system(msg);
	camera_feedback_request->cam_idx = mavlink_msg_camera_feedback_request_get_cam_idx(msg);
#else
	memcpy(camera_feedback_request, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_CAMERA_FEEDBACK_REQUEST_LEN);
#endif
}
