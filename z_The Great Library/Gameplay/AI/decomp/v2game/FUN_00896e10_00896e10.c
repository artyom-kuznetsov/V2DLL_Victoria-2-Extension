// FUN_00896e10 @ 00896e10 body=[[00896e10, 00896e7f] [00896e83, 00896fe8] [00896fec, 00897019] [0089701d, 00897043] [00897047, 00897067] [0089706b, 00897086] [0089708a, 008970c6] [008970ca, 008970fd] [00897103, 00897119] [0089711d, 00897131]]


undefined4 FUN_00896e10(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  uint in_stack_00000020;
  undefined8 local_e8;
  uint local_d4 [4];
  undefined4 local_c4;
  uint local_c0;
  uint local_b8;
  undefined4 local_a8;
  uint local_a4;
  uint local_9c;
  undefined4 local_8c;
  uint local_88;
  uint local_80 [4];
  undefined4 local_70;
  uint local_6c;
  uint local_64;
  undefined4 local_54;
  uint local_50;
  undefined4 local_48;
  undefined1 local_44 [4];
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b68acf;
  local_10 = ExceptionList;
  local_48 = 0;
  local_8 = 1;
  local_e8 = 0x1100e2a374;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350();
  local_e8 = CONCAT44(local_30,local_44);
  local_8._0_1_ = 2;
  FUN_009a8ee0();
  local_8._0_1_ = 4;
  if (0xf < local_1c) {
    local_e8 = CONCAT44(local_30[0],&UNK_00896e80);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_e8 = 0x200df963c;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  local_50 = 0xf;
  local_54 = 0;
  local_64 = local_64 & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 5;
  iVar3 = *(int *)(in_ECX + 0x24);
  if (iVar3 < 0) {
LAB_00896ed5:
    local_e8 = 0x200df8510;
  }
  else {
    if ((iVar3 < 1) && (*(uint *)(in_ECX + 0x20) < 0x8001)) {
      if ((0 < iVar3) || ((-1 < iVar3 && (0x7fff < *(uint *)(in_ECX + 0x20))))) goto LAB_00896ee4;
      goto LAB_00896ed5;
    }
    local_e8 = 0x200df8518;
  }
  FUN_00409350();
LAB_00896ee4:
  uVar1 = *(uint *)(in_ECX + 0x20);
  iVar3 = *(int *)(in_ECX + 0x24);
  local_e8 = 0x300df8544;
  local_6c = 0xf;
  local_70 = 0;
  local_80[0] = local_80[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 6;
  local_e8 = 0x400dfb974;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350();
  local_14 = (undefined1 *)&local_e8;
  local_8._0_1_ = 7;
  local_e8 = __allmul(uVar1 - 0x8000,iVar3 - (uint)(uVar1 < 0x8000),0x320000,0);
  local_e8 = local_e8 >> 0xf;
  uVar2 = FUN_00988bb0(local_d4,1);
  local_8._0_1_ = 8;
  local_e8 = CONCAT44(uVar2,0x896f77);
  FUN_00988f20();
  local_8._0_1_ = 9;
  local_e8 = CONCAT44(local_80,0x896f8c);
  uVar2 = FUN_00988f20();
  local_8._0_1_ = 10;
  local_e8 = 0x4000896f9a;
  local_14 = (undefined1 *)FUN_00aae9af();
  local_8._0_1_ = 0xb;
  if (local_14 == (undefined1 *)0x0) {
    local_14 = (undefined1 *)0x0;
  }
  else {
    local_e8 = CONCAT44(uVar2,local_44);
    local_14 = (undefined1 *)FUN_009a9ce0();
  }
  local_8._0_1_ = 10;
  local_e8 = CONCAT44(&local_14,local_30);
  FUN_009e6810();
  if (0xf < local_a4) {
    local_e8 = CONCAT44(local_b8,&UNK_00896fe9);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_a4 = 0xf;
  local_a8 = 0;
  local_b8 = local_b8 & 0xffffff00;
  if (0xf < local_88) {
    local_e8 = CONCAT44(local_9c,&UNK_0089701a);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_88 = 0xf;
  local_8c = 0;
  local_9c = local_9c & 0xffffff00;
  if (0xf < local_c0) {
    local_e8 = CONCAT44(local_d4[0],&UNK_00897044);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_c0 = 0xf;
  local_c4 = 0;
  local_d4[0] = local_d4[0] & 0xffffff00;
  if (0xf < local_1c) {
    local_e8 = CONCAT44(local_30[0],&UNK_00897068);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 5;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  if (0xf < local_6c) {
    local_e8 = CONCAT44(local_80[0],&UNK_00897087);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_e8 = CONCAT44(0x89708f,(undefined4)local_e8);
  iVar3 = FUN_00475500();
  local_e8 = *(undefined8 *)(iVar3 + 0x74);
  FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c));
  local_48 = 1;
  if (0xf < local_50) {
    local_e8 = CONCAT44(local_64,&UNK_008970c7);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_50 = 0xf;
  local_54 = 0;
  local_64 = local_64 & 0xffffff00;
  local_8 = CONCAT31(local_8._1_3_,0xc);
  local_e8 = CONCAT44(0x8970e4,(undefined4)local_e8);
  FUN_009adb70();
  if (local_40 != 0) {
    local_e8 = CONCAT44(0x8970f5,(undefined4)local_e8);
    FUN_009e6a80();
    local_e8 = CONCAT44(local_40,&UNK_008970fe);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  if (0xf < in_stack_00000020) {
    local_e8 = CONCAT44(param_3,&UNK_0089711a);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

