// FUN_00447520 @ 00447520 body=[[00447520, 00447665] [00447669, 00447713] [00447717, 0044772c]]


undefined4
FUN_00447520(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            ,char param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *in_ECX;
  undefined4 *puVar4;
  undefined4 local_64 [2];
  uint local_5c;
  _Lockit local_58 [8];
  uint local_50;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_34;
  void *pvStack_2c;
  uint uStack_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b407a0;
  pvStack_14 = ExceptionList;
  if ((*(uint *)(param_4 + 0x14) & 0x4000) == 0) {
    ExceptionList = &pvStack_14;
    (**(code **)(*in_ECX + 0x1c))(param_1,param_2,param_3,param_4,param_5,param_6);
    ExceptionList = pvStack_2c;
    return param_1;
  }
  ExceptionList = &pvStack_14;
  FUN_00446040(&local_5c);
  local_c = 0;
  local_64[0] = FUN_00448cc0();
  local_c = 0xffffffff;
  if (local_5c != 0) {
    std::_Lockit::_Lockit(local_58,0);
    iVar1 = *(int *)(local_5c + 4);
    if ((iVar1 != 0) && (iVar1 != -1)) {
      *(int *)(local_5c + 4) = iVar1 + -1;
    }
    iVar1 = *(int *)(local_5c + 4);
    FUN_00aad9f1();
    puVar4 = (undefined4 *)(~-(uint)(iVar1 != 0) & local_5c);
    if (puVar4 != (undefined4 *)0x0) {
      (**(code **)*puVar4)(1);
    }
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50 = local_50 & 0xffffff00;
  local_c = 1;
  if (param_6 == '\0') {
    uVar3 = FUN_004485a0();
    local_c._0_1_ = 3;
    FUN_00447470(uVar3);
  }
  else {
    uVar3 = FUN_004485c0();
    local_c._0_1_ = 2;
    FUN_00447470(uVar3);
  }
  local_c = CONCAT31(local_c._1_3_,1);
  if (0xf < uStack_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34);
  }
  if ((*(uint *)(param_4 + 0x14) & 0x1c0) != 0x40) {
    puVar4 = (undefined4 *)FUN_00448540(param_2,param_3,param_5);
    param_2 = *puVar4;
    param_3 = puVar4[1];
  }
  puVar4 = (undefined4 *)FUN_00448950(local_64,param_2,param_3,local_40);
  uVar3 = *puVar4;
  uVar2 = puVar4[1];
  *(undefined4 *)(param_4 + 0x20) = 0;
  *(undefined4 *)(param_4 + 0x24) = 0;
  FUN_00448540(uVar3,uVar2,param_5);
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50);
  }
  ExceptionList = pvStack_14;
  return param_1;
}

