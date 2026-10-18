// FUN_008d1750 @ 008d1750 body=[[008d1750, 008d18bf]]


undefined4 FUN_008d1750(int param_1)

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
      puVar3 = puVar2 + 2;
      local_48 = *puVar2;
      local_44 = puVar2[1];
      iVar6 = *(int *)(in_ECX + 0xc) - *(int *)(in_ECX + 8) >> 2;
      iVar5 = 0;
      if (iVar6 < 1) {
        return 1;
      }
      while (cVar1 = (**(code **)(**(int **)(*(int *)(in_ECX + 8) + iVar5 * 4) + 0x18))(local_50),
            puVar2 = puVar3, cVar1 != '\0') {
        iVar5 = iVar5 + 1;
        if (iVar6 <= iVar5) {
          return 1;
        }
      }
    }
  }
  else if (*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4) + 0xa00) != 0
          ) {
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
      if (iVar5 < 1) {
        return 1;
      }
      while (cVar1 = (**(code **)(**(int **)(*(int *)(in_ECX + 8) + iVar4 * 4) + 0x18))(local_50),
            puVar2 = puVar3, cVar1 != '\0') {
        iVar4 = iVar4 + 1;
        if (iVar5 <= iVar4) {
          return 1;
        }
      }
    }
  }
  return 0;
}

