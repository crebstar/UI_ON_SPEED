//
//  UIDelegateProtocol.cpp
//  Boulder
//
//  Created by Paul Renton on 8/11/13.
//
//

#include "UIDelegateProtocol.h"


using boulderas::UIDelegateProtocol;

UIDelegateProtocol::~UIDelegateProtocol() {
    CCLOG("UIDelegateProtocol Destructor");
    
} // end destructor

UIDelegateProtocol::UIDelegateProtocol() {
    CCLOG("UIDelegateProtocol Default Constructor");
} // end constructor