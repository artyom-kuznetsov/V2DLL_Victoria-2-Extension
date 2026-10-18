// __cftoe_l @ 00abe3d1 body=[[00abe3d1, 00abe497]]


/* Library Function - Single Match
    __cftoe_l
   
   Library: Visual Studio 2010 Release */

void __cftoe_l(undefined4 *param_1,undefined1 *param_2,int param_3,int param_4,undefined4 param_5,
              undefined4 param_6)

{
  int *piVar1;
  size_t _SizeInBytes;
  errno_t eVar2;
  _strflt local_30;
  undefined1 local_20 [24];
  uint local_8;
  
  local_8 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  FUN_00acc263(*param_1,param_1[1],&local_30,local_20,0x16);
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00ab7c17();
  }
  else {
    if (param_3 == -1) {
      _SizeInBytes = 0xffffffff;
    }
    else {
      _SizeInBytes = (param_3 - (uint)(local_30.sign == 0x2d)) - (uint)(0 < param_4);
    }
    eVar2 = __fptostr(param_2 + (uint)(0 < param_4) + (uint)(local_30.sign == 0x2d),_SizeInBytes,
                      param_4 + 1,&local_30);
    if (eVar2 == 0) {
      FUN_00abe270(param_3,param_4,param_5,&local_30,0,param_6);
    }
    else {
      *param_2 = 0;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

