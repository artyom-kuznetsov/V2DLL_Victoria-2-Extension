// FUN_00955ae0 @ 00955ae0 body=[[00955ae0, 00955ba8] [00955bac, 00955bd1] [00955bd5, 00955bf6] [00955bfa, 00955c1b] [00955c1f, 00955c40] [00955c44, 00955c65] [00955c69, 00955c8a] [00955c8e, 00955caf] [00955cb3, 00955cd1] [00955cd5, 00955cf0] [00955cf4, 00955d18] [00955d1c, 00955d3b]]


void FUN_00955ae0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = ExceptionList;
  puStack_c = &LAB_00b9f786;
  ExceptionList = &local_10;
  *param_1 = CPop::vftable;
  local_8 = 6;
  uVar2 = param_1[0x10] - param_1[0xf];
  while ((uVar2 & 0xfffffffc) != 0) {
    FUN_0068a900(*(undefined4 *)param_1[0xf]);
    uVar2 = param_1[0x10] - param_1[0xf];
  }
  if (param_1[0x75] != 0) {
    FUN_00955d40();
  }
  iVar3 = FUN_00967f50();
  if (iVar3 != 0) {
    iVar3 = FUN_00967f10();
    for (piVar1 = *(int **)(iVar3 + 0xa4);
        (piVar1 != (int *)0x0 && ((undefined4 *)*piVar1 != param_1)); piVar1 = (int *)piVar1[2]) {
    }
    FUN_005f2ae0(piVar1);
    FUN_00965bd0(0);
  }
  if (0xf < (uint)param_1[0x90]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x8b]);
  }
  param_1[0x90] = 0xf;
  param_1[0x8f] = 0;
  *(undefined1 *)(param_1 + 0x8b) = 0;
  if (param_1[0x41] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x41]);
  }
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  if (param_1[0x3d] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x3d]);
  }
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  if (param_1[0x37] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x37]);
  }
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  if (param_1[0x33] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x33]);
  }
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  if (param_1[0x2d] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x2d]);
  }
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  if (param_1[0x29] == 0) {
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    if (param_1[0x23] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(param_1[0x23]);
    }
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    if (param_1[0x1f] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(param_1[0x1f]);
    }
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    if (param_1[0xf] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(param_1[0xf]);
    }
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
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
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(param_1[0x29]);
}

