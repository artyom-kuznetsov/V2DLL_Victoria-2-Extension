// FUN_0068e1e0 @ 0068e1e0 body=[[0068e1e0, 0068e32a] [0068e32e, 0068e356] [0068e35a, 0068e38b]]


/* WARNING: Removing unreachable block (ram,0x0068e321) */

void FUN_0068e1e0(int param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStack_f0 [116];
  undefined4 uStack_7c;
  char *pcStack_78;
  uint uStack_74;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  iVar1 = DAT_012588e8;
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b98c88;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if ((*(char *)(param_1 + 0xb94) == '\0') && (ExceptionList = &local_14, param_2 != '\0')) {
    uStack_74 = 0;
    pcStack_78 = "";
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    uStack_7c = 0x68e241;
    ExceptionList = &local_14;
    FUN_00409350();
    local_c = 0;
    uStack_74 = 0xd;
    pcStack_78 = "GW_DISCOVERED";
    uStack_7c = 0x68e261;
    FUN_00409350();
    local_c._0_1_ = 1;
    uVar10 = 0;
    uVar4 = *(undefined4 *)(iVar1 + 0xb60);
    uVar9 = 0x2d2d2d;
    uVar8 = *(undefined4 *)(iVar1 + 0xb5c);
    uVar7 = 0;
    puVar6 = local_34;
    uVar5 = 0;
    uVar2 = FUN_005061e0(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar1 + 0xb60) * 4));
    FUN_006a4f40(uVar2,uVar5,puVar6,uVar7,uVar8,uVar4,uVar9,uVar10);
    uVar3 = FUN_006a55b0();
    FUN_006a7ed0(auStack_f0,uVar3,uVar2,uVar5,puVar6,uVar7,uVar8,uVar4,uVar9,uVar10);
    local_c._0_1_ = 2;
    FUN_006a4f40();
    uVar4 = FUN_006a4f40();
    local_c = CONCAT31(local_c._1_3_,1);
    FUN_004e9540(uVar4);
    local_c = 0xffffffff;
    if (0xf < local_20) {
      uStack_74 = local_34[0];
                    /* WARNING: Subroutine does not return */
      pcStack_78 = &UNK_0068e357;
      FUN_00aae91b();
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
  }
  local_c = 0xffffffff;
  uStack_74 = param_1;
  *(char *)(param_1 + 0xb94) = param_2;
  pcStack_78 = (char *)0x68e378;
  FUN_0068e390();
  ExceptionList = local_14;
  return;
}

