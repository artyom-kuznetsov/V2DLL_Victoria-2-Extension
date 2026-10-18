// FUN_0096f5b0 @ 0096f5b0 body=[[0096f5b0, 0096f75a]]


void FUN_0096f5b0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int *local_20;
  int local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar1 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5e013;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_0131bb34 == 0) {
    ExceptionList = &local_10;
    iVar2 = FUN_00aae9af(0x188);
    local_8 = 0;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0041a160();
    }
    local_8 = 0xffffffff;
    FUN_00423700(uVar3);
  }
  local_1c = 0;
  if (0 < (*(int *)(param_1 + 0xcc) - *(int *)(param_1 + 200)) / 0x30) {
    piVar4 = (int *)(DAT_0131bb34 + 0xc);
    param_1 = 0;
    local_20 = piVar4;
    do {
      iVar2 = local_1c;
      if (piVar4[1] - *piVar4 >> 2 < local_1c) {
        local_18 = FUN_0096bb70();
      }
      else {
        local_18 = *(int *)(*piVar4 + local_1c * 4);
      }
      if (*(int *)(local_18 + 0x3c) <= *(int *)(iVar1 + 0x3c)) {
        iVar2 = *(int *)(iVar1 + 200) + param_1;
        iVar5 = *(int *)(iVar1 + 0xd8) + param_1;
        *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(iVar2 + 4);
        FUN_0096fa80();
        *(undefined4 *)(iVar5 + 0x18) = *(undefined4 *)(iVar2 + 0x18);
        *(undefined4 *)(iVar5 + 0x1c) = *(undefined4 *)(iVar2 + 0x1c);
        FUN_009beeb0(iVar2 + 0x20);
        iVar2 = local_1c;
        piVar4 = local_20;
        if (*(int *)(local_18 + 0x3c) != *(int *)(iVar1 + 0x3c)) {
          local_30 = 0;
          local_2c = 0;
          local_28 = 0;
          local_8 = 1;
          iVar2 = *(int *)(iVar1 + 200) + param_1;
          *(undefined4 *)(iVar2 + 4) = 0x18d;
          FUN_0096fa80();
          *(undefined4 *)(iVar2 + 0x18) = 0;
          *(undefined4 *)(iVar2 + 0x1c) = 0;
          FUN_009beeb0(&local_30);
          local_8 = 0xffffffff;
          iVar2 = local_1c;
          piVar4 = local_20;
        }
      }
      param_1 = param_1 + 0x30;
      local_1c = iVar2 + 1;
    } while (local_1c < (*(int *)(iVar1 + 0xcc) - *(int *)(iVar1 + 200)) / 0x30);
  }
  ExceptionList = local_10;
  return;
}

