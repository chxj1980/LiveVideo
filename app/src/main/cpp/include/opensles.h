//
// Created by Administrator on 2016/10/26.
//

#ifndef EASYPLAYER_OPENSLES_H
#define EASYPLAYER_OPENSLES_H

#include <SLES/OpenSLES.h>
#include <SLES/OpenSLES_Android.h>
#include <jni.h>
#include <pthread.h>
#include <assert.h>
#include "easyPlayer.h"

void createAudioEngine();//创建引擎
void createBufferQueueAudioPlayer(int sampleRate, int channel);
void audioStart();
void bqPlayerCallback(SLAndroidSimpleBufferQueueItf bq, void *context);
void releaseResampleBuf(void);
void init(EasyPlayer *player);

#endif //EASYPLAYER_OPENSLES_H
