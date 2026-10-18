// __cftog_l @ 00abe9f2 body=[[00abe9f2, 00abeade]]


/* Library Function - Single Match
    __cftog_l
   
   Library: Visual Studio 2010 Release */

void __cftog_l(undefined4 *param_1,undefined1 *param_2,int param_3,int param_4,undefined4 param_5,
              undefined4 param_6)

{
  char *pcVar1;
  int *piVar2;
  errno_t eVar3;
  size_t _SizeInBytes;
  int iVar4;
  char *pcVar5;
  _strflt local_30;
  undefined1 local_20 [24];
  uint local_8;
  
  local_8 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  FUN_00acc263(*param_1,param_1[1],&local_30,local_20,0x16);
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    FUN_00ab7c17();
  }
  else {
    iVar4 = local_30.decpt + -1;
    if (param_3 == -1) {
      _SizeInBytes = 0xffffffff;
    }
    else {
      _SizeInBytes = param_3 - (uint)(local_30.sign == 0x2d);
    }
    eVar3 = __fptostr(param_2 + (local_30.sign == 0x2d),_SizeInBytes,param_4,&local_30);
    if (eVar3 == 0) {
      local_30.decpt = local_30.decpt + -1;
      if ((local_30.decpt < -4) || (param_4 <= local_30.decpt)) {
        FUN_00abe270(param_3,param_4,param_5,&local_30,1,param_6);
      }
      else {
        pcVar1 = param_2 + (local_30.sign == 0x2d);
        if (iVar4 < local_30.decpt) {
          do {
            pcVar5 = pcVar1;
            pcVar1 = pcVar5 + 1;
          } while (*pcVar5 != '\0');
          pcVar5[-1] = '\0';
        }
        __cftof2_l(param_3,param_4,1,param_6);
      }
    }
    else {
      *param_2 = 0;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

