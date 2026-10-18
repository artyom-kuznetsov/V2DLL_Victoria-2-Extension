// FUN_00924470 @ 00924470 body=[[00924470, 0092457c] [00924580, 00924666] [0092466a, 009246b0] [009246b4, 009246d0] [009246d4, 00924710] [00924714, 00924734] [00924738, 0092475f] [00924768, 009247e2] [009247e8, 0092481c]]


undefined1 * FUN_00924470(undefined1 *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int in_ECX;
  undefined1 local_b0 [4];
  int local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_9c [4];
  int local_98;
  undefined4 local_94;
  undefined4 local_90;
  uint local_88 [4];
  undefined4 local_78;
  uint local_74;
  uint local_6c;
  undefined4 local_5c;
  uint local_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34;
  undefined4 local_24;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b84878;
  local_14 = ExceptionList;
  iVar4 = *(int *)(DAT_012587e4 + 4);
  iVar2 = *(int *)(*(int *)(*(int *)(iVar4 + *(int *)(in_ECX + 0xc) * 4) + 0xbe8) +
                  *(int *)(in_ECX + 0x14) * 4);
  if ((*(char *)(*(int *)(iVar4 + *(int *)(iVar2 + 0xc) * 4) + 0x31) == '\0') &&
     (3 < *(int *)(iVar2 + 0x40))) {
    if (*(int *)(*(int *)(iVar4 + *(int *)(in_ECX + 0x14) * 4) + 0x142c) == 0) {
      ExceptionList = &local_14;
      *(undefined4 *)(param_1 + 0x14) = 0xf;
      *(undefined4 *)(param_1 + 0x10) = 0;
      *param_1 = 0;
      FUN_00409350(&DAT_00ded94d,0);
    }
    else {
      ExceptionList = &local_14;
      uVar6 = FUN_004f97a0();
      local_c = 8;
      FUN_0042c180(param_1,uVar6);
      if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
  }
  else {
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    pcVar3 = PTR_s_REL_FRIENDLY_00f09168;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    ExceptionList = &local_14;
    FUN_00409350(PTR_s_REL_FRIENDLY_00f09168,(int)pcVar3 - (int)(PTR_s_REL_FRIENDLY_00f09168 + 1));
    local_c = 0;
    iVar4 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0xc) * 4) +
                             0xbe8) + *(int *)(in_ECX + 0x14) * 4);
    if (*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar4 + 0xc) * 4) + 0x31) == '\0')
    {
      iVar4 = *(int *)(iVar4 + 0x40);
    }
    else {
      iVar4 = 1;
    }
    pcVar3 = (&PTR_s_REL_HOSTILE_00f09158)[iVar4];
    local_74 = 0xf;
    local_78 = 0;
    local_88[0] = local_88[0] & 0xffffff00;
    pcVar5 = pcVar3;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(pcVar3,(int)pcVar5 - (int)(pcVar3 + 1));
    local_c._0_1_ = 1;
    FUN_009a8ee0(local_9c,local_50);
    local_c._0_1_ = 2;
    iVar4 = FUN_00475500();
    uVar6 = FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
    local_c._0_1_ = 3;
    FUN_009a8ee0(local_b0,local_88);
    local_c._0_1_ = 4;
    iVar4 = FUN_00475500();
    uVar7 = FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
    local_c._0_1_ = 5;
    FUN_0043ec10(param_1,"CURRENT",uVar7,"NEEDED",uVar6);
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34 = local_34 & 0xffffff00;
    local_c._0_1_ = 6;
    FUN_009adb70();
    if (local_ac != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_ac = 0;
    local_a8 = 0;
    local_a4 = 0;
    if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_58 = 0xf;
    local_5c = 0;
    local_6c = local_6c & 0xffffff00;
    local_c = CONCAT31(local_c._1_3_,7);
    FUN_009adb70();
    if (local_98 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_98 = 0;
    local_94 = 0;
    local_90 = 0;
    if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_74 = 0xf;
    local_78 = 0;
    local_88[0] = local_88[0] & 0xffffff00;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  ExceptionList = local_14;
  return param_1;
}

