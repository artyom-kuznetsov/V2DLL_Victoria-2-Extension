// FUN_004ce720 @ 004ce720 body=[[004ce720, 004ce7fd] [004ce801, 004ce822] [004ce826, 004ce85c] [004ce860, 004ce885] [004ce88f, 004ce8a4] [004ce8a8, 004ce8b9] [004ce8c0, 004ce8c8] [004ce8d2, 004ce91e] [004ce922, 004ce942]]


void FUN_004ce720(undefined4 *param_1)

{
  int iVar1;
  void *_Dst;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00baf769;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CState::vftable;
  param_1[0xc] = CState::vftable;
  local_8 = 9;
  piVar4 = (int *)param_1[0x12];
  while (((int *)param_1[0x12] <= piVar4 && (piVar4 < (int *)param_1[0x13]))) {
    iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar4 * 4);
    piVar4 = piVar4 + 1;
    uVar3 = FUN_004d1c50();
    puVar2 = DAT_01258728;
    *(undefined4 *)(iVar1 + 0x188) = uVar3;
    if (puVar2 == (undefined4 *)0x0) {
      DAT_01258728 = (undefined4 *)FUN_00aae9af(0x14);
      if (DAT_01258728 == (undefined4 *)0x0) {
        DAT_01258728 = (undefined4 *)0x0;
      }
      else {
        *DAT_01258728 = 0;
        DAT_01258728[1] = 0;
        DAT_01258728[2] = 0;
        *(undefined1 *)(DAT_01258728 + 4) = 0;
      }
    }
    FUN_004c2520();
  }
  _Dst = (void *)param_1[0x12];
  if (_Dst != (void *)param_1[0x13]) {
    FID_conflict__memcpy(_Dst,(void *)param_1[0x13],0);
    param_1[0x13] = _Dst;
  }
  if (param_1[0x9b] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x9b]);
  }
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  if (param_1[0x86] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x86]);
  }
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  FUN_0096b900();
  FUN_0044be00();
  if (param_1[0x1c] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x1c]);
  }
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  local_8 = CONCAT31(local_8._1_3_,3);
  iVar1 = param_1[0x18];
  if (iVar1 != 0) {
    FUN_004f33c0(iVar1);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar1);
  }
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  if (param_1[0x12] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x12]);
  }
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  iVar1 = DAT_012588e8;
  if (param_1[0xe] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0xe]);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xc] = CSelectable::vftable;
  if (*(char *)(param_1 + 0xd) != '\0') {
    (**(code **)(**(int **)(iVar1 + 0xb24) + 0xa4))(1);
  }
  *param_1 = &PTR_FUN_00e3a544;
  FUN_009c1650();
  if ((uint)param_1[10] < 0x10) {
    param_1[9] = 0;
    param_1[10] = 0xf;
    *(undefined1 *)(param_1 + 5) = 0;
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(param_1[5]);
}

