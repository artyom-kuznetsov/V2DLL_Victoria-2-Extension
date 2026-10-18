// ___time64_t_from_ft @ 00aaffc2 body=[[00aaffc2, 00ab003d]]


/* Library Function - Single Match
    ___time64_t_from_ft
   
   Library: Visual Studio 2010 Release */

void ___time64_t_from_ft(FILETIME *param_1)

{
  BOOL BVar1;
  undefined4 uVar2;
  __time64_t _Var3;
  _FILETIME local_20;
  _SYSTEMTIME local_18;
  uint local_8;
  
  local_8 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  if ((param_1->dwLowDateTime != 0) || (param_1->dwHighDateTime != 0)) {
    BVar1 = FileTimeToLocalFileTime(param_1,&local_20);
    if (BVar1 != 0) {
      BVar1 = FileTimeToSystemTime(&local_20,&local_18);
      if (BVar1 != 0) {
        _Var3 = ___loctotime64_t((uint)local_18.wYear,(uint)local_18.wMonth,(uint)local_18.wDay,
                                 (uint)local_18.wHour,(uint)local_18.wMinute,(uint)local_18.wSecond,
                                 0);
        uVar2 = (undefined4)((ulonglong)_Var3 >> 0x20);
        goto LAB_00ab0032;
      }
    }
  }
  uVar2 = 0xffffffff;
LAB_00ab0032:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,uVar2);
  return;
}

