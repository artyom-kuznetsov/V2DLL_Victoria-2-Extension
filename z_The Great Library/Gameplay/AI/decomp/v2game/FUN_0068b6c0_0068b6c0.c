// FUN_0068b6c0 @ 0068b6c0 body=[[0068b6c0, 0068b755] [0068b777, 0068b7ba] [0068b7d7, 0068b86c]]


void FUN_0068b6c0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_ESI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = (**(code **)(**(int **)(unaff_ESI + 0xb24) + 0x44))();
  if ((*(char *)(iVar1 + 0x34) != '\0') &&
     (0 < (int)(*(int *)(unaff_ESI + 0xa8) - *(int *)(unaff_ESI + 0xa4) & 0xfffffffcU))) {
    iVar1 = *(int *)(*(int *)(unaff_ESI + 0xaec) + param_3 * 4);
    if (iVar1 == 0) {
      if (param_1 != 0) {
        iVar1 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_3 * 4) + 0x208);
        if (iVar1 != 0) {
          FUN_0068e9f0();
          FUN_0044be00();
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(iVar1);
        }
        goto LAB_0068b82e;
      }
    }
    else if (param_1 != 0) goto LAB_0068b82e;
    if (iVar1 != 0) {
      iVar1 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_3 * 4) + 0x208);
      if (iVar1 != 0) {
        FUN_0068e9f0();
        FUN_0044be00();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(iVar1);
      }
      iVar1 = FUN_00aae9af(0x3c);
      local_8 = 0;
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_0081df60(iVar1,param_2,param_3);
      }
      local_8 = 0xffffffff;
      *(undefined4 *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_3 * 4) + 0x208) = uVar2;
      FUN_0068f390();
    }
  }
LAB_0068b82e:
  *(int *)(*(int *)(unaff_ESI + 0xaec) + param_3 * 4) = param_1;
  *(undefined1 *)(unaff_ESI + 0x60) = 1;
  if (param_1 == 1) {
    *(undefined4 *)(unaff_ESI + 0xb5c) = param_2;
    *(int *)(unaff_ESI + 0xb60) = param_3;
  }
  ExceptionList = local_10;
  return;
}

