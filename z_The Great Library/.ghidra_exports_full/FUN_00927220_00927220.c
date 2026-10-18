// FUN_00927220 @ 00927220 body=[[00927220, 00927326] [0092732a, 0092734a] [00927353, 0092740a] [0092740e, 0092742e] [00927437, 009274e8] [009274ec, 00927511] [0092751a, 009277e1]]


undefined4 FUN_00927220(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int in_ECX;
  uint local_160 [4];
  undefined4 local_150;
  uint local_14c;
  undefined1 local_144 [4];
  int local_140;
  undefined4 local_13c;
  undefined4 local_138;
  uint local_130;
  undefined1 local_f0 [28];
  undefined1 local_d4 [192];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b846f3;
  local_14 = ExceptionList;
  iVar4 = *(int *)(DAT_012587e4 + 4);
  iVar3 = *(int *)(iVar4 + *(int *)(in_ECX + 0xc) * 4);
  iVar1 = *(int *)(iVar3 + 0x141c);
  iVar3 = *(int *)(iVar3 + 0x1418);
  if (iVar3 != iVar1) {
    do {
      if (*(int *)(iVar3 + 4) == *(int *)(in_ECX + 0x14)) break;
      iVar3 = iVar3 + 8;
    } while (iVar3 != iVar1);
    if (iVar3 != iVar1) {
      local_14c = 0xf;
      local_150 = 0;
      local_160[0] = (uint)local_160[0]._1_3_ << 8;
      ExceptionList = &local_14;
      FUN_00409350("CB_NOT_ON_SPHERES",0x11);
      local_c = 0;
      FUN_009a8ee0(local_144,local_160);
      local_c._0_1_ = 1;
      iVar4 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
      local_c = CONCAT31(local_c._1_3_,2);
      FUN_009adb70();
      if (local_140 != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_140 = 0;
      local_13c = 0;
      local_138 = 0;
      if (local_14c < 0x10) {
        ExceptionList = local_14;
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  iVar3 = *(int *)(iVar4 + *(int *)(in_ECX + 0x14) * 4);
  if ((*(char *)(iVar3 + 0xcf5) == '\0') && (*(char *)(iVar3 + 0xcf4) == '\0')) {
    iVar4 = *(int *)(iVar4 + *(int *)(in_ECX + 0xc) * 4);
    iVar3 = *(int *)(*(int *)(iVar4 + 0xbe8) + *(int *)(in_ECX + 0x14) * 4);
    if (*(int *)(*(int *)(DAT_012586dc + 0x30) + 0x480) < *(int *)(iVar3 + 0x3c)) {
      ExceptionList = &local_14;
      uVar5 = FUN_009888f0();
      local_c = 6;
      uVar6 = FUN_009888f0();
      local_c = CONCAT31(local_c._1_3_,7);
      FUN_0043ec10(param_1,&DAT_00df7e90,uVar6,"LIMIT",uVar5);
      if (0xf < local_14c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_14c = 0xf;
      local_150 = 0;
      local_160[0] = local_160[0] & 0xffffff00;
      if (0xf < local_130) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    else if (*(int *)(iVar4 + 0x156c) == 0) {
      if (*(int *)(iVar3 + 0x34) == 0) {
        ExceptionList = &local_14;
        cVar2 = FUN_0092e270();
        if (cVar2 == '\0') {
          FUN_009885d0();
        }
        else {
          FUN_009885d0();
          local_c = 0xf;
          FUN_009885d0();
          local_c._0_1_ = 0x10;
          FUN_004f97a0();
          local_c._0_1_ = 0x11;
          FUN_009a8ee0(local_d4,local_f0);
          local_c._0_1_ = 0x12;
          iVar4 = FUN_00475500();
          FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
          local_c._0_1_ = 0x13;
          FUN_00988f20();
          local_c._0_1_ = 0x14;
          FUN_00988f20();
          FUN_00408ad0();
          FUN_00408ad0();
          local_c = CONCAT31(local_c._1_3_,0x11);
          FUN_009a9740();
          FUN_00408ad0();
          FUN_00408ad0();
          FUN_00408ad0();
        }
      }
      else {
        ExceptionList = &local_14;
        FUN_009885d0();
        local_c = 9;
        FUN_009885d0();
        local_c._0_1_ = 10;
        FUN_004f97a0();
        local_c._0_1_ = 0xb;
        FUN_009a8ee0(local_144,local_160);
        local_c._0_1_ = 0xc;
        iVar4 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
        local_c._0_1_ = 0xd;
        FUN_00988f20();
        local_c._0_1_ = 0xe;
        FUN_00988f20();
        FUN_00408ad0();
        FUN_00408ad0();
        local_c = CONCAT31(local_c._1_3_,0xb);
        FUN_009a9740();
        FUN_00408ad0();
        FUN_00408ad0();
        FUN_00408ad0();
      }
    }
    else {
      ExceptionList = &local_14;
      uVar5 = FUN_004f97a0();
      local_c = 8;
      FUN_0042c180(param_1,uVar5);
      FUN_00408ad0();
    }
  }
  else {
    local_14c = 0xf;
    local_150 = 0;
    local_160[0] = (uint)local_160[0]._1_3_ << 8;
    ExceptionList = &local_14;
    FUN_00409350("CB_NOT_ON_PUPPETS",0x11);
    local_c = 3;
    FUN_009a8ee0(local_144,local_160);
    local_c._0_1_ = 4;
    iVar4 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
    local_c = CONCAT31(local_c._1_3_,5);
    FUN_009adb70();
    if (local_140 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_140 = 0;
    local_13c = 0;
    local_138 = 0;
    if (0xf < local_14c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  ExceptionList = local_14;
  return param_1;
}

