// FUN_00ae38a0 @ 00ae38a0 body=[[00ae38a0, 00ae3970]]


undefined4 FUN_00ae38a0(char *param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  void *local_18;
  size_t local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00b37b94;
  local_c = ExceptionList;
  uVar2 = DAT_00ef259c ^ (uint)&stack0xffffffdc;
  ExceptionList = &local_c;
  local_18 = (void *)0x0;
  local_14 = 0;
  local_10 = 0;
  if (param_1 != (char *)0x0) {
    pcVar3 = param_1;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_00b13660((int)pcVar3 - (int)(param_1 + 1),0);
    if (local_18 != (void *)0x0) {
      FID_conflict__memcpy(local_18,param_1,local_14);
    }
  }
  local_4 = 0;
  iVar4 = FUN_00ae3220(&local_18);
  local_4 = 0xffffffff;
  FUN_00b13650(uVar2);
  if (iVar4 == -1) {
    ExceptionList = local_c;
    return 0;
  }
  FUN_00ae3510(iVar4,param_2);
  ExceptionList = local_c;
  return 1;
}

