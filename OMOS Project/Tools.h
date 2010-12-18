//=======================================================================================
//= Tools.h
//=======================================================================================

//------------------------------------------------------
//- Start
//------------------------------------------------------
class cTools
{
public:
	void MessageBoxShow(char* Title,const char* Format, ...);
	//----------------------------------------------------------------
	void HookThis(DWORD FuncOffset,DWORD JmpOffset);
	//----------------------------------------------------------------
	void SetNop(DWORD Offset,int Size);
	//----------------------------------------------------------------
	void SetRetn(DWORD Offset);
	//----------------------------------------------------------------
	void SetByte(DWORD Offset,BYTE Value);
	//----------------------------------------------------------------
	void FileExist(char* File);
	//----------------------------------------------------------------
private:
	char Message[1024];
	//----------------------------------------------------------------
};

//------------------------------------------------------
//- Variables
//------------------------------------------------------
extern cTools Tools;