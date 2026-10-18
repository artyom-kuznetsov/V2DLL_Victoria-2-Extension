// FUN_008c65e0 @ 008c65e0 body=[[008c65e0, 008c66ed]]


void FUN_008c65e0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  int local_5c;
  int local_58;
  undefined1 local_50 [16];
  undefined4 local_40;
  
  FUN_008a88d0();
  iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_2 + 0x10) * 4);
  iVar2 = *(int *)(iVar1 + 0x5c);
  local_58 = 0;
  if (0 < (*(int *)(iVar2 + 0xcc) - *(int *)(iVar2 + 200)) / 0x24) {
    local_5c = 0;
    do {
      iVar2 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                      *(int *)(local_5c + 4 + *(int *)(iVar2 + 200)) * 4);
      if (*(int *)(iVar2 + 300) != 0) {
        local_40 = *(undefined4 *)(iVar2 + 0x58);
        iVar3 = *(int *)(in_ECX + 0xc) - *(int *)(in_ECX + 8) >> 2;
        iVar2 = 0;
        if (0 < iVar3) {
          do {
            (**(code **)(**(int **)(*(int *)(in_ECX + 8) + iVar2 * 4) + 0x30))
                      (param_1,local_50,param_3,param_4);
            iVar2 = iVar2 + 1;
          } while (iVar2 < iVar3);
        }
      }
      iVar2 = *(int *)(iVar1 + 0x5c);
      local_5c = local_5c + 0x24;
      local_58 = local_58 + 1;
    } while (local_58 < (*(int *)(iVar2 + 0xcc) - *(int *)(iVar2 + 200)) / 0x24);
  }
  return;
}

