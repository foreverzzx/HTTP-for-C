/*
 * main.c
 *
 *  Created on: 2017年2月21日
 *      Author: dell
 */
#include "stdio.h"
#include "http.h"

int main(){
	printf("输出结果:%d",httprequest("192.168.1.101",8080,"/student/showexams","password=123&st_id=20131720"));
}
