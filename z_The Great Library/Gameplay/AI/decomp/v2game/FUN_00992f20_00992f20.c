// FUN_00992f20 @ 00992f20 body=[[00992f20, 00993024] [00993028, 009930ca]]


undefined4 FUN_00992f20(undefined4 param_1,int param_2)

{
  char cVar1;
  int in_ECX;
  char *pcVar2;
  undefined8 uVar3;
  undefined1 local_104 [8];
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined1 *local_f4;
  undefined ***local_f0;
  undefined *puStack_ec;
  uint local_d8 [4];
  undefined4 local_c8;
  uint local_c4;
  undefined1 *local_b8;
  undefined **local_b4;
  undefined4 local_b0;
  undefined1 local_ac;
  undefined4 local_9c;
  undefined4 local_98;
  undefined1 local_90;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_74;
  undefined4 local_64;
  undefined4 local_60;
  undefined **local_58;
  undefined4 local_54;
  undefined1 local_50 [28];
  undefined1 local_34 [32];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b4a326;
  local_14 = ExceptionList;
  uStack_f8 = *(undefined4 *)(in_ECX + 0x30);
  puStack_ec = (undefined *)param_2;
  local_f0 = (undefined ***)0x1;
  local_f4 = (undefined1 *)param_1;
  uStack_fc = 0x992f57;
  ExceptionList = &local_14;
  uVar3 = PHYSFS_read();
  if (((int)uVar3 == param_2) && ((int)((ulonglong)uVar3 >> 0x20) == param_2 >> 0x1f)) {
    ExceptionList = local_14;
    return 1;
  }
  puStack_ec = (undefined *)0x15;
  local_f0 = (undefined ***)0xe37ccc;
  local_60 = 0xf;
  local_64 = 0;
  local_74 = 0;
  local_f4 = (undefined1 *)0x992f96;
  FUN_00409350();
  local_c = 0;
  puStack_ec = (undefined *)0x992fa2;
  local_f0 = (undefined ***)PHYSFS_getLastError();
  local_c4 = 0xf;
  local_c8 = 0;
  local_d8[0] = local_d8[0] & 0xffffff00;
  pcVar2 = (char *)local_f0;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  puStack_ec = (undefined *)((int)pcVar2 - (int)((int)local_f0 + 1));
  local_f4 = (undefined1 *)0x992fc9;
  FUN_00409350();
  local_b8 = local_104;
  local_c._0_1_ = 1;
  local_f0 = (undefined ***)0xf;
  local_f4 = (undefined1 *)0x0;
  local_104[0] = 0;
  FUN_00408ed0(local_d8,0,0xffffffff);
  FUN_009e7a90(&local_58,0x296);
  local_58 = &PTR_FUN_00e37db4;
  if (0xf < local_c4) {
    puStack_ec = (undefined *)local_d8[0];
                    /* WARNING: Subroutine does not return */
    local_f0 = (undefined ***)&UNK_00993025;
    FUN_00aae91b();
  }
  local_c4 = 0xf;
  local_c8 = 0;
  local_d8[0] = local_d8[0] & 0xffffff00;
  local_c._0_1_ = 2;
  puStack_ec = (undefined *)0xffffffff;
  local_f0 = (undefined ***)0x0;
  local_f4 = local_50;
  local_b4 = &PTR_FUN_00e37db4;
  local_b0 = local_54;
  local_98 = 0xf;
  local_9c = 0;
  local_ac = 0;
  uStack_f8 = 0x99306f;
  FUN_00408ed0();
  puStack_ec = (undefined *)0xffffffff;
  local_f0 = (undefined ***)0x0;
  local_f4 = local_34;
  local_c._0_1_ = 3;
  local_7c = 0xf;
  local_80 = 0;
  local_90 = 0;
  uStack_f8 = 0x993097;
  FUN_00408ed0();
  puStack_ec = &DAT_00e6fc00;
  local_f0 = &local_b4;
  local_c = CONCAT31(local_c._1_3_,2);
  local_b4 = &PTR_FUN_00e37db4;
                    /* WARNING: Subroutine does not return */
  local_f4 = (undefined1 *)0x9930b2;
  __CxxThrowException_8();
}

