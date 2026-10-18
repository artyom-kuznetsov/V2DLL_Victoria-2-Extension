// FUN_005934e0 @ 005934e0  (requested 005934E0, first bytes: 55 8B EC 6A FF 68 F8 DE)


void FUN_005934e0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int unaff_ESI;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(bool *)(unaff_ESI + 0x88) = *(char *)(unaff_ESI + 0x88) == '\0';
  uVar2 = *(undefined4 *)(unaff_ESI + 0x44);
  *(undefined4 *)(unaff_ESI + 0x44) = *(undefined4 *)(unaff_ESI + 0x84);
  *(undefined4 *)(unaff_ESI + 0x84) = uVar2;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00408ed0(unaff_ESI + 0x18,0,0xffffffff);
  local_8 = 0;
  FUN_00408ed0(unaff_ESI + 0x58,0,0xffffffff);
  FUN_00408ed0(local_2c,0,0xffffffff);
  uVar2 = *(undefined4 *)(unaff_ESI + 0x10);
  uVar3 = *(undefined4 *)(unaff_ESI + 0x14);
  *(undefined4 *)(unaff_ESI + 0x10) = *(undefined4 *)(unaff_ESI + 0x50);
  *(undefined4 *)(unaff_ESI + 0x50) = uVar2;
  *(undefined4 *)(unaff_ESI + 0x14) = *(undefined4 *)(unaff_ESI + 0x54);
  *(undefined4 *)(unaff_ESI + 0x54) = uVar3;
  iVar4 = 0;
  if (0 < (int)(*(int *)(unaff_ESI + 0x38) - *(int *)(unaff_ESI + 0x34) & 0xfffffffcU)) {
    do {
      puVar1 = (undefined4 *)(*(int *)(unaff_ESI + 0x34) + iVar4 * 4);
      uVar2 = *puVar1;
      *puVar1 = *(undefined4 *)(*(int *)(unaff_ESI + 0x74) + iVar4 * 4);
      *(undefined4 *)(*(int *)(unaff_ESI + 0x74) + iVar4 * 4) = uVar2;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(unaff_ESI + 0x38) - *(int *)(unaff_ESI + 0x34) >> 2);
  }
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  ExceptionList = local_10;
  return;
}

