// FUN_009a1320 @ 009a1320 body=[[009a1320, 009a1368] [009a1370, 009a13d2] [009a13d6, 009a13f0] [009a13f4, 009a1411] [009a1415, 009a1435]]


undefined1 * FUN_009a1320(undefined1 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  uint local_68 [4];
  undefined4 local_58;
  uint local_54;
  uint local_4c;
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = ExceptionList;
  puStack_c = &LAB_00b4f581;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  local_8 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  local_14 = 1;
  while( true ) {
    if (iVar1 == 0) {
      ExceptionList = local_10;
      return param_1;
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350(&DAT_00dee2cc,1);
    local_8 = 1;
    FUN_009a0a20(local_68);
    local_8._0_1_ = 2;
    uVar2 = FUN_00988f20(local_30);
    local_8._0_1_ = 3;
    FUN_00448aa0(uVar2,0,0xffffffff);
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_4c);
    }
    local_38 = 0xf;
    local_3c = 0;
    local_4c = local_4c & 0xffffff00;
    if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_68[0]);
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    if (0xf < local_1c) break;
    iVar1 = *(int *)(iVar1 + 0x40);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_30[0]);
}

