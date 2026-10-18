// FUN_008a5dc0 @ 008a5dc0 body=[[008a5dc0, 008a5e3c] [008a5e40, 008a5e6b] [008a5e6f, 008a5e95] [008a5e99, 008a5ebf] [008a5ec3, 008a5ee9] [008a5eed, 008a5f13] [008a5f17, 008a5f3d] [008a5f41, 008a5f67] [008a5f6b, 008a5f9b] [008a5f9f, 008a5fe2] [008a5fe6, 008a6001]]


void FUN_008a5dc0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = ExceptionList;
  puStack_c = &LAB_00b3c30c;
  ExceptionList = &local_10;
  *param_1 = CEvent::vftable;
  local_8 = 0xc;
  piVar3 = (int *)param_1[0x2c];
  iVar2 = param_1[0x2d] - (int)piVar3 >> 2;
  if (iVar2 != 0) {
    piVar1 = piVar3 + iVar2;
    for (; piVar3 != piVar1; piVar3 = piVar3 + 1) {
      if ((undefined4 *)*piVar3 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar3)(1);
      }
    }
  }
  if (0xf < (uint)param_1[0x6f]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x6a]);
  }
  param_1[0x6f] = 0xf;
  param_1[0x6e] = 0;
  *(undefined1 *)(param_1 + 0x6a) = 0;
  if (0xf < (uint)param_1[0x66]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x61]);
  }
  param_1[0x66] = 0xf;
  param_1[0x65] = 0;
  *(undefined1 *)(param_1 + 0x61) = 0;
  if (0xf < (uint)param_1[0x5f]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x5a]);
  }
  param_1[0x5f] = 0xf;
  param_1[0x5e] = 0;
  *(undefined1 *)(param_1 + 0x5a) = 0;
  if (0xf < (uint)param_1[0x58]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x53]);
  }
  param_1[0x58] = 0xf;
  param_1[0x57] = 0;
  *(undefined1 *)(param_1 + 0x53) = 0;
  if (0xf < (uint)param_1[0x51]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x4c]);
  }
  param_1[0x51] = 0xf;
  param_1[0x50] = 0;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  if (0xf < (uint)param_1[0x4a]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x45]);
  }
  param_1[0x4a] = 0xf;
  param_1[0x49] = 0;
  *(undefined1 *)(param_1 + 0x45) = 0;
  if (0xf < (uint)param_1[0x43]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x3e]);
  }
  param_1[0x43] = 0xf;
  param_1[0x42] = 0;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  if (0xf < (uint)param_1[0x3c]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x37]);
  }
  param_1[0x3c] = 0xf;
  param_1[0x3b] = 0;
  *(undefined1 *)(param_1 + 0x37) = 0;
  local_8._0_1_ = 3;
  FUN_008ae2f0();
  if (param_1[0x2c] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x2c]);
  }
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  local_8._0_1_ = 1;
  FUN_008a5cd0(param_1 + 0x13);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_008b32d0();
  *param_1 = &PTR_FUN_00e3a544;
  FUN_009c1650();
  if (0xf < (uint)param_1[10]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[5]);
  }
  param_1[10] = 0xf;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  ExceptionList = local_10;
  return;
}

