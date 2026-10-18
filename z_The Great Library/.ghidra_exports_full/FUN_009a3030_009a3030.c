// FUN_009a3030 @ 009a3030 body=[[009a3030, 009a3158] [009a3162, 009a31a8] [009a31b2, 009a31d5] [009a31d9, 009a31fa] [009a31fe, 009a3213] [009a3217, 009a323a] [009a323e, 009a3267]]


void FUN_009a3030(undefined4 *param_1)

{
  int *piVar1;
  void *_Dst;
  int iVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4a146;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_00e385c8;
  param_1[1] = &PTR_LAB_00e38648;
  param_1[3] = &PTR_LAB_00e38660;
  local_8 = 8;
  *(undefined1 *)((int)param_1 + 0x239) = 1;
  iVar2 = 0;
  iVar3 = (int)(param_1[0x18] - param_1[0x17]) >> 2;
  if (0 < iVar3) {
    do {
      (**(code **)(**(int **)(param_1[0x17] + iVar2 * 4) + 0x30))();
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar3);
  }
  piVar1 = (int *)param_1[0xe];
  if (piVar1 != (int *)0x0) {
    if (piVar1[2] != 0) {
      FUN_009a4a60(piVar1[2],0);
    }
    if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar1)(1);
    }
    if (piVar1[4] != 0) {
      FUN_009a4a60(piVar1[4],0);
    }
    if (piVar1[3] != 0) {
      FUN_009a4a60(piVar1[3],0);
    }
  }
  iVar2 = (int)(param_1[0x18] - param_1[0x17]) >> 2;
  while (0 < iVar2) {
    piVar1 = *(int **)(param_1[0x17] + -4 + iVar2 * 4);
    iVar2 = iVar2 + -1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x14))(1);
    }
  }
  _Dst = (void *)param_1[0x17];
  if (_Dst != (void *)param_1[0x18]) {
    FID_conflict__memcpy(_Dst,(void *)param_1[0x18],0);
    param_1[0x18] = _Dst;
  }
  (**(code **)(param_1[0xd] + 0x1c))(param_1[0xe]);
  param_1[0xe] = 0;
  if (param_1[0x12] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x12]);
  }
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x10] = 0;
  param_1[0x28] = 0;
  DAT_01258a80 = 0;
  *(undefined1 *)((int)param_1 + 0x239) = 0;
  local_8._0_1_ = 7;
  FUN_0098b4c0();
  if (param_1[0x2b] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x2b]);
  }
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  if (0xf < (uint)param_1[0x24]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x1f]);
  }
  param_1[0x24] = 0xf;
  param_1[0x23] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  if (param_1[0x1b] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x1b]);
  }
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  if (param_1[0x17] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x17]);
  }
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_00a5c580();
  if (0xf < (uint)param_1[10]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[5]);
  }
  param_1[10] = 0xf;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[3] = &PTR_FUN_00e38318;
  *param_1 = &PTR_FUN_00e38670;
  ExceptionList = local_10;
  return;
}

