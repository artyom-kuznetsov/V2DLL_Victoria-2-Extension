// FUN_009da400 @ 009da400 body=[[009da400, 009da4af]]


undefined4 FUN_009da400(void)

{
  int iVar1;
  undefined4 uVar2;
  char *in_ECX;
  undefined1 local_70 [16];
  undefined4 local_60;
  undefined4 local_5c;
  char *pcStack_58;
  undefined1 local_50 [60];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5dbe8;
  local_10 = ExceptionList;
  pcStack_58 = in_ECX;
  if (0xf < *(uint *)(in_ECX + 0x14)) {
    pcStack_58 = *(char **)in_ECX;
  }
  if ((pcStack_58 != (char *)0x0) && (*pcStack_58 != '\0')) {
    local_5c = 0x9da439;
    ExceptionList = &local_10;
    iVar1 = PHYSFS_exists();
    if (iVar1 != 0) {
      local_14 = local_70;
      local_5c = 0xf;
      local_60 = 0;
      local_70[0] = 0;
      FUN_00409350(&DAT_00ded94d,0);
      FUN_00992740(local_50,in_ECX,0);
      pcStack_58 = (char *)0xffffffff;
      local_8 = 0;
      local_5c = 0x9da495;
      uVar2 = FUN_009939a0();
      pcStack_58 = (char *)0x9da49f;
      FUN_00992d60();
      ExceptionList = local_10;
      return uVar2;
    }
  }
  ExceptionList = local_10;
  return 0;
}

