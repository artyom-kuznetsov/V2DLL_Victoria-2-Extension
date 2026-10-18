// FUN_00425840 @ 00425840 body=[[00425840, 004258ec] [004258f0, 004259f8] [004259fc, 00425a35]]


undefined4 FUN_00425840(int param_1,char param_2)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *local_20;
  int *local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3d460;
  local_10 = ExceptionList;
  if (param_2 == '\0') {
    param_1 = param_1 + 0x98;
  }
  else {
    param_1 = param_1 + 0x88;
  }
  local_20 = (int *)0x0;
  local_1c = (int *)0x0;
  local_18 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_0042b600(&local_20,param_1);
  piVar5 = local_1c;
  piVar4 = local_20;
  piVar2 = (int *)FUN_0042ca20(local_20);
  if (piVar2 != piVar5) {
LAB_004258a4:
    local_8 = 0xffffffff;
    FUN_0042b8b0(&local_20);
    ExceptionList = local_10;
    return 0;
  }
  iVar3 = (int)piVar5 - (int)piVar4 >> 6;
  param_1 = 0;
  if (0 < iVar3) {
    piVar2 = piVar4 + 3;
    do {
      iVar1 = *piVar2;
      if (*(int *)(in_ECX + 0xc) == iVar1) {
        if ((int)(*(int *)(iVar1 + 0xe4) - *(int *)(iVar1 + 0xe0) & 0xfffffffcU) < 1) {
          if ((int)(*(int *)(iVar1 + 0xac) - *(int *)(iVar1 + 0xa8) & 0xfffffffcU) < 1) {
LAB_0042594f:
            local_8 = 0xffffffff;
            FUN_0042b8b0(&local_20);
            ExceptionList = local_10;
            return 0;
          }
          if (*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(in_ECX + 0x28) * 4) +
                      0x188) ==
              *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + piVar2[7] * 4) + 0x188)) {
            local_8 = 0xffffffff;
            FUN_0042b8b0(&local_20);
            ExceptionList = local_10;
            return 0;
          }
        }
        else if (((int)(*(int *)(iVar1 + 0xac) - *(int *)(iVar1 + 0xa8) & 0xfffffffcU) < 1) ||
                (*(char *)(*(int *)(in_ECX + 0xc) + 0x1dc) != '\0')) {
          if (*(int *)(in_ECX + 0x14) == piVar2[2]) goto LAB_004258a4;
        }
        else if (*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(in_ECX + 0x28) * 4) +
                         0x188) ==
                 *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + piVar2[7] * 4) + 0x188))
        goto LAB_0042594f;
      }
      param_1 = param_1 + 1;
      piVar2 = piVar2 + 0x10;
      piVar4 = local_20;
      piVar5 = local_1c;
    } while (param_1 < iVar3);
  }
  local_8 = 0xffffffff;
  piVar2 = piVar4;
  if (piVar4 != (int *)0x0) {
    for (; piVar2 != piVar5; piVar2 = piVar2 + 0x10) {
      (**(code **)*piVar2)(0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(piVar4);
  }
  ExceptionList = local_10;
  return 1;
}

