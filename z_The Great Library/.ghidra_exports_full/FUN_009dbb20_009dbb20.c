// FUN_009dbb20 @ 009dbb20 body=[[009dbb20, 009dbc06] [009dbc0a, 009dbcad]]


void FUN_009dbb20(void)

{
  size_t sVar1;
  int in_ECX;
  undefined1 local_fc [8];
  undefined4 uStack_f4;
  uint local_d8 [4];
  undefined4 local_c8;
  uint local_c4;
  undefined1 *local_b8;
  undefined **local_b4;
  undefined4 local_b0;
  undefined1 local_ac;
  undefined4 local_9c;
  undefined4 local_98;
  undefined1 local_90;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_74;
  undefined4 local_64;
  undefined4 local_60;
  undefined **local_58;
  undefined4 local_54;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b4a326;
  local_14 = ExceptionList;
  uStack_f4 = 0x9dbb54;
  ExceptionList = &local_14;
  sVar1 = _fwrite(&stack0x00000004,1,1,*(FILE **)(in_ECX + 0x34));
  if (sVar1 == 1) {
    ExceptionList = local_14;
    return;
  }
  local_60 = 0xf;
  local_64 = 0;
  local_74 = 0;
  FUN_00409350();
  local_c = 0;
  local_c4 = 0xf;
  local_c8 = 0;
  local_d8[0] = local_d8[0] & 0xffffff00;
  FUN_00409350();
  local_b8 = local_fc;
  local_c._0_1_ = 1;
  local_fc[0] = 0;
  FUN_00408ed0(local_d8,0,0xffffffff);
  FUN_009e7a90(&local_58,0xe6);
  local_58 = &PTR_FUN_00e37db4;
  if (0xf < local_c4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_c4 = 0xf;
  local_c8 = 0;
  local_d8[0] = local_d8[0] & 0xffffff00;
  local_c._0_1_ = 2;
  local_b4 = &PTR_FUN_00e37db4;
  local_b0 = local_54;
  local_98 = 0xf;
  local_9c = 0;
  local_ac = 0;
  FUN_00408ed0();
  local_c._0_1_ = 3;
  local_7c = 0xf;
  local_80 = 0;
  local_90 = 0;
  FUN_00408ed0();
  local_c = CONCAT31(local_c._1_3_,2);
  local_b4 = &PTR_FUN_00e37db4;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8();
}

