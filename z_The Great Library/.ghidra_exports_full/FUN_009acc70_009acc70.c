// FUN_009acc70 @ 009acc70 body=[[009acc70, 009acce7] [009acceb, 009acd06] [009acd0a, 009acd1d]]


undefined4 FUN_009acc70(undefined4 param_1)

{
  int in_ECX;
  undefined4 local_4c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b63450;
  local_10 = ExceptionList;
  local_14 = 0;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350(&DAT_00e38dac,1);
  local_8 = 0;
  FUN_00988fa0(in_ECX + 4);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_00988f20(local_30);
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c);
  }
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  ExceptionList = local_10;
  return param_1;
}

