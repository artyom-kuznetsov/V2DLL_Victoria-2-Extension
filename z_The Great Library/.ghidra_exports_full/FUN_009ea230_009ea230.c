// FUN_009ea230 @ 009ea230 body=[[009ea230, 009ea3f2] [009ea3f6, 009ea4d4] [009ea4d8, 009ea558]]


void FUN_009ea230(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  uint unaff_EBX;
  int *piVar4;
  int iVar5;
  int *local_100;
  int *local_fc;
  undefined4 uStack_f8;
  uint uStack_f4;
  undefined4 uStack_f0;
  uint uStack_ec;
  byte local_dc [108];
  undefined **appuStack_70 [2];
  undefined **appuStack_68 [19];
  undefined4 uStack_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b569bc;
  local_14 = ExceptionList;
  if ((*(char *)((int)in_ECX + 9) != '\0') && (-1 < param_1)) {
    iVar1 = *(int *)(&DAT_00fc0c88 + param_1 * 4);
    local_fc = &DAT_00f20c60 + iVar1;
    if ((*local_fc != 0) && (-1 < iVar1)) {
      ExceptionList = &local_14;
      local_100 = in_ECX;
      if ((&DAT_00f40c60)[iVar1 * 4] == 2) {
        ExceptionList = &local_14;
        (**(code **)(*in_ECX + 0x2c))(iVar1);
      }
      iVar2 = 0;
      if ((&DAT_00f21460)[iVar1] != 0) {
        iVar5 = 0;
        piVar4 = local_fc;
        do {
          (**(code **)(*(int *)*piVar4 + 0x24))((int *)*piVar4,local_dc);
          iVar2 = iVar5;
          if ((local_dc[0] & 5) == 0) break;
          iVar5 = iVar5 + 1;
          piVar4 = piVar4 + 0x200;
          iVar2 = 0;
        } while (iVar5 < 0x40);
      }
      iVar5 = iVar2 * 0x200 + iVar1;
      iVar2 = (**(code **)(*(int *)(&DAT_00f20c60)[iVar5] + 0x3c))
                        ((int *)(&DAT_00f20c60)[iVar5],
                         (int)((float)(&DAT_00f40c68)[iVar5 * 4] * (float)param_3) + -10000);
      if (iVar2 != 0) {
        uStack_ec = 0xf;
        uStack_f0 = 0;
        local_100 = (int *)((uint)local_100 & 0xffffff00);
        FUN_00409350("DirectSound.cpp",0xf);
        local_14 = (void *)0x0;
        uVar3 = FUN_004015b0(&local_100,0xcd,0x1000);
        local_14._0_1_ = 1;
        FUN_00987d50(uVar3,"Failed to set volume for sound ",0x1f,0);
        uVar3 = FUN_00455470(uVar3,iVar1);
        FUN_00401280(uVar3);
        local_14 = (void *)((uint)local_14._1_3_ << 8);
        FUN_00987ac0(appuStack_68);
        appuStack_68[0] = std::ios_base::vftable;
        FUN_00aad52d(appuStack_68);
        local_14 = (void *)0xffffffff;
        if (0xf < uStack_ec) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_100);
        }
      }
      iVar2 = (**(code **)(*(int *)(&DAT_00f20c60)[iVar5] + 0x34))((int *)(&DAT_00f20c60)[iVar5],0);
      if (iVar2 != 0) {
        uStack_f4 = 0xf;
        uStack_f8 = 0;
        FUN_00409350("DirectSound.cpp",0xf);
        uStack_1c = 2;
        uVar3 = FUN_004015b0(&stack0xfffffef8,0xd2,0x1000);
        uStack_1c._0_1_ = 3;
        FUN_00987d50(uVar3,"Failed to reset position for sound ",0x23,0);
        uVar3 = FUN_00455470(uVar3,iVar1);
        FUN_00401280(uVar3);
        uStack_1c = CONCAT31(uStack_1c._1_3_,2);
        FUN_00987ac0(appuStack_70);
        appuStack_70[0] = std::ios_base::vftable;
        FUN_00aad52d(appuStack_70);
        uStack_1c = 0xffffffff;
        if (0xf < uStack_f4) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(unaff_EBX & 0xffffff00);
        }
      }
      piVar4 = (int *)(&DAT_00f20c60)[iVar5];
      if (param_2 == 1) {
        (**(code **)(*piVar4 + 0x30))(piVar4,0,0,1);
        (&DAT_00f40c64)[iVar5 * 0x10] = 1;
      }
      else {
        (**(code **)(*piVar4 + 0x30))(piVar4,0,0,0);
        (&DAT_00f40c64)[iVar5 * 0x10] = 0;
      }
      (&DAT_00f40c60)[iVar5 * 4] = 1;
      for (piVar4 = (int *)local_100[3]; (piVar4 != (int *)0x0 && (*piVar4 != iVar1));
          piVar4 = (int *)piVar4[2]) {
      }
      FUN_005f2ae0(piVar4);
    }
  }
  ExceptionList = local_14;
  return;
}

