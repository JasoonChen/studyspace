#include "libnotice_wake.h"

/*这个才是回调函数*/
void callback_function(int event)
{
	switch(event)
	{
		case call_me:
			{
				printf("Hello,this is hotel servicer.Get up!\n");
			}
			break;
		case knocking_door_me:
			{
				printf("peng~ peng~ peng~.Get up!\n");
			
			}
			break;
		case watering_head_me:
			{
				printf("hua hua hua. fuck!\n");
				
			}
			break;
		default:
			{
				printf("Unsupport wakeup way. Please input 1 to 3 !\n");
					
			}
	}	
}


int main()
{
	int ret = 0;
	int event = 0;	

	call_function ptr_get_up;
	ptr_get_up.way = 1;
	ptr_get_up.function = callback_function;

	/*注册回调函数*/
	ret = registe_callback(&ptr_get_up);
	if (-1 == ret)
	{
		printf("Register failed.\n");
	}	
	
	while(1)
	{
		printf("Please input wakeup way:");
		scanf("%d", &event);
		
		/*退出循环*/
		if (0 == event)
		{
			return ;
		}
		
		/*触发事件*/
		notice_event(event);
	}
	
	return 0;	
}
