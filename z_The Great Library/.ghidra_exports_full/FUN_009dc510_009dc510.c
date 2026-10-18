// FUN_009dc510 @ 009dc510 body=[[009dc510, 009dc5b0] [009dc5b4, 009dc5d3] [009dc5d7, 009dc65a] [009dc65e, 009dc6ea] [009dc6ee, 009dc700]]


void FUN_009dc510(char *param_1)

{
  uint uVar1;
  undefined1 uVar2;
  char *_Mode;
  FILE *pFVar3;
  int in_ECX;
  uint in_stack_0000001c;
  undefined **local_d0;
  undefined4 local_cc;
  undefined **local_90;
  undefined4 local_8c;
  undefined1 local_88;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_6c;
  undefined4 local_5c;
  undefined4 local_58;
  uint local_50;
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4eea6;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_00408ed0();
  *(undefined2 *)(in_ECX + 0x11) = 0;
  *(undefined1 *)(in_ECX + 0x13) = 0;
  *(undefined1 *)(in_ECX + 0xc) = 0;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 1;
  _Mode = (char *)FUN_00988f20();
  if (0xf < *(uint *)(_Mode + 0x14)) {
    _Mode = *(char **)_Mode;
  }
  if (0xf < *(uint *)(param_1 + 0x14)) {
    param_1 = *(char **)param_1;
  }
  pFVar3 = _fopen(param_1,_Mode);
  *(FILE **)(in_ECX + 0x30) = pFVar3;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 0;
  uVar2 = (undefined1)local_8;
  local_8._0_1_ = 0;
  local_3c = 0xf;
  local_40 = 0;
  uVar1 = local_50 >> 8;
  local_50 = uVar1 << 8;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (*(int *)(in_ECX + 0x30) == 0) {
    local_3c = 0xf;
    local_40 = 0;
    local_50 = uVar1 << 8;
    FUN_00409350();
    local_8._0_1_ = 2;
    FUN_00988fa0();
    local_8._0_1_ = 3;
    FUN_00408ed0(local_34,0,0xffffffff);
    FUN_009e7a90(&local_d0,0x1b1);
    local_d0 = &PTR_FUN_00e37db4;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    local_8._0_1_ = 4;
    local_90 = &PTR_FUN_00e37db4;
    local_8c = local_cc;
    local_74 = 0xf;
    local_78 = 0;
    local_88 = 0;
    FUN_00408ed0();
    local_8._0_1_ = 5;
    local_58 = 0xf;
    local_5c = 0;
    local_6c = 0;
    FUN_00408ed0();
    local_8 = CONCAT31(local_8._1_3_,4);
    local_90 = &PTR_FUN_00e37db4;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8();
  }
  if (0xf < in_stack_0000001c) {
    local_8._0_1_ = uVar2;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return;
}

