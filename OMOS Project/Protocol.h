//=======================================================================================
//= Fixes.cpp
//=======================================================================================

//------------------------------------------------------
//- Start
//------------------------------------------------------
bool ProtocolCore (BYTE protoNum,LPBYTE aRecv,int aLen,int aIndex,DWORD Encrypt,DWORD Serial);

//------------------------------------------------------
//- Defines
//------------------------------------------------------
#define DataRecv ((void(*) (BYTE,PBYTE,DWORD,DWORD,...)) 0x004368E0)