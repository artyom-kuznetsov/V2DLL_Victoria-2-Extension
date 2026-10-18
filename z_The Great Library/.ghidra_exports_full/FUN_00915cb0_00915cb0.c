// FUN_00915cb0 @ 00915cb0 body=[[00915cb0, 00915d75] [00915d79, 00915d95] [00915d9b, 00915dc6]]


undefined4 FUN_00915cb0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  undefined4 local_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint auStack_38 [4];
  undefined4 uStack_28;
  uint uStack_24;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b790aa;
  pvStack_14 = ExceptionList;
  local_4c = 0;
  ExceptionList = &pvStack_14;
  cVar1 = (**(code **)(*in_ECX + 0x90))(0);
  if (cVar1 == '\0') {
    FUN_0093ae10(param_1,in_ECX + 2,in_ECX + 4,1);
  }
  else {
    uStack_24 = 0xf;
    uStack_28 = 0;
    auStack_38[0] = auStack_38[0] & 0xffffff00;
    FUN_00409350("ACT_WARDESC",0xb);
    puStack_10 = (undefined1 *)0x0;
    FUN_009a8ee0(&local_4c,auStack_38);
    puStack_10._0_1_ = 1;
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,2);
    FUN_009adb70();
    if (iStack_48 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    iStack_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    if (0xf < uStack_24) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  ExceptionList = pvStack_18;
  return param_1;
}

