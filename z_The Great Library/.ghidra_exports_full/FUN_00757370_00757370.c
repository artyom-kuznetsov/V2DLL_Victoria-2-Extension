// FUN_00757370 @ 00757370 body=[[00757370, 00757509] [00757510, 007576b1]]


undefined4 FUN_00757370(undefined4 param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *in_ECX;
  int *unaff_EDI;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int local_168;
  undefined1 auStack_164 [4];
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined1 uStack_154;
  undefined1 uStack_150;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined1 uStack_134;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined1 uStack_118;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined1 uStack_100;
  undefined4 uStack_fc;
  undefined1 uStack_f8;
  undefined1 auStack_7c [88];
  void *pvStack_24;
  void *pvStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b7c1c5;
  pvStack_14 = ExceptionList;
  local_168 = 0;
  ExceptionList = &pvStack_14;
  (**(code **)(*(int *)in_ECX[0x16] + 0x4c))();
  (**(code **)(*(int *)in_ECX[0x16] + 0x4c))(auStack_164);
  uStack_13c = 0xf;
  uStack_120 = 0xf;
  uStack_104 = 0xf;
  uStack_140 = 0;
  uStack_150 = 0;
  uStack_124 = 0;
  uStack_134 = 0;
  uStack_108 = 0;
  uStack_118 = 0;
  uStack_fc = 0;
  uStack_f8 = 1;
  pvStack_14 = (void *)0x0;
  if (*(int *)(in_ECX[0x15] + 0x98) != 0) {
    (**(code **)(*in_ECX + 0x198))(param_1,*(int *)(in_ECX[0x15] + 0x98));
    FUN_00459820();
    ExceptionList = pvStack_24;
    return param_1;
  }
  if (in_ECX[0x1d7] == 3) {
    uStack_160 = 0;
    uStack_15c = 0;
    uStack_158 = 0;
    uStack_154 = 0;
    uVar6 = 0;
    puVar5 = &uStack_160;
    pvStack_14 = (void *)0x1;
    puVar4 = &stack0xfffffe90;
    uVar1 = (**(code **)(*in_ECX + 0x38))(puVar4,puVar5,0);
    piVar2 = (int *)FUN_006451c0(uVar1,puVar4,puVar5,uVar6);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0xc))(auStack_7c,0);
      pvStack_1c._0_1_ = 2;
      FUN_004115d0();
      pvStack_1c = (void *)CONCAT31(pvStack_1c._1_3_,1);
      FUN_00459820();
      iVar3 = (**(code **)(*unaff_EDI + 4))();
      if (iVar3 == 3) {
        for (iVar3 = *(int *)(DAT_012588e8 + 0x18); in_ECX = &local_168, iVar3 != 0;
            iVar3 = *(int *)(iVar3 + 0x3c)) {
          if ((*(int *)(iVar3 + 0x24) == unaff_EDI[0x49]) && (unaff_EDI[0x49] != 0)) {
            uVar1 = FUN_009885d0();
            pvStack_1c._0_1_ = 3;
            FUN_00448aa0(uVar1,0,0xffffffff);
            pvStack_1c._0_1_ = 1;
            FUN_00408ad0();
            uVar1 = FUN_009885d0();
            pvStack_1c._0_1_ = 4;
            FUN_009885d0();
            pvStack_1c._0_1_ = 5;
            FUN_00988f20(iVar3);
            pvStack_1c._0_1_ = 6;
            uVar1 = FUN_00988f20(uVar1);
            pvStack_1c._0_1_ = 7;
            FUN_00448aa0(uVar1,0,0xffffffff);
            FUN_00408ad0();
            FUN_00408ad0();
            FUN_00408ad0();
            pvStack_1c = (void *)CONCAT31(pvStack_1c._1_3_,1);
            FUN_00408ad0();
          }
        }
      }
      uStack_100 = 0;
      iVar3 = (**(code **)(*in_ECX + 0x40))();
      uVar1 = *(undefined4 *)(iVar3 + 0x6b9bc);
      iVar3 = (**(code **)(*in_ECX + 0x40))();
      local_168 = *(int *)(iVar3 + 0x6b9bc);
      uStack_fc = CONCAT22((short)*(undefined4 *)(iVar3 + 0x6b9c0) + -0xbc,(short)uVar1 + -0xf4);
    }
    pvStack_14 = (void *)((uint)pvStack_14 & 0xffffff00);
    FUN_009a63f0();
  }
  FUN_0040c830(param_1);
  FUN_00459820();
  ExceptionList = pvStack_1c;
  return param_1;
}

