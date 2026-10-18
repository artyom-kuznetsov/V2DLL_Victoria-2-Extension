// FUN_00643b10 @ 00643b10 body=[[00643b10, 00643bab] [00643baf, 00643cda]]


void FUN_00643b10(int param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  code *pcVar4;
  int in_ECX;
  int in_EDX;
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
  if (*(int *)(in_EDX + 0x84) == 0) {
    local_28 = 0xf;
    local_2c = 0;
    local_3c[0] = local_3c[0] & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350("crimes",6);
    local_8 = 0;
    piVar3 = (int *)FUN_005c2ad0(local_3c);
    local_14 = (**(code **)(*piVar3 + 0x48))();
    (**(code **)(*(int *)(in_ECX + 0x1c40) + 0x10))(local_14);
    local_8 = 0xffffffff;
    *(undefined4 *)(in_EDX + 0x84) = local_14;
    if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_3c[0]);
    }
    iVar1 = *(int *)(in_EDX + 8);
    local_20[0] = *(float *)(iVar1 + 0x54) - (float)*(int *)(iVar1 + 0x34);
    local_28 = 0xf;
    local_20[1] = 0.0;
    local_2c = 0;
    local_3c[0] = local_3c[0] & 0xffffff00;
    local_20[2] = *(float *)(iVar1 + 0x58) - (float)*(int *)(iVar1 + 0x38);
    (**(code **)(**(int **)(in_EDX + 0x84) + 0x34))();
    (**(code **)(**(int **)(in_EDX + 0x84) + 0x84))(local_20);
    if (*(int *)(*(int *)(in_ECX + 0x20d8) + *(int *)(*(int *)(in_EDX + 8) + 0xb4) * 4) != 0) {
      FUN_00644a70(in_ECX,*(undefined4 *)(in_EDX + 0x84),1);
    }
  }
  if (*(int **)(param_1 + 800) != (int *)0x0) {
    cVar2 = (**(code **)(**(int **)(param_1 + 800) + 0x38))();
    if ((cVar2 != '\0') && (*(int *)(param_1 + 300) == *(int *)(DAT_012588e8 + 0xb60))) {
      (**(code **)(**(int **)(in_EDX + 0x84) + 0x60))
                (*(short *)(*(int *)(param_1 + 800) + 0x4c) + 1);
      pcVar4 = *(code **)(**(int **)(in_EDX + 0x84) + 0x34);
      goto LAB_00643cc4;
    }
  }
  (**(code **)(**(int **)(in_EDX + 0x84) + 0x60))(0);
  pcVar4 = *(code **)(**(int **)(in_EDX + 0x84) + 0x38);
LAB_00643cc4:
  (*pcVar4)();
  ExceptionList = local_10;
  return;
}

