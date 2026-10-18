// FUN_008c6150 @ 008c6150 body=[[008c6150, 008c61b9] [008c61c0, 008c626c]]


undefined4 FUN_008c6150(int param_1)

{
  int iVar1;
  char cVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_58;
  undefined1 local_50 [16];
  undefined4 local_40;
  
  FUN_008a88d0();
  iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x10) * 4);
  iVar4 = *(int *)(iVar1 + 0x5c);
  iVar3 = 0;
  if (0 < (*(int *)(iVar4 + 0xcc) - *(int *)(iVar4 + 200)) / 0x24) {
    local_58 = 0;
    do {
      iVar4 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                      *(int *)(local_58 + 4 + *(int *)(iVar4 + 200)) * 4);
      if (*(int *)(iVar4 + 300) != 0) {
        local_40 = *(undefined4 *)(iVar4 + 0x58);
        iVar4 = *(int *)(in_ECX + 0xc) - *(int *)(in_ECX + 8) >> 2;
        if (iVar4 < 1) {
          return 1;
        }
        iVar5 = 0;
        while (cVar2 = (**(code **)(**(int **)(*(int *)(in_ECX + 8) + iVar5 * 4) + 0x18))(local_50),
              cVar2 != '\0') {
          iVar5 = iVar5 + 1;
          if (iVar4 <= iVar5) {
            return 1;
          }
        }
      }
      iVar4 = *(int *)(iVar1 + 0x5c);
      local_58 = local_58 + 0x24;
      iVar3 = iVar3 + 1;
    } while (iVar3 < (*(int *)(iVar4 + 0xcc) - *(int *)(iVar4 + 200)) / 0x24);
  }
  return 0;
}

