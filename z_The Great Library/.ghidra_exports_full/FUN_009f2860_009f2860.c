// FUN_009f2860 @ 009f2860 body=[[009f2860, 009f28cf] [009f28d3, 009f297b] [009f297f, 009f29a2] [009f29a6, 009f29c9] [009f29cd, 009f29e7] [009f29eb, 009f2a0b] [009f2a0f, 009f2a43]]


undefined4 FUN_009f2860(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 local_c0 [5];
  uint local_ac;
  uint local_a4;
  undefined4 local_94;
  uint local_90;
  uint local_88;
  undefined4 local_78;
  uint local_74;
  uint local_6c;
  undefined4 local_5c;
  uint local_58;
  uint local_50;
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  int local_18;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b494a9;
  local_10 = ExceptionList;
  local_18 = 0;
  local_58 = 0xf;
  local_5c = 0;
  local_6c = local_6c & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350(&DAT_00ded94d,0);
  local_18 = in_ECX + 0x24;
  local_8 = 0;
  cVar1 = FUN_00416db0();
  local_11 = cVar1 == '\0';
  local_8 = 0xffffffff;
  if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_6c);
  }
  if (!(bool)local_11) {
    FUN_009f2390(param_1);
    ExceptionList = local_10;
    return param_1;
  }
  uVar2 = FUN_009f2390(local_c0);
  local_8 = 1;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350(&DAT_00e05968,4);
  local_8._0_1_ = 2;
  local_3c = 0xf;
  local_40 = 0;
  local_50 = local_50 & 0xffffff00;
  FUN_00409350(&DAT_00df963c,2);
  local_8._0_1_ = 3;
  FUN_00988f20(local_18);
  local_8._0_1_ = 4;
  FUN_00988f20(local_34);
  local_8 = CONCAT31(local_8._1_3_,5);
  FUN_00988f20(uVar2);
  if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_88);
  }
  local_74 = 0xf;
  local_78 = 0;
  local_88 = local_88 & 0xffffff00;
  if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_a4);
  }
  local_90 = 0xf;
  local_94 = 0;
  local_a4 = local_a4 & 0xffffff00;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50 = local_50 & 0xffffff00;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  if (0xf < local_ac) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_c0[0]);
  }
  ExceptionList = local_10;
  return param_1;
}

