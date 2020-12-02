#include "JavaLED.h"
#include <led.h>

static LED_t led =
{        
    .gpio.eMode = eModeOutput
};

JNIEXPORT void JNICALL Java_JavaLED_initLED(JNIEnv *env, jobject object, jint pin)
{
    led.gpio.pin = pin;
    if (LED_init(&led))
        return;
}

JNIEXPORT void JNICALL Java_JavaLED_setLED(JNIEnv *env, jobject object, jint state)
{
    LED_set(&led, (eState_t)state);
}
