// FUN_009b6400 @ 009b6400 body=[[009b6400, 009b64f2] [009b64f6, 009b652b] [009b6530, 009b6598] [009b659c, 009b65e6] [009b65ea, 009b6631] [009b6635, 009b6688] [009b668c, 009b669f]]


void FUN_009b6400(int param_1)

{
  uint3 uVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined4 ****ppppuVar5;
  uint uVar6;
  int iStack_7c;
  ushort uStack_76;
  int iStack_74;
  undefined4 ***pppuStack_70;
  undefined4 uStack_6c;
  int iStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint auStack_54 [4];
  undefined4 uStack_44;
  uint uStack_40;
  uint auStack_38 [4];
  undefined4 uStack_28;
  uint uStack_24;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b49ec8;
  local_14 = ExceptionList;
  if (*(int *)(param_1 + 0x110) != 0) {
    ExceptionList = &local_14;
    piVar3 = (int *)(**(code **)(*(int *)(param_1 + 0x54) + 0xd0))();
    (**(code **)(*(int *)(param_1 + 0x54) + 0x28))(&iStack_74);
    uVar6 = (uint)uStack_76;
    iVar4 = piVar3[1] - *piVar3 >> 5;
    if (iVar4 <= (int)uVar6) {
      uVar6 = iVar4 - 1;
    }
    uStack_5c = 0xf;
    iStack_60 = 0;
    pppuStack_70 = (undefined4 ***)((uint)pppuStack_70 & 0xffffff00);
    FUN_00409350(&DAT_00ded94d,0);
    puStack_10 = (undefined1 *)0x0;
    if (-1 < (int)uVar6) {
      FUN_00408ed0(uVar6 * 0x20 + *piVar3,0,0xffffffff);
    }
    uStack_40 = 0xf;
    uStack_44 = 0;
    auStack_54[0] = auStack_54[0] & 0xffffff00;
    FUN_00409350(&DAT_00ded94d,0);
    puStack_10._0_1_ = 1;
    cVar2 = FUN_00416db0();
    uVar1 = puStack_10._1_3_;
    puStack_10 = (undefined1 *)((uint)puStack_10._1_3_ << 8);
    if (0xf < uStack_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_54[0]);
    }
    if (cVar2 == '\0') {
      uStack_40 = 0xf;
      uStack_44 = 0;
      auStack_54[0] = auStack_54[0] & 0xffffff00;
      puStack_10._0_1_ = 2;
      puStack_10._1_3_ = uVar1;
      iStack_74 = iStack_60;
      iStack_7c = 0;
      if (0 < iStack_60) {
        do {
          ppppuVar5 = (undefined4 ****)pppuStack_70;
          if (uStack_5c < 0x10) {
            ppppuVar5 = &pppuStack_70;
          }
          uStack_24 = 0xf;
          uStack_28 = 0;
          auStack_38[0] = auStack_38[0] & 0xffffff00;
          if (*(char *)((int)ppppuVar5 + iStack_7c) == '\n') {
            FUN_00409350(&DAT_00dee2cc,1);
            puStack_10._0_1_ = 3;
            FUN_00448aa0(auStack_38,0,0xffffffff);
            puStack_10._0_1_ = 2;
            if (0xf < uStack_24) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(auStack_38[0]);
            }
            FUN_00409350(&DAT_00ded94d,0);
          }
          else {
            FUN_00408ed0(param_1 + 0x1a4,0,0xffffffff);
            puStack_10._0_1_ = 4;
            FUN_00448aa0(auStack_38,0,0xffffffff);
            puStack_10._0_1_ = 2;
            if (0xf < uStack_24) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(auStack_38[0]);
            }
            FUN_00448aa0(param_1 + 0x1a4,0,0xffffffff);
          }
          iStack_7c = iStack_7c + 1;
        } while (iStack_7c < iStack_74);
      }
      FUN_00408ed0(auStack_54,0,0xffffffff);
      puStack_10 = (undefined1 *)((uint)puStack_10._1_3_ << 8);
      if (0xf < uStack_40) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_54[0]);
      }
    }
    (**(code **)(**(int **)(param_1 + 0x110) + 0xf4))
              (&pppuStack_70,param_1 + 0x118,param_1 + 0x134,(int)*(short *)(param_1 + 0x160),
               (int)*(short *)(param_1 + 0x162),*(undefined4 *)(param_1 + 0x150),
               *(undefined4 *)(param_1 + 0x154),0,0);
    if (0xf < uStack_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_6c);
    }
  }
  ExceptionList = local_14;
  return;
}

