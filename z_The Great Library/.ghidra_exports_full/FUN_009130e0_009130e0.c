// FUN_009130e0 @ 009130e0 body=[[009130e0, 009131a9] [009131ad, 009131cd] [009131d1, 009131ec] [009131f0, 0091320b] [0091320f, 00913228]]


undefined4 FUN_009130e0(undefined4 param_1)

{
  int *in_ECX;
  undefined4 unaff_EBX;
  undefined4 local_8c;
  undefined1 local_88;
  uint local_78;
  undefined4 local_74;
  uint uStack_70;
  undefined4 uStack_60;
  uint uStack_5c;
  uint uStack_54;
  undefined1 local_50 [12];
  undefined4 uStack_44;
  uint uStack_40;
  uint uStack_38;
  undefined4 uStack_28;
  uint uStack_24;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b85240;
  pvStack_14 = ExceptionList;
  local_8c = 0;
  local_74 = 0xf;
  local_78 = 0;
  local_88 = 0;
  ExceptionList = &pvStack_14;
  FUN_00409350("_OFFER",6);
  local_c = 0;
  local_8c = FUN_0055dd40();
  local_c = CONCAT31(local_c._1_3_,1);
  (**(code **)(*in_ECX + 0x24))(local_50);
  puStack_10._0_1_ = 2;
  FUN_00988f20(&local_8c);
  puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,3);
  FUN_0042c180(param_1,unaff_EBX);
  if (0xf < uStack_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_70);
  }
  uStack_5c = 0xf;
  uStack_60 = 0;
  uStack_70 = uStack_70 & 0xffffff00;
  if (0xf < uStack_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_54);
  }
  uStack_40 = 0xf;
  uStack_44 = 0;
  uStack_54 = uStack_54 & 0xffffff00;
  if (0xf < uStack_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_38);
  }
  uStack_24 = 0xf;
  uStack_28 = 0;
  uStack_38 = uStack_38 & 0xffffff00;
  if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_8c);
  }
  ExceptionList = pvStack_18;
  return param_1;
}

