// FUN_009af430 @ 009af430 body=[[009af430, 009af4b6] [009af4ba, 009af501] [009af505, 009af56f] [009af573, 009af59d] [009af5ac, 009af5d2] [009af5d6, 009af5fd] [009af601, 009af638] [009af642, 009af668] [009af672, 009af698] [009af6a2, 009af6c8] [009af6cc, 009af6f8] [009af6fc, 009af71e] [009af722, 009af73c] [009af740, 009af748] [009af752, 009af76a] [009af774, 009af789] [009af78d, 009af7ad] [009af7b3, 009af7da]]


void FUN_009af430(void)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_ECX;
  int *piVar5;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  int *local_18;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4a02e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = &PTR_FUN_00e390d0;
  local_8 = 0xf;
  if ((undefined4 *)in_ECX[0xe] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0xe])(1);
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350(&DAT_00ded94d,0);
  local_8._0_1_ = 0x10;
  cVar2 = FUN_00416db0();
  local_11 = cVar2 == '\0';
  local_8._0_1_ = 0xf;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  if ((bool)local_11) {
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
    FUN_00408ed0(in_ECX + 0x2f,0,0xffffffff);
    local_8._0_1_ = 0x11;
    if (DAT_01258aa0 != 0) {
      FUN_009c1a90(local_38);
    }
    local_8._0_1_ = 0xf;
    if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_38[0]);
    }
  }
  local_8._0_1_ = 0xf;
  piVar5 = (int *)in_ECX[0x11];
  iVar3 = in_ECX[0x12] - (int)piVar5 >> 2;
  if ((iVar3 != 0) && (piVar4 = piVar5 + iVar3, local_18 = piVar4, piVar5 != piVar4)) {
    do {
      if ((undefined4 *)*piVar5 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar5)(1);
        piVar4 = local_18;
      }
      piVar5 = piVar5 + 1;
    } while (piVar5 != piVar4);
  }
  piVar5 = (int *)in_ECX[0x36];
  while (piVar5 != (int *)0x0) {
    piVar4 = (int *)piVar5[2];
    puVar1 = (undefined4 *)*piVar5;
    piVar5 = piVar4;
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
  }
  if (0xf < (uint)in_ECX[0x93]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x8e]);
  }
  in_ECX[0x93] = 0xf;
  in_ECX[0x92] = 0;
  *(undefined1 *)(in_ECX + 0x8e) = 0;
  if (in_ECX[0x88] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x88]);
  }
  in_ECX[0x88] = 0;
  in_ECX[0x89] = 0;
  in_ECX[0x8a] = 0;
  if (0xf < (uint)in_ECX[0x86]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x81]);
  }
  in_ECX[0x86] = 0xf;
  in_ECX[0x85] = 0;
  *(undefined1 *)(in_ECX + 0x81) = 0;
  if (0xf < (uint)in_ECX[0x7a]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x75]);
  }
  in_ECX[0x7a] = 0xf;
  in_ECX[0x79] = 0;
  *(undefined1 *)(in_ECX + 0x75) = 0;
  FUN_00648a60();
  if (in_ECX[0x3f] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x3f]);
  }
  in_ECX[0x3f] = 0;
  in_ECX[0x40] = 0;
  in_ECX[0x41] = 0;
  if (in_ECX[0x3a] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x3a]);
  }
  in_ECX[0x3a] = 0;
  in_ECX[0x3b] = 0;
  in_ECX[0x3c] = 0;
  if (in_ECX[0x36] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x36]);
  }
  in_ECX[0x36] = 0;
  in_ECX[0x37] = 0;
  in_ECX[0x38] = 0;
  if (0xf < (uint)in_ECX[0x34]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x2f]);
  }
  in_ECX[0x34] = 0xf;
  in_ECX[0x33] = 0;
  *(undefined1 *)(in_ECX + 0x2f) = 0;
  if (0xf < (uint)in_ECX[0x29]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x24]);
  }
  in_ECX[0x29] = 0xf;
  in_ECX[0x28] = 0;
  *(undefined1 *)(in_ECX + 0x24) = 0;
  if (in_ECX[0x20] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x20]);
  }
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0;
  if (in_ECX[0x1c] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x1c]);
  }
  in_ECX[0x1c] = 0;
  in_ECX[0x1d] = 0;
  in_ECX[0x1e] = 0;
  if (in_ECX[0x16] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x16]);
  }
  in_ECX[0x16] = 0;
  in_ECX[0x17] = 0;
  in_ECX[0x18] = 0;
  if (in_ECX[0x11] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x11]);
  }
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  if (in_ECX[7] != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[7]);
  }
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  local_8 = 0xffffffff;
  FUN_009b1680();
  ExceptionList = local_10;
  return;
}

