// FUN_009b3330 @ 009b3330 body=[[009b3330, 009b3455]]


void FUN_009b3330(undefined1 param_1)

{
  int iVar1;
  int *in_ECX;
  undefined1 auStack_74 [16];
  undefined4 uStack_64;
  undefined4 uStack_60;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b49efb;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  iVar1 = (**(code **)(*in_ECX + 0x34))();
  if (1 < *(int *)(iVar1 + 8)) {
    uStack_60 = 0xf;
    uStack_64 = 0;
    auStack_74[0] = 0;
    FUN_00409350();
    uStack_c = 0;
    FUN_00409350("Error: Single Choice set while multiple choices selected.",0x39);
    FUN_009b1cc0(auStack_74);
    uStack_c._0_1_ = 1;
    FUN_00408ed0();
    uStack_c._0_1_ = 2;
    FUN_00408ed0();
    uStack_c = CONCAT31(uStack_c._1_3_,1);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8();
  }
  *(undefined1 *)(in_ECX + 10) = param_1;
  ExceptionList = pvStack_14;
  return;
}

