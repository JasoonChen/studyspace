#ifndef __LIBNOTICE_WAKE_H
#define __LIBNOTICE_WAKE_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>

/*叫醒服务方式的枚举*/
enum ask_wakeup_way
{
	call_me=1,		/*打电话*/
	knocking_door_me,	/*敲门*/	
	watering_head_me,	/*泼水*/	
};

typedef void (*ask_for_wakeup)(int num);	/*库（中间）函数*/

typedef struct call_function_t		/*库（中间）函数结构体*/
{
	int way;
	ask_for_wakeup function;
}call_function;

int registe_callback(call_function *reg_fun);		/*注册库（中间）函数*/
void notice_event(int num);	/*事件函数*/

#endif
