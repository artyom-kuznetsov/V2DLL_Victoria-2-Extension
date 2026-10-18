// FUN_008eab40 @ 008eab40 body=[[008eab40, 008eac02] [008eac06, 008ead03] [008ead07, 008ead30] [008ead34, 008ead5a] [008ead5e, 008ead94] [008ead98, 008eadb3] [008eadb7, 008eadd1] [008eadd5, 008eadef] [008eadf3, 008eaeea] [008eaeee, 008eaf14] [008eaf18, 008eaf41] [008eaf45, 008eaf7e] [008eaf82, 008eaf9d] [008eafa1, 008eafbb] [008eafbf, 008eafd9] [008eafdd, 008eaffd] [008eb001, 008eb015]]


undefined4 FUN_008eab40(undefined4 param_1,int param_2,char param_3)

{
  int iVar1;
  int in_ECX;
  undefined8 local_108;
  undefined4 local_f4 [5];
  uint local_e0;
  uint local_d8;
  undefined4 local_c8;
  uint local_c4;
  uint local_bc;
  undefined4 local_ac;
  uint local_a8;
  undefined4 local_a0;
  undefined1 *local_9c;
  uint local_98;
  undefined4 local_88;
  uint local_84;
  uint local_7c [4];
  undefined4 local_6c;
  uint local_68;
  uint local_60 [4];
  undefined4 local_50;
  uint local_4c;
  uint local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined4 local_28;
  undefined1 local_24 [4];
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b858a0;
  local_10 = ExceptionList;
  local_9c = (undefined1 *)&local_108;
  local_28 = 0;
  local_108 = CONCAT44(1,*(undefined4 *)(in_ECX + 0x1c));
  ExceptionList = &local_10;
  FUN_00988a50();
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  if (*(char *)(in_ECX + 0x18) == '\0') {
    if (*(char *)(in_ECX + 0x19) == '\0') goto LAB_008eac06;
    local_a0 = *(undefined4 *)(param_2 + 0x2c);
    local_9c = *(undefined1 **)(param_2 + 0x30);
    local_108 = CONCAT44(0x8eabda,(undefined4)local_108);
    FUN_0055dd40();
    local_8._0_1_ = 3;
  }
  else {
    local_108 = CONCAT44(0x8eab9e,(undefined4)local_108);
    FUN_008a8dc0();
    local_108 = CONCAT44(0x8eaba9,(undefined4)local_108);
    FUN_0055dd40();
    local_8._0_1_ = 2;
  }
  local_108 = 0xffffffff00000000;
  FUN_00408ed0();
  local_8._0_1_ = 1;
  if (0xf < local_84) {
    local_108 = CONCAT44(local_98,&UNK_008eac03);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
LAB_008eac06:
  local_8._0_1_ = 1;
  local_108 = 0x300dfc7b4;
  if (param_3 == '\0') {
    local_68 = 0xf;
    local_6c = 0;
    local_7c[0] = local_7c[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0xc;
    local_108 = 0x200df963c;
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = local_44[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0xd;
    local_108 = 0x1f00e2e864;
    local_4c = 0xf;
    local_50 = 0;
    local_60[0] = local_60[0] & 0xffffff00;
    FUN_00409350();
    local_108 = CONCAT44(local_60,local_24);
    local_8._0_1_ = 0xe;
    FUN_009a8ee0();
    local_8._0_1_ = 0xf;
    local_108 = CONCAT44(0x8eae6a,(undefined4)local_108);
    iVar1 = FUN_00475500();
    local_108 = *(undefined8 *)(iVar1 + 0x74);
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c));
    local_8._0_1_ = 0x10;
    local_108 = CONCAT44(local_44,0x8eaea4);
    FUN_00988f20();
    local_8._0_1_ = 0x11;
    local_108 = CONCAT44(local_f4,0x8eaebc);
    FUN_00988f20();
    local_8._0_1_ = 0x12;
    local_108 = CONCAT44(local_7c,0x8eaece);
    FUN_00988f20();
    local_28 = 1;
    if (0xf < local_84) {
      local_108 = CONCAT44(local_98,&UNK_008eaeeb);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_84 = 0xf;
    local_88 = 0;
    local_98 = local_98 & 0xffffff00;
    if (0xf < local_c4) {
      local_108 = CONCAT44(local_d8,&UNK_008eaf15);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c4 = 0xf;
    local_c8 = 0;
    local_d8 = local_d8 & 0xffffff00;
    if (0xf < local_a8) {
      local_108 = CONCAT44(local_bc,&UNK_008eaf42);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_a8 = 0xf;
    local_ac = 0;
    local_bc = local_bc & 0xffffff00;
    local_8 = CONCAT31(local_8._1_3_,0x13);
    local_108 = CONCAT44(0x8eaf67,(undefined4)local_108);
    FUN_009adb70();
    if (local_20 != 0) {
      local_108 = CONCAT44(0x8eaf76,(undefined4)local_108);
      FUN_009e6a80();
      local_108 = CONCAT44(local_20,&UNK_008eaf7f);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    if (0xf < local_4c) {
      local_108 = CONCAT44(local_60[0],&UNK_008eaf9e);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_4c = 0xf;
    local_50 = 0;
    local_60[0] = local_60[0] & 0xffffff00;
    if (0xf < local_30) {
      local_108 = CONCAT44(local_44[0],&UNK_008eafbc);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = local_44[0] & 0xffffff00;
    if (0xf < local_68) {
      local_108 = CONCAT44(local_7c[0],&UNK_008eafda);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_7c[0] = local_7c[0] & 0xffffff00;
  }
  else {
    local_4c = 0xf;
    local_50 = 0;
    local_60[0] = local_60[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 4;
    local_108 = 0x200df963c;
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = local_44[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 5;
    local_108 = 0x1f00e2e844;
    local_68 = 0xf;
    local_6c = 0;
    local_7c[0] = local_7c[0] & 0xffffff00;
    FUN_00409350();
    local_108 = CONCAT44(local_7c,local_24);
    local_8._0_1_ = 6;
    FUN_009a8ee0();
    local_8._0_1_ = 7;
    local_108 = CONCAT44(0x8eac80,(undefined4)local_108);
    iVar1 = FUN_00475500();
    local_108 = *(undefined8 *)(iVar1 + 0x74);
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c));
    local_8._0_1_ = 8;
    local_108 = CONCAT44(local_44,0x8eacba);
    FUN_00988f20();
    local_8._0_1_ = 9;
    local_108 = CONCAT44(local_f4,0x8eacd2);
    FUN_00988f20();
    local_8._0_1_ = 10;
    local_108 = CONCAT44(local_60,0x8eace4);
    FUN_00988f20();
    local_28 = 1;
    if (0xf < local_a8) {
      local_108 = CONCAT44(local_bc,&UNK_008ead04);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_a8 = 0xf;
    local_ac = 0;
    local_bc = local_bc & 0xffffff00;
    if (0xf < local_c4) {
      local_108 = CONCAT44(local_d8,&UNK_008ead31);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c4 = 0xf;
    local_c8 = 0;
    local_d8 = local_d8 & 0xffffff00;
    if (0xf < local_84) {
      local_108 = CONCAT44(local_98,&UNK_008ead5b);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_84 = 0xf;
    local_88 = 0;
    local_98 = local_98 & 0xffffff00;
    local_8 = CONCAT31(local_8._1_3_,0xb);
    local_108 = CONCAT44(0x8ead7d,(undefined4)local_108);
    FUN_009adb70();
    if (local_20 != 0) {
      local_108 = CONCAT44(0x8ead8c,(undefined4)local_108);
      FUN_009e6a80();
      local_108 = CONCAT44(local_20,&UNK_008ead95);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    if (0xf < local_68) {
      local_108 = CONCAT44(local_7c[0],&UNK_008eadb4);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_68 = 0xf;
    local_6c = 0;
    local_7c[0] = local_7c[0] & 0xffffff00;
    if (0xf < local_30) {
      local_108 = CONCAT44(local_44[0],&UNK_008eadd2);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = local_44[0] & 0xffffff00;
    if (0xf < local_4c) {
      local_108 = CONCAT44(local_60[0],&UNK_008eadf0);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_60[0] = local_60[0] & 0xffffff00;
  }
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_30 = 0xf;
  local_34 = 0;
  local_4c = 0xf;
  local_50 = 0;
  local_68 = 0xf;
  local_6c = 0;
  if (0xf < local_e0) {
    local_108 = CONCAT44(local_f4[0],&UNK_008eaffe);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

