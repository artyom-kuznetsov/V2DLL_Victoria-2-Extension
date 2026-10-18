// FUN_008d1cb0 @ 008d1cb0 body=[[008d1cb0, 008d1db6] [008d1dc0, 008d1e2f]]


undefined4 FUN_008d1cb0(int param_1)

{
  char cVar1;
  int in_ECX;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 local_50 [8];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar4 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x10) * 4);
    FUN_008a88d0();
    puVar2 = *(undefined4 **)(iVar4 + 0x148);
    while ((*(undefined4 **)(iVar4 + 0x148) <= puVar2 && (puVar2 < *(undefined4 **)(iVar4 + 0x14c)))
          ) {
      local_48 = *puVar2;
      puVar3 = puVar2 + 2;
      local_44 = puVar2[1];
      iVar6 = *(int *)(in_ECX + 0xc) - *(int *)(in_ECX + 8) >> 2;
      iVar5 = 0;
      puVar2 = puVar3;
      if (0 < iVar6) {
        do {
          cVar1 = (**(code **)(**(int **)(*(int *)(in_ECX + 8) + iVar5 * 4) + 0x18))(local_50);
          if (cVar1 == '\0') {
            return 0;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar6);
      }
    }
  }
  else {
    if (*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4) + 0xa00) == 0) {
      return 0;
    }
    puVar2 = *(undefined4 **)
              (*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4) + 0x9f8);
    FUN_008a88d0();
    local_48 = 0x2d2d2d;
    local_44 = 0;
    while (puVar2 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)puVar2[2];
      local_40 = *puVar2;
      iVar4 = 0;
      iVar5 = *(int *)(in_ECX + 0xc) - *(int *)(in_ECX + 8) >> 2;
      puVar2 = puVar3;
      if (0 < iVar5) {
        do {
          cVar1 = (**(code **)(**(int **)(*(int *)(in_ECX + 8) + iVar4 * 4) + 0x18))(local_50);
          if (cVar1 == '\0') {
            return 0;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar5);
      }
    }
  }
  return 1;
}

