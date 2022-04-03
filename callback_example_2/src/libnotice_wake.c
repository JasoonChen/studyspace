/*库模块
 *实现注册函数
 *实现事件触发回调
 */
#include "libnotice_wake.h"

/*定义一个函数指针全局变量*/
ask_for_wakeup g_wakeup_ptr;

int registe_callback(call_function *reg_fun)
{
	
	/*注册:g_wakeup_ptr是个函数指针*/
	g_wakeup_ptr = reg_fun->function;

	return 0;
}

/*事件函数*/
void notice_event(int event)
{
	g_wakeup_ptr(event);	
}
