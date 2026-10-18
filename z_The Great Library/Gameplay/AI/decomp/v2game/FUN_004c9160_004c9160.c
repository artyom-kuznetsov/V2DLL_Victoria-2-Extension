// FUN_004c9160 @ 004c9160 body=[[004c9160, 004c9286] [004c928d, 004c92b4] [004c92fe, 004c9376] [004c9396, 004c93b9] [004c93c0, 004c93f9]]


void FUN_004c9160(int *param_1,int param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3d0e0;
  local_10 = ExceptionList;
  if (param_3 != 0) {
    iVar4 = param_1[1];
    iVar2 = iVar4 - *param_1 >> 4;
    if (0xfffffffU - iVar2 < param_3) {
      ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
      FUN_00aad3ad("vector<T> too long");
    }
    uVar3 = iVar2 + param_3;
    uVar5 = param_1[2] - *param_1 >> 4;
    if (uVar5 < uVar3) {
      if (0xfffffff - (uVar5 >> 1) < uVar5) {
        param_1 = (int *)0x0;
      }
      else {
        param_1 = (int *)(uVar5 + (uVar5 >> 1));
      }
      if (param_1 < uVar3) {
        param_1 = (int *)uVar3;
      }
      ExceptionList = &local_10;
      iVar4 = FUN_0060da00();
      local_8 = 0;
      FUN_004ca0b0(iVar4 + (param_2 - *piVar1 >> 4) * 0x10,param_2);
      FUN_004a4110(*piVar1,param_2);
      FUN_004a4110(param_2,param_2);
      local_8 = 0xffffffff;
      if (*piVar1 == 0) {
        piVar1[2] = (int)param_1 * 0x10 + iVar4;
        piVar1[1] = (param_3 + (piVar1[1] - *piVar1 >> 4)) * 0x10 + iVar4;
        *piVar1 = iVar4;
        ExceptionList = local_10;
        return;
      }
      FUN_004a3cd0();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*piVar1);
    }
    if ((uint)(iVar4 - param_2 >> 4) < param_3) {
      ExceptionList = &local_10;
      FUN_004a4110(param_2,param_2);
      local_8 = 2;
      FUN_004ca0b0(param_1[1],param_2);
      param_1[1] = param_1[1] + param_3 * 0x10;
    }
    else {
      iVar4 = iVar4 + param_3 * -0x10;
      ExceptionList = &local_10;
      iVar2 = FUN_004a4110(iVar4,param_2);
      param_1[1] = iVar2;
      if (param_2 != iVar4) {
        puVar6 = (undefined4 *)(param_3 * 0x10 + 0xc + iVar4);
        do {
          iVar2 = iVar4 + -0x10;
          puVar6[-5] = *(undefined4 *)(iVar4 + -8);
          puVar6[-4] = *(undefined4 *)(iVar4 + -4);
          iVar4 = iVar2;
          puVar6 = puVar6 + -4;
        } while (param_2 != iVar2);
      }
    }
    FUN_004c98c0(param_2);
  }
  ExceptionList = local_10;
  return;
}

