#define TX_USE_SPEAK
#include "TxLib.h"

#include"SpeakCommands.h"

void ProcessorBotay()
    {
    txSpeak("���� ������!");
    }

//-----------------------------------------------------------------------------

void ProcessorSleep()
    {
    txSpeak("� ���� �����, �� ���� ������...");
    }

//-----------------------------------------------------------------------------

void ProcessorDeadline()
    {
    txSpeak("����� �������!!!");
    }
