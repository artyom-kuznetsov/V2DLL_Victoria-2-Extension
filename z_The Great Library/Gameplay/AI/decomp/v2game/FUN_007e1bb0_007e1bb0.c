// FUN_007e1bb0 @ 007e1bb0 body=[[007e1bb0, 007e1c1b] [007e1c20, 007e1ce7] [007e1ceb, 007e1d02] [007e1d06, 007e1d19] [007e1d23, 007e1d40]]


void FUN_007e1bb0(void)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  int in_ECX;
  int iVar7;
  uint uVar8;
  
  uVar1 = *(uint *)(in_ECX + 0x1c);
  *(undefined1 *)(in_ECX + 8) = 0;
  uVar4 = FUN_00aad56b(-(uint)((int)((ulonglong)uVar1 * 4 >> 0x20) != 0) |
                       (uint)((ulonglong)uVar1 * 4));
  *(undefined4 *)(in_ECX + 0x10) = uVar4;
  puVar5 = *(undefined4 **)(in_ECX + 0x14);
  if (puVar5 != (undefined4 *)0x0) {
    iVar7 = 0;
    do {
      uVar4 = *puVar5;
      puVar5 = (undefined4 *)puVar5[2];
      *(undefined4 *)(iVar7 + *(int *)(in_ECX + 0x10)) = uVar4;
      iVar7 = iVar7 + 4;
    } while (puVar5 != (undefined4 *)0x0);
  }
  uVar6 = uVar1;
  iVar7 = uVar1 + 1;
  while (iVar3 = iVar7 / 2, 0 < iVar3) {
    uVar6 = (int)uVar6 / 2;
    for (uVar8 = uVar6; (int)uVar8 < (int)uVar1; uVar8 = uVar8 + iVar3) {
      puVar5 = *(undefined4 **)(*(int *)(in_ECX + 0x10) + uVar8 * 4);
      if (*(char *)(puVar5 + 8) == '\0') {
        FUN_00a5c820(in_ECX,in_ECX + 4,*puVar5);
        *(undefined1 *)(*(int *)(*(int *)(in_ECX + 0x10) + uVar8 * 4) + 0x20) = 1;
      }
    }
    iVar7 = iVar3 + 1;
    if (iVar3 < 3) {
      iVar7 = iVar3;
    }
  }
  if (0 < (int)uVar1) {
    iVar7 = 0;
    do {
      puVar5 = *(undefined4 **)(*(int *)(in_ECX + 0x10) + iVar7 * 4);
      if (*(char *)(puVar5 + 8) == '\0') {
        FUN_00a5c820(in_ECX,in_ECX + 4,*puVar5);
        *(undefined1 *)(*(int *)(*(int *)(in_ECX + 0x10) + iVar7 * 4) + 0x20) = 1;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)uVar1);
  }
  piVar2 = *(int **)(in_ECX + 0x14);
  while (piVar2 != (int *)0x0) {
    iVar7 = *piVar2;
    piVar2 = (int *)piVar2[2];
    if (iVar7 != 0) {
      if (0xf < *(uint *)(iVar7 + 0x18)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(*(undefined4 *)(iVar7 + 4));
      }
      *(undefined4 *)(iVar7 + 0x18) = 0xf;
      *(undefined4 *)(iVar7 + 0x14) = 0;
      *(undefined1 *)(iVar7 + 4) = 0;
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iVar7);
    }
  }
  if (*(int *)(in_ECX + 0x14) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(in_ECX + 0x14));
  }
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  FUN_00aaea59(*(undefined4 *)(in_ECX + 0x10));
  return;
}

