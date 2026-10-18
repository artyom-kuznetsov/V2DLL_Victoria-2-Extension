// FUN_0045f0d0 @ 0045f0d0 body=[[0045f0d0, 0045f14c] [0045f150, 0045f1c9]]


void FUN_0045f0d0(int param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int in_ECX;
  int iVar6;
  undefined4 local_34;
  uint local_20;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3d918;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar3 = FUN_0045e4e0(*(undefined4 *)(param_1 + 0x28));
  local_8 = 0;
  local_14 = FUN_004623b0(uVar3);
  if ((local_14 == *(int *)(in_ECX + 0xc)) || (cVar2 = FUN_0098ab20(), cVar2 != '\0')) {
    local_18 = *(int *)(in_ECX + 0xc);
    piVar4 = &local_18;
  }
  else {
    piVar4 = &local_14;
  }
  iVar1 = *piVar4;
  local_8 = 0xffffffff;
  if (local_20 < 0x10) {
    if (iVar1 != *(int *)(in_ECX + 0xc)) {
      iVar5 = *(int *)(iVar1 + 0x28);
      iVar6 = 0;
      if (0 < (int)(*(int *)(iVar1 + 0x2c) - iVar5 & 0xfffffffcU)) {
        do {
          iVar5 = *(int *)(iVar5 + iVar6 * 4);
          cVar2 = (**(code **)(*(int *)(iVar5 + 0x40) + 0x18))(param_1);
          if (cVar2 != '\0') {
            (**(code **)(*(int *)(iVar5 + 0x5c) + 0x2c))(param_1,0);
          }
          iVar5 = *(int *)(iVar1 + 0x28);
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(iVar1 + 0x2c) - iVar5 >> 2);
      }
    }
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_34);
}

