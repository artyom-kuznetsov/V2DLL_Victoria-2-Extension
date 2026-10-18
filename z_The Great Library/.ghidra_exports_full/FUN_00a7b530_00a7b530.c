// FUN_00a7b530 @ 00a7b530 body=[[00a7b530, 00a7b61f] [00a7b623, 00a7b6c8] [00a7b6cc, 00a7b782]]


/* WARNING: Removing unreachable block (ram,0x00a7b6bf) */

void FUN_00a7b530(void)

{
  BOOL BVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined1 auStack_1f4 [12];
  undefined4 uStack_1e8;
  undefined1 *puStack_1e4;
  undefined ***pppuStack_1e0;
  undefined ***pppuStack_1dc;
  undefined4 uStack_1d8;
  char *pcStack_1d4;
  char *pcStack_1d0;
  undefined1 local_194 [4];
  uint uStack_190;
  undefined1 *puStack_188;
  undefined **local_184;
  undefined4 local_180;
  undefined1 uStack_17c;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined1 uStack_160;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined1 uStack_144;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined **ppuStack_128;
  undefined4 uStack_124;
  undefined1 auStack_120 [28];
  undefined1 auStack_104 [148];
  undefined **appuStack_70 [21];
  uint uStack_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b53fd2;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  *(undefined1 *)(in_ECX + 0x28) = 0;
  pcStack_1d0 = (char *)0xa7b565;
  BVar1 = QueryPerformanceCounter((LARGE_INTEGER *)(in_ECX + 8));
  if (BVar1 != 0) {
    *(undefined8 *)(in_ECX + 0x20) = 0;
    ExceptionList = local_14;
    return;
  }
  pcStack_1d0 = "highprefwinclock.cpp";
  local_180 = 0xf;
  local_184 = (undefined **)0x0;
  local_194[0] = 0;
  pcStack_1d4 = "h\x05\x01";
  FUN_00409350();
  pcStack_1d4 = local_194;
  pcStack_1d0 = (char *)0x30;
  local_c = 0;
  uStack_1d8 = 0xa7b5ad;
  uVar2 = FUN_004015b0();
  pcStack_1d0 = (char *)0x1d;
  pcStack_1d4 = "Failed to get value of clock!";
  local_c = CONCAT31(local_c._1_3_,1);
  pppuStack_1dc = (undefined ***)0xa7b5c8;
  uStack_1d8 = uVar2;
  FUN_00987d50();
  pppuStack_1e0 = (undefined ***)0xa7b5ce;
  pppuStack_1dc = (undefined ***)uVar2;
  FUN_00401280();
  pppuStack_1dc = appuStack_70;
  uStack_1c = uStack_1c & 0xffffff00;
  pppuStack_1e0 = (undefined ***)0xa7b5e5;
  FUN_00987ac0();
  pppuStack_1dc = appuStack_70;
  appuStack_70[0] = std::ios_base::vftable;
  pppuStack_1e0 = (undefined ***)0xa7b5fd;
  FUN_00aad52d();
  uStack_1c = 0xffffffff;
  if (uStack_190 < 0x10) {
    pppuStack_1dc = (undefined ***)0x14;
    pppuStack_1e0 = (undefined ***)0xe43a14;
    uStack_130 = 0xf;
    uStack_134 = 0;
    uStack_144 = 0;
    puStack_1e4 = (undefined1 *)0xa7b64b;
    FUN_00409350();
    uStack_1c = 2;
    pppuStack_1dc = (undefined ***)0x1d;
    pppuStack_1e0 = (undefined ***)0xe43a68;
    puStack_1e4 = (undefined1 *)0xa7b672;
    FUN_00409350();
    puStack_188 = auStack_1f4;
    uStack_1c._0_1_ = 3;
    pppuStack_1e0 = (undefined ***)0xf;
    puStack_1e4 = (undefined1 *)0x0;
    auStack_1f4[0] = 0;
    FUN_00408ed0(&stack0xfffffe38,0,0xffffffff);
    FUN_009e7a90(&ppuStack_128,0x31);
    ppuStack_128 = &PTR_FUN_00e37db4;
    uStack_1c._0_1_ = 4;
    pppuStack_1dc = (undefined ***)0xffffffff;
    pppuStack_1e0 = (undefined ***)0x0;
    puStack_1e4 = auStack_120;
    local_184 = &PTR_FUN_00e37db4;
    local_180 = uStack_124;
    uStack_168 = 0xf;
    uStack_16c = 0;
    uStack_17c = 0;
    uStack_1e8 = 0xa7b713;
    FUN_00408ed0();
    pppuStack_1dc = (undefined ***)0xffffffff;
    pppuStack_1e0 = (undefined ***)0x0;
    puStack_1e4 = auStack_104;
    uStack_1c._0_1_ = 5;
    uStack_14c = 0xf;
    uStack_150 = 0;
    uStack_160 = 0;
    uStack_1e8 = 0xa7b747;
    FUN_00408ed0();
    pppuStack_1dc = (undefined ***)&DAT_00e6fd50;
    pppuStack_1e0 = &local_184;
    uStack_1c = CONCAT31(uStack_1c._1_3_,4);
    local_184 = &PTR_FUN_00e37db4;
                    /* WARNING: Subroutine does not return */
    puStack_1e4 = (undefined1 *)0xa7b766;
    __CxxThrowException_8();
  }
                    /* WARNING: Subroutine does not return */
  pppuStack_1e0 = (undefined ***)&UNK_00a7b620;
  FUN_00aae91b();
}

