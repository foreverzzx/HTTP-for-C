/*
 * main.c
 *
 *  Created on: 2017��2��21��
 *      Author: dell
 */
#include "stdio.h"
#include "http.h"

int main(){
	printf("������:%d",httprequest("192.168.1.101",8080,"/student/showexams","password=123&st_id=20131720"));
}
