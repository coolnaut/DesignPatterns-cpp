﻿/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description: 
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/4/23
 **************************************************************/
#include "DPCustomer.h"
int main() {
	DPAbstactExclusive* delegate = new DPPurchasingAgent();
	DPCustomer cus("李四", delegate);
	cus.boughtExclusive("大宝");
	return 0;
}