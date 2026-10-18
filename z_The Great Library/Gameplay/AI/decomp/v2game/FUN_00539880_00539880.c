// FUN_00539880 @ 00539880 body=[[00539880, 005398e7] [005398f0, 005399bf]]


/* WARNING: Removing unreachable block (ram,0x0053997f) */

void FUN_00539880(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  if (*(int *)(param_1 + 0x20) <
      *(int *)(DAT_012588e8 + 0xaf0) - *(int *)(DAT_012588e8 + 0xaec) >> 2) {
    bVar4 = *(int *)(*(int *)(DAT_012588e8 + 0xaec) + *(int *)(param_1 + 0x20) * 4) == 0;
  }
  else {
    bVar4 = false;
  }
  iVar1 = 0;
  if (0 < (int)(*(int *)(DAT_012587f0 + 0x10) - *(int *)(DAT_012587f0 + 0xc) & 0xfffffffcU)) {
    local_2c = 0;
    iVar2 = DAT_012587f0;
    do {
      iVar3 = *(int *)(param_1 + 0x12a0) + local_2c;
      if ((bVar4) || (*(char *)(iVar3 + 0x11) != '\0')) {
        FUN_00539760(iVar1);
        lVar5 = FUN_00b31c36();
        lVar6 = FUN_00b31c36();
        iVar2 = DAT_012587f0;
        if (lVar5 < lVar6) {
          *(undefined1 *)(iVar3 + 0x10) = 1;
          *(undefined4 *)(iVar3 + 8) = local_28;
          *(undefined4 *)(iVar3 + 0xc) = local_24;
          iVar2 = DAT_012587f0;
        }
      }
      local_2c = local_2c + 0x18;
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(iVar2 + 0x10) - *(int *)(iVar2 + 0xc) >> 2);
  }
  return;
}

