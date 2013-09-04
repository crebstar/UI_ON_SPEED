//
//  GameConstants.cpp
//  Boulder
//
//  Created by Paul Renton on 8/10/13.
//
//

#include "GameConstants.h"



boulderas::enum_string enum_to_str[] =
{
    ENUM_TO_STR(boulderas::sMainMenuScene),
    ENUM_TO_STR(boulderas::sTestingScene),
    ENUM_TO_STR(boulderas::sPOCTestingScene),
};

int boulderas::UI_LAYER_Z_VALUE = 2;
int boulderas::ACTION_LAYER_Z_VALUE = 1;