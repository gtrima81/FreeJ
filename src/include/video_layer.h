/*  FreeJ
 *  (c) Copyright 2001 Silvano Galliani aka kysucix <silvano.galliani@poste.it>
 *
 * This source code is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Public License as published 
 * by the Free Software Foundation; either version 2 of the License,
 * or (at your option) any later version.
 *
 * This source code is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * Please refer to the GNU Public License for more details.
 *
 * You should have received a copy of the GNU Public License along with
 * this source code; if not, write to:
 * Free Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#ifndef __avcodec_h__
#define __avcodec_h__

#include <config.h>

extern "C" {
#include <avcodec.h>
#include <avformat.h>
#ifdef WITH_SWSCALE
#include <swscale.h>
#endif
}
#include <layer.h>
#define INBUF_SIZE 4096
#define NO_MARK -1
#define FIFO_SIZE 2

#include <callback.h>

//void av_log_null_callback(void* ptr, int level, const char* fmt, va_list vl);

class VideoLayer: public Layer {
    private:
	/**
	 * av(codec|format) aka ffmpeg related variables
	 */
	AVCodec *avcodec;
	AVInputFormat *fmt;
	AVFormatContext *avformat_context;
	AVStream *avformat_stream;
	AVPicture *rgba_picture;
	AVPacket pkt;
	AVCodecContext *enc;
	AVCodec *codec;
	AVFrame av_frame;
#ifdef WITH_SWSCALE
	struct SwsContext *img_convert_ctx;
#endif

	uint8_t *av_buf;
	uint8_t *deinterlace_buffer;
	int packet_len;
	double packet_pts;
	unsigned char *ptr;
	double video_last_P_pts;
	double video_clock;
	double video_current_pts;
	double video_current_pts_time;

	/**
	 * Number of decoded frames. As for now together with picture_number
	 * it's broken when seeking TODO!
	 */
	int frame_number;
	int picture_number;

	/**
	 * application variables
	 */
	struct frame_fifo_t { // I want it hard, I want it raw
		AVPicture *picture[FIFO_SIZE];
		int picture_type[FIFO_SIZE];
		int length;
	} frame_fifo;
	int fifo_position;
	bool deinterlaced;
	bool backward_control;
	bool paused;
	bool seekable;
	bool grab_dv;
	double mark_in;
	double mark_out;
	/** dropping frames variables */
	int user_play_speed; /** play speed to be visualized to the user */
	int play_speed; /** real speed */
	int play_speed_control;


	char *full_filename;

	int video_index;
	FILE *fp;

	/** private methods */
	int decode_packet( int *got_picture);
	int seek(int64_t timestamp);
	void set_speed(int speed);
	double get_master_clock();
	void deinterlace(AVPicture *picture);
	int new_fifo();
	void free_fifo();
	int new_picture(AVPicture *p);
	void free_picture(AVPicture *p);

	// quick hack for EOS callback
	DumbCallback *eos;

    public:
	VideoLayer();
	~VideoLayer();

	bool init(Context *freej);
	bool init(Context *freej, int w, int h) { return init(freej); };

	bool open(const char *file);
	void *feed();
	void close();

	bool forward();
	bool backward();
	bool backward_one_keyframe();
	bool relative_seek(double increment);

	bool keypress(int key);
	void more_speed();
	void less_speed();
	bool set_mark_in();
	bool set_mark_out();
	void pause();

	// quick hack for EOS callback
	bool add_eos_call(DumbCall *c) { return eos->add_call(c); }
	bool rem_eos_call(DumbCall *c) { return eos->rem_call(c); }
};

#endif
