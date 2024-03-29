#pragma once

#include "Arduino.h"
#include "MasterConstants.h"


class HMI {

public:
	HMI();
	virtual ~HMI();
	void init();
	bool isOpenBtnPushed();
	bool isCloseBtnPushed();
	bool isLEDTogglePushed();
	bool isModeTogglePushed();
	int getFlowerSelection(); //-- from 12pole rotary switch

private:


};