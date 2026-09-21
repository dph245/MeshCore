#pragma once

#ifdef COMPANION_TRANSPORT_SWITCH
bool companionUsesWifi();
void requestCompanionTransportToggle();
void pollCompanionTransportToggle(bool buttonPressed);
#endif
