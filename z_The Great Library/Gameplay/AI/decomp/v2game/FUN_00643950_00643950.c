// FUN_00643950 @ 00643950 body=[[00643950, 006439eb] [006439ef, 00643b08]]


void FUN_00643950(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  int in_EDX;
  code *pcVar3;
  uint local_3c [4];
  undefined4 local_2c;
  uint local_28;
  float local_20 [3];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b45648;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int *)(in_EDX + 0x80) == 0) {
    local_28 = 0xf;
    local_2c = 0;
    local_3c[0] = local_3c[0] & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350("tradegoods",10);
    local_8 = 0;
    piVar1 = (int *)FUN_005c2ad0(local_3c);
    local_14 = (**(code **)(*piVar1 + 0x48))();
    (**(code **)(*(int *)(in_ECX + 0x1650) + 0x10))(local_14);
    local_8 = 0xffffffff;
    *(undefined4 *)(in_EDX + 0x80) = local_14;
    if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_3c[0]);
    }
    iVar2 = *(int *)(in_EDX + 8);
    local_20[0] = *(float *)(iVar2 + 0x54) - (float)*(int *)(iVar2 + 0x34);
    local_28 = 0xf;
    local_20[1] = 0.0;
    local_2c = 0;
    local_3c[0] = local_3c[0] & 0xffffff00;
    local_20[2] = *(float *)(iVar2 + 0x58) - (float)*(int *)(iVar2 + 0x38);
    (**(code **)(**(int **)(in_EDX + 0x80) + 0x34))();
    (**(code **)(**(int **)(in_EDX + 0x80) + 0x84))(local_20);
    if (*(int *)(*(int *)(in_ECX + 0x20d8) + *(int *)(*(int *)(in_EDX + 8) + 0xb4) * 4) != 0) {
      FUN_00644a70(in_ECX,*(undefined4 *)(in_EDX + 0x80),1);
    }
  }
  iVar2 = FUN_004b9520(param_1);
  if ((iVar2 == DAT_012587f0 + 0x48) || (iVar2 == 0)) {
    (**(code **)(**(int **)(in_EDX + 0x80) + 0x60))(0);
    pcVar3 = *(code **)(**(int **)(in_EDX + 0x80) + 0x38);
  }
  else {
    iVar2 = FUN_004b9520(param_1);
    (**(code **)(**(int **)(in_EDX + 0x80) + 0x60))(*(short *)(iVar2 + 8) + 1);
    pcVar3 = *(code **)(**(int **)(in_EDX + 0x80) + 0x34);
  }
  (*pcVar3)();
  ExceptionList = local_10;
  return;
}

