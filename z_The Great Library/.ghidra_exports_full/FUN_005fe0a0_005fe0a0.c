// FUN_005fe0a0 @ 005fe0a0 body=[[005fe0a0, 005fe1c5] [005fe1c9, 005fe1ec] [005fe1f0, 005fe20e] [005fe212, 005fe22d] [005fe231, 005fe245]]


void FUN_005fe0a0(void)

{
  char *pcVar1;
  int *in_ECX;
  char **ppcVar2;
  undefined4 *puVar3;
  undefined4 uStack_b0;
  char *pcStack_ac;
  char *pcStack_a8;
  uint uStack_a4;
  int iStack_94;
  uint local_88;
  undefined1 auStack_7c [4];
  undefined4 local_78;
  uint local_74;
  uint local_6c;
  undefined4 local_5c;
  uint local_58;
  uint uStack_50;
  undefined1 auStack_44 [4];
  undefined4 uStack_40;
  uint uStack_3c;
  uint uStack_34;
  undefined4 uStack_24;
  uint uStack_20;
  undefined1 uStack_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b45990;
  local_14 = ExceptionList;
  if ((in_ECX[8] != 0) && (*(char *)(in_ECX[8] + 0x67) != '\0')) {
    uStack_a4 = 1;
    pcStack_a8 = &DAT_00df830c;
    local_58 = 0xf;
    local_5c = 0;
    local_6c = local_6c & 0xffffff00;
    pcStack_ac = (char *)0x5fe0fd;
    ExceptionList = &local_14;
    FUN_00409350();
    local_c = 0;
    uStack_a4 = 0xb;
    pcStack_a8 = "money_value";
    local_74 = 0xf;
    local_78 = 0;
    local_88 = local_88 & 0xffffff00;
    pcStack_ac = (char *)0x5fe120;
    FUN_00409350();
    ppcVar2 = &pcStack_a8;
    puVar3 = &uStack_b0;
    local_c = CONCAT31(local_c._1_3_,1);
    (**(code **)(*in_ECX + 0x14))(&uStack_b0);
    (**(code **)(iStack_94 + 0xc))(&pcStack_a8);
    FUN_00988bb0(auStack_44,1,ppcVar2,puVar3);
    uStack_1c = 2;
    pcVar1 = (char *)FUN_00988f20(auStack_7c);
    uStack_1c = 3;
    (**(code **)(*(int *)in_ECX[8] + 0x3c))(&stack0xffffff68);
    uStack_a4 = 0xffffffff;
    pcStack_a8 = (char *)0x0;
    uStack_b0 = 0x5fe1a4;
    pcStack_ac = pcVar1;
    FUN_00408ed0();
    uStack_a4 = 0;
    pcStack_ac = (char *)0x5fe1b1;
    pcStack_a8 = pcVar1;
    FUN_00a5ecc0();
    if (0xf < uStack_3c) {
      uStack_a4 = uStack_50;
                    /* WARNING: Subroutine does not return */
      pcStack_a8 = &UNK_005fe1c6;
      FUN_00aae91b();
    }
    uStack_3c = 0xf;
    uStack_40 = 0;
    uStack_50 = uStack_50 & 0xffffff00;
    if (0xf < uStack_20) {
      uStack_a4 = uStack_34;
                    /* WARNING: Subroutine does not return */
      pcStack_a8 = &UNK_005fe1ed;
      FUN_00aae91b();
    }
    uStack_20 = 0xf;
    uStack_24 = 0;
    uStack_34 = uStack_34 & 0xffffff00;
    if (0xf < local_74) {
      uStack_a4 = local_88;
                    /* WARNING: Subroutine does not return */
      pcStack_a8 = &UNK_005fe20f;
      FUN_00aae91b();
    }
    local_74 = 0xf;
    local_78 = 0;
    if (0xf < local_58) {
      uStack_a4 = local_6c;
                    /* WARNING: Subroutine does not return */
      pcStack_a8 = &UNK_005fe22e;
      FUN_00aae91b();
    }
  }
  ExceptionList = local_14;
  return;
}

