// FUN_009f5820 @ 009f5820 body=[[009f5820, 009f58bb] [009f58bf, 009f58cc] [009f58d0, 009f5936] [009f593a, 009f5949]]


void FUN_009f5820(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int *unaff_ESI;
  undefined4 local_64 [5];
  uint local_50;
  undefined4 local_48 [5];
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4eb20;
  local_10 = ExceptionList;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  local_8 = 0;
  if (param_1 < unaff_ESI[10]) {
    ExceptionList = &local_10;
    FUN_009895f0(param_1);
    local_8._0_1_ = 2;
    uVar2 = FUN_009f6320(local_64);
    local_8 = CONCAT31(local_8._1_3_,3);
    FUN_00408ed0(uVar2,0,0xffffffff);
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_64[0]);
    }
  }
  else {
    ExceptionList = &local_10;
    uVar2 = (**(code **)(*unaff_ESI + 0x5c))(local_48);
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_00408ed0(uVar2,0,0xffffffff);
  }
  if (local_34 < 0x10) {
    sVar1 = 0;
    param_1._0_1_ = 10;
    iVar3 = FUN_005484e0(local_2c,&param_1,1);
    if (iVar3 != -1) {
      param_1._0_1_ = 10;
      sVar1 = 0;
      do {
        sVar1 = sVar1 + 1;
        iVar3 = FUN_005484e0(local_2c,&param_1,1);
      } while (iVar3 != -1);
    }
    *(short *)((int)unaff_ESI + 0x3a) = sVar1;
    param_1 = CONCAT31(param_1._1_3_,10);
    sVar1 = FUN_0098a0d0(&param_1);
    *(short *)(unaff_ESI + 0xe) = ((short)local_1c - sVar1) + -1;
    if (local_18 < 0x10) {
      ExceptionList = local_10;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_48[0]);
}

