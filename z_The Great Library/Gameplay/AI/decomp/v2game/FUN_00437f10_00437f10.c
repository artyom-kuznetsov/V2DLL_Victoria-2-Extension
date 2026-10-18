// FUN_00437f10 @ 00437f10 body=[[00437f10, 00437f9c] [00437fa0, 0043806d] [00438071, 00438094] [00438098, 004380bb]]


undefined1 * FUN_00437f10(undefined1 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *in_ECX;
  undefined8 uVar4;
  undefined8 uStack_6c;
  uint *puStack_64;
  undefined4 local_54 [5];
  uint local_40;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b77851;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xf;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0xf;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x58] = 1;
  local_8 = 0;
  puStack_64 = local_38;
  local_14 = 1;
  uStack_6c._4_4_ = 0x437f77;
  uVar2 = (**(code **)(*in_ECX + 0x2c))();
  uStack_6c._4_4_ = 0xffffffff;
  uStack_6c._0_4_ = (uint *)0x0;
  local_8 = 1;
  FUN_00408ed0(uVar2);
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_24) {
    uStack_6c._4_4_ = local_38[0];
                    /* WARNING: Subroutine does not return */
    uStack_6c._0_4_ = (uint *)&UNK_00437f9d;
    FUN_00aae91b();
  }
  local_18 = (undefined1 *)in_ECX[0xd];
  local_1c = in_ECX[0xc];
  if ((-1 < (int)local_18) && ((0 < (int)local_18 || (local_1c != 0)))) {
    uStack_6c._4_4_ = 0x437fc9;
    uVar4 = FUN_00b31c36();
    iVar3 = (in_ECX[5] - (int)((ulonglong)uVar4 >> 0x20)) - (uint)((uint)in_ECX[4] < (uint)uVar4);
    iVar1 = in_ECX[3];
    if ((iVar1 <= iVar3) && ((iVar1 < iVar3 || ((uint)in_ECX[2] < in_ECX[4] - (uint)uVar4)))) {
      uStack_6c._4_4_ = (uint)local_18;
      uStack_6c._0_4_ = (uint *)local_1c;
      uVar4 = __allmul(in_ECX[2],iVar1);
      uStack_6c._4_4_ = DAT_00f0aacc;
      uStack_6c._0_4_ = (uint *)DAT_00f0aac8;
      uStack_6c = __alldiv((uint)uVar4 & 0xffff8000,(int)((ulonglong)uVar4 >> 0x20));
      local_18 = (undefined1 *)&uStack_6c;
      uVar2 = FUN_00988bb0(local_54,2);
      uStack_6c._0_4_ = local_38;
      local_8 = 2;
      uStack_6c._4_4_ = uVar2;
      uVar2 = FUN_0042c180();
      uStack_6c._4_4_ = 0xffffffff;
      uStack_6c._0_4_ = (uint *)0x0;
      local_8._0_1_ = 3;
      FUN_00408ed0(uVar2);
      if (0xf < local_24) {
        uStack_6c._4_4_ = local_38[0];
                    /* WARNING: Subroutine does not return */
        uStack_6c._0_4_ = (uint *)&UNK_0043806e;
        FUN_00aae91b();
      }
      local_8 = (uint)local_8._1_3_ << 8;
      local_24 = 0xf;
      local_28 = 0;
      local_38[0] = local_38[0] & 0xffffff00;
      if (0xf < local_40) {
        uStack_6c._4_4_ = local_54[0];
                    /* WARNING: Subroutine does not return */
        uStack_6c._0_4_ = (uint *)&UNK_00438095;
        FUN_00aae91b();
      }
      uStack_6c._4_4_ = 1;
      uStack_6c._0_4_ = (uint *)&DAT_00dee2cc;
      FUN_00448740();
    }
  }
  ExceptionList = local_10;
  return param_1;
}

