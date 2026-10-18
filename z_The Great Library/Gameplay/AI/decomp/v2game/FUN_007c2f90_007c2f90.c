// FUN_007c2f90 @ 007c2f90 body=[[007c2f90, 007c2ff8] [007c2ffc, 007c304c] [007c3050, 007c30e7]]


void FUN_007c2f90(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 extraout_ECX;
  int iVar6;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("pop_province_list",0x11);
  local_8 = 0;
  piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x4c) + 0x7c))(local_2c);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  piVar3 = (int *)(**(code **)(*piVar2 + 0x2c))();
  piVar3 = (int *)*piVar3;
  iVar6 = 0;
  if (piVar3 != (int *)0x0) {
    do {
      iVar4 = *piVar3;
      piVar3 = (int *)piVar3[2];
      iVar6 = iVar6 + 1;
      if (*(int *)(iVar4 + 0x30) == *(int *)(param_2 + 0x188)) {
        FUN_007be020();
        piVar3 = (int *)(**(code **)(*piVar2 + 0x2c))();
        piVar3 = (int *)*piVar3;
        if (piVar3 != (int *)0x0) {
          goto LAB_007c3050;
        }
        break;
      }
    } while (piVar3 != (int *)0x0);
  }
  goto LAB_007c3067;
  while (piVar3 != (int *)0x0) {
LAB_007c3050:
    piVar1 = (int *)*piVar3;
    piVar3 = (int *)piVar3[2];
    if (piVar1[0xb] == *(int *)(param_2 + 0x58)) {
      (**(code **)(*piVar1 + 0x10))();
      break;
    }
  }
LAB_007c3067:
  iVar4 = (**(code **)(*piVar2 + 0x2c))();
  if (*(int *)(iVar4 + 8) != 0) {
    iVar4 = piVar2[0x41];
    if ((iVar4 != 0) && (DAT_00f092dc < (float)iVar6)) {
      FUN_00401000(((float)iVar6 + 0.0005) * 1000.0,extraout_ECX,1,1);
      uVar5 = FUN_00b31c00();
      (**(code **)(*(int *)(iVar4 + 0x54) + 0x1c))(uVar5);
    }
  }
  ExceptionList = local_10;
  return;
}

