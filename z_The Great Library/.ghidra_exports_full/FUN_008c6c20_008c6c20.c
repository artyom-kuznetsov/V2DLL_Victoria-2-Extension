// FUN_008c6c20 @ 008c6c20 body=[[008c6c20, 008c6dac]]


undefined4 FUN_008c6c20(int param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  undefined1 local_50 [8];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_38;
  
  FUN_008a88d0();
  if (*(int *)(param_1 + 0x18) == 0) {
    if (*(int *)(param_1 + 0xc) != 0) {
      iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
      piVar3 = *(int **)(iVar1 + 0x9d8);
      local_48 = DAT_00f0ddd8;
      local_44 = DAT_00f0dddc;
      local_38 = 0;
      while ((*(int **)(iVar1 + 0x9d8) <= piVar3 && (piVar3 < *(int **)(iVar1 + 0x9dc)))) {
        iVar4 = *piVar3;
        piVar3 = piVar3 + 1;
        local_40 = *(undefined4 *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + iVar4 * 4) + 0x58);
        iVar5 = *(int *)(in_ECX + 0xc) - *(int *)(in_ECX + 8) >> 2;
        iVar4 = 0;
        if (iVar5 < 1) {
          return 1;
        }
        while (cVar2 = (**(code **)(**(int **)(*(int *)(in_ECX + 8) + iVar4 * 4) + 0x18))(local_50),
              cVar2 != '\0') {
          iVar4 = iVar4 + 1;
          if (iVar5 <= iVar4) {
            return 1;
          }
        }
      }
    }
  }
  else {
    iVar1 = *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x18) * 4) + 0x188
                    );
    piVar3 = *(int **)(iVar1 + 0x48);
    local_48 = DAT_00f0ddd8;
    local_44 = DAT_00f0dddc;
    local_38 = 0;
    while ((*(int **)(iVar1 + 0x48) <= piVar3 && (piVar3 < *(int **)(iVar1 + 0x4c)))) {
      iVar4 = *piVar3;
      piVar3 = piVar3 + 1;
      local_40 = *(undefined4 *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + iVar4 * 4) + 0x58);
      iVar5 = *(int *)(in_ECX + 0xc) - *(int *)(in_ECX + 8) >> 2;
      iVar4 = 0;
      if (iVar5 < 1) {
        return 1;
      }
      while (cVar2 = (**(code **)(**(int **)(*(int *)(in_ECX + 8) + iVar4 * 4) + 0x18))(local_50),
            cVar2 != '\0') {
        iVar4 = iVar4 + 1;
        if (iVar5 <= iVar4) {
          return 1;
        }
      }
    }
  }
  return 0;
}

