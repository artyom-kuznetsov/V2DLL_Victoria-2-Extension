// __87except @ 00b340e9 body=[[00b340e9, 00b34227]]


/* Library Function - Single Match
    __87except
   
   Library: Visual Studio 2010 Release */

void __87except(int param_1,int *param_2,ushort *param_3)

{
  int iVar1;
  uint local_98;
  undefined4 local_94;
  undefined1 local_90 [48];
  undefined8 local_60;
  uint local_50;
  uint local_14;
  
  local_14 = DAT_00ef259c ^ (uint)&stack0xfffffff0;
  local_98 = (uint)*param_3;
  iVar1 = *param_2;
  if (iVar1 == 1) {
LAB_00b34178:
    local_94 = 8;
LAB_00b34182:
    iVar1 = __handle_exc(local_94,param_2 + 6,local_98);
    if (iVar1 == 0) {
      if (((param_1 == 0x10) || (param_1 == 0x16)) || (param_1 == 0x1d)) {
        local_60 = *(undefined8 *)(param_2 + 4);
        local_50 = local_50 & 0xffffffe3 | 3;
      }
      else {
        local_50 = local_50 & 0xfffffffe;
      }
      __raise_exc(local_90,&local_98,local_94,param_1,param_2 + 2,param_2 + 6);
    }
  }
  else {
    if (iVar1 == 2) {
      local_94 = 4;
      goto LAB_00b34182;
    }
    if (iVar1 == 3) {
      local_94 = 0x11;
      goto LAB_00b34182;
    }
    if (iVar1 == 4) {
      local_94 = 0x12;
      goto LAB_00b34182;
    }
    if (iVar1 == 5) goto LAB_00b34178;
    if (iVar1 == 7) {
      *param_2 = 1;
    }
    else if (iVar1 == 8) {
      local_94 = 0x10;
      goto LAB_00b34182;
    }
  }
  __ctrlfp(local_98,0xffff);
  if ((*param_2 != 8) && (DAT_00f05ef0 == 0)) {
    iVar1 = FUN_00ab5d96(param_2);
    if (iVar1 != 0) goto LAB_00b34215;
  }
  __set_errno_from_matherr(*param_2);
LAB_00b34215:
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffff0);
  return;
}

