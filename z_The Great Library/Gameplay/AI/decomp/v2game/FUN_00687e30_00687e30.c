// FUN_00687e30 @ 00687e30 body=[[00687e30, 00687f70] [00687f74, 00687ff3]]


void FUN_00687e30(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int unaff_EDI;
  int local_20;
  int local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00bb8948;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_00687d10(unaff_EDI);
  iVar4 = *(int *)(unaff_EDI + 0xad0) - *(int *)(unaff_EDI + 0xacc) >> 2;
  iVar5 = *(int *)(unaff_EDI + 0xae0) - *(int *)(unaff_EDI + 0xadc) >> 2;
  local_20 = 1;
  if (1 < iVar4) {
    do {
      FUN_004b23c0();
      local_20 = local_20 + 1;
    } while (local_20 < iVar4);
  }
  iVar4 = 1;
  if (1 < iVar5) {
    do {
      FUN_0050c2a0(*(undefined4 *)(*(int *)(unaff_EDI + 0xadc) + iVar4 * 4));
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar5);
  }
  if (*(char *)(DAT_012588e8 + 0xd11) == '\0') {
    if (DAT_01319b80 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)FUN_00aae9af(0xa08);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        puVar3[8] = 0;
        puVar3[9] = 0;
        puVar3[10] = 0;
        puVar3[0xc] = 0;
        puVar3[0xd] = 0;
        puVar3[0xe] = 0;
        puVar3[0x280] = 0;
        puVar3[0x281] = 1;
        __time64((__time64_t *)0x0);
        FUN_009b7670();
        puVar3[0x280] = 0;
      }
      puVar2 = DAT_01319b80;
      local_c = 0;
      if ((puVar3 != DAT_01319b80) && (DAT_01319b80 != (undefined4 *)0x0)) {
        FUN_008a6680(DAT_01319b80);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(puVar2);
      }
      local_c = 0xffffffff;
      DAT_01319b80 = puVar3;
    }
    FUN_008a78d0(DAT_01319b80);
  }
  iVar4 = *(int *)(unaff_EDI + 0xb98);
  local_1c = 0;
  if (0 < (int)(*(int *)(unaff_EDI + 0xb9c) - iVar4 & 0xfffffff0U)) {
    local_20 = 0;
    do {
      puVar3 = *(undefined4 **)(local_20 + iVar4);
      while (puVar3 != (undefined4 *)0x0) {
        uVar1 = *puVar3;
        puVar3 = (undefined4 *)puVar3[2];
        FUN_004e24c0(uVar1);
      }
      iVar4 = *(int *)(unaff_EDI + 0xb98);
      local_20 = local_20 + 0x10;
      local_1c = local_1c + 1;
    } while (local_1c < *(int *)(unaff_EDI + 0xb9c) - iVar4 >> 4);
  }
  ExceptionList = local_14;
  return;
}

