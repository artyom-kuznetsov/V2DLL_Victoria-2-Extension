// FUN_00598da0 @ 00598da0 body=[[00598da0, 00598e4b] [00598e4f, 00598e70]]


void FUN_00598da0(void)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b43a20;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_005957b0();
  iVar2 = *(int *)(in_ECX + 0x6c);
  iVar3 = 0;
  if (0 < (int)(*(int *)(in_ECX + 0x70) - iVar2 & 0xfffffffcU)) {
    do {
      iVar2 = *(int *)(iVar2 + iVar3 * 4);
      *(undefined4 *)(iVar2 + 0x5c) = 6;
      uVar1 = DAT_01268fec;
      local_20 = 0xf;
      local_24 = 0;
      local_34[0] = local_34[0] & 0xffffff00;
      local_c = 2;
      *(undefined4 *)(iVar2 + 0x38) = DAT_01268ff0;
      *(undefined4 *)(iVar2 + 0x34) = uVar1;
      *(undefined4 *)(iVar2 + 0x30) = 0;
      FUN_00408ed0(local_34,0,0xffffffff);
      local_c = 0xffffffff;
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_34[0]);
      }
      iVar2 = *(int *)(in_ECX + 0x6c);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(in_ECX + 0x70) - iVar2 >> 2);
  }
  ExceptionList = local_14;
  return;
}

