// __set_error_mode @ 00ac9c94 body=[[00ac9c94, 00ac9cd2]]


/* Library Function - Single Match
    __set_error_mode
   
   Library: Visual Studio 2010 Release */

int __cdecl __set_error_mode(int _Mode)

{
  int iVar1;
  int *piVar2;
  
  if (-1 < _Mode) {
    if (_Mode < 3) {
      iVar1 = DAT_00f1fc2c;
      DAT_00f1fc2c = _Mode;
      return iVar1;
    }
    if (_Mode == 3) {
      return DAT_00f1fc2c;
    }
  }
  piVar2 = __errno();
  *piVar2 = 0x16;
  FUN_00ab7c17();
  return -1;
}

