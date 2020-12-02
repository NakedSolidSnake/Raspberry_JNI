#include "JavaButton.h"
#include <button.h>
#include <stdlib.h>
#include <unistd.h>

#define _1ms 1000

static Button_t button = {    
    .gpio.eMode = eModeInput,
    .ePullMode = ePullModePullUp,
    .eIntEdge = eIntEdgeFalling,
    .cb = NULL};

JNIEXPORT void JNICALL Java_JavaButton_initButton(JNIEnv *env, jobject object, jint pin)
{
    button.gpio.pin = pin;
    if (Button_init(&button))
       return;
}

JNIEXPORT jint JNICALL Java_JavaButton_readButton(JNIEnv *env, jobject object)
{
    while (1)
    {
        if (!Button_read(&button))
        {
            usleep(_1ms * 40);
            while (!Button_read(&button))
                ;
            usleep(_1ms * 40);
            break;
        }
        else
        {
            usleep(_1ms);
        }
    }
    return 0;
}