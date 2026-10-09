// FUN_0059acc0 @ 0059acc0

void FUN_0059acc0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int in_ECX;
  uint uVar6;
  
  FUN_0059aef0(param_1);
  FUN_005946a0();
  iVar3 = FUN_0059c520(*(undefined4 *)(in_ECX + 0x1c));
  uVar4 = 0;
  if (0 < iVar3) {
    do {
      uVar6 = uVar4 & 1;
      uVar4 = uVar4 + 1;
      iVar1 = ((uint)(uVar6 == 0) * 2 + -1) * ((int)uVar4 / 2) + 0x10;
      if (*(int *)(in_ECX + 0x6c + iVar1 * 4) != 0) {
        FUN_0059a8e0(in_ECX,param_1,iVar1,1000);
      }
      iVar2 = *(int *)(in_ECX + 0xec + iVar1 * 4);
      if ((iVar2 != 0) && (iVar2 = *(int *)(*(int *)(iVar2 + 0x38) + 0x23c), 0 < iVar2)) {
        FUN_0059a8e0(in_ECX,param_1,iVar1,iVar2);
      }
    } while ((int)uVar4 < iVar3);
    if (0x1d < (int)uVar4) {
      return;
    }
  }
  do {
    uVar6 = uVar4 & 0x80000001;
    uVar4 = uVar4 + 1;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xfffffffe) + 1;
    }
    iVar3 = ((-(uint)(uVar6 != 0) & 0xfffffffe) + 1) * ((int)uVar4 / 2);
    if (*(int *)(in_ECX + 0xac + iVar3 * 4) != 0) {
      iVar1 = *(int *)(in_ECX + 0x170);
      puVar5 = (undefined4 *)FUN_00aae9af(0x10);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        *puVar5 = *(undefined4 *)(in_ECX + 0xac + iVar3 * 4);
        puVar5[1] = iVar1;
        puVar5[2] = 0;
        *(undefined1 *)(puVar5 + 3) = 0;
      }
      iVar2 = *(int *)(in_ECX + 0x174);
      *(undefined4 **)(in_ECX + 0x170) = puVar5;
      *(int *)(in_ECX + 0x174) = iVar2 + 1;
      if (iVar2 == 0) {
        *(undefined4 **)(in_ECX + 0x16c) = puVar5;
      }
      else {
        *(undefined4 **)(iVar1 + 8) = puVar5;
      }
      *(undefined4 *)(in_ECX + 0xac + iVar3 * 4) = 0;
    }
    if (*(int *)(in_ECX + 300 + iVar3 * 4) != 0) {
      iVar1 = *(int *)(in_ECX + 0x170);
      puVar5 = (undefined4 *)FUN_00aae9af(0x10);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        *puVar5 = *(undefined4 *)(in_ECX + 300 + iVar3 * 4);
        puVar5[1] = iVar1;
        puVar5[2] = 0;
        *(undefined1 *)(puVar5 + 3) = 0;
      }
      iVar2 = *(int *)(in_ECX + 0x174);
      *(undefined4 **)(in_ECX + 0x170) = puVar5;
      *(int *)(in_ECX + 0x174) = iVar2 + 1;
      if (iVar2 == 0) {
        *(undefined4 **)(in_ECX + 0x16c) = puVar5;
      }
      else {
        *(undefined4 **)(iVar1 + 8) = puVar5;
      }
      *(undefined4 *)(in_ECX + 300 + iVar3 * 4) = 0;
    }
  } while ((int)uVar4 < 0x1e);
  return;
}


