// FUN_00a11670 @ 00a11670 body=[[00a11670, 00a11765] [00a11769, 00a11788] [00a1178c, 00a117a2] [00a117a6, 00a117bf] [00a117c3, 00a1186d] [00a11871, 00a118b7] [00a118bb, 00a11929] [00a1192d, 00a11945] [00a11a69, 00a11a79]]


void FUN_00a11670(void)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 uVar4;
  int in_ECX;
  undefined1 local_1cc [12];
  undefined4 uStack_1c0;
  undefined1 local_e4 [8];
  int local_dc;
  undefined4 local_d8;
  uint local_cc;
  undefined4 local_bc;
  uint local_b8;
  undefined4 local_b0 [5];
  uint local_9c;
  uint local_94;
  undefined4 local_84;
  uint local_80;
  uint local_78;
  undefined4 local_68;
  uint local_64;
  uint local_5c;
  undefined4 local_4c;
  uint local_48;
  int local_40;
  char local_3c [4];
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  int local_1c;
  undefined4 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b55095;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffe50;
  local_80 = 0xf;
  local_84 = 0;
  local_94 = local_94 & 0xffffff00;
  ExceptionList = &local_10;
  local_1c = in_ECX;
  FUN_00409350();
  local_48 = 0xf;
  local_4c = 0;
  local_5c = local_5c & 0xffffff00;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  uStack_1c0 = 0xa116e0;
  pcVar3 = __itoa(*(int *)(in_ECX + 0xdc),local_3c,10);
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00409350();
  local_8._0_1_ = 2;
  local_64 = 0xf;
  local_68 = 0;
  local_78 = local_78 & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 3;
  FUN_00988f20();
  local_8._0_1_ = 4;
  FUN_00988f20();
  piVar2 = DAT_01258b64;
  if (0xf < local_b8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_b8 = 0xf;
  local_bc = 0;
  local_cc = local_cc & 0xffffff00;
  if (0xf < local_64) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_64 = 0xf;
  local_68 = 0;
  local_78 = local_78 & 0xffffff00;
  if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_48 = 0xf;
  local_4c = 0;
  local_5c = local_5c & 0xffffff00;
  if (0xf < local_80) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_18 = (undefined4 *)local_1cc;
  local_8._0_1_ = 10;
  local_80 = 0xf;
  local_84 = 0;
  local_94 = local_94 & 0xffffff00;
  local_1cc[0] = 0;
  FUN_00408ed0(local_b0,0,0xffffffff);
  (**(code **)(*piVar2 + 0x10))(local_e4);
  local_8._0_1_ = 0xb;
  local_18 = (undefined4 *)FUN_00aae9af(0x3c);
  if (local_18 == (undefined4 *)0x0) {
    local_18 = (undefined4 *)0x0;
  }
  else {
    *local_18 = 0;
    local_18[1] = 0;
    local_18[2] = 0;
    local_18[4] = 0;
    local_18[5] = 0;
    local_18[6] = 0;
    local_18[0xd] = 0xf;
    local_18[0xc] = 0;
    *(undefined1 *)(local_18 + 8) = 0;
  }
  uVar4 = FUN_00a714a0(1);
  local_8._0_1_ = 0xc;
  FUN_009d7230(uVar4);
  local_8._0_1_ = 0xb;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  *(undefined4 **)(local_1c + 0x8c) = local_18;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00408ed0(local_1c + 8,0,0xffffffff);
  local_8._0_1_ = 0xd;
  local_18 = (undefined4 *)FUN_009c1bd0(local_38);
  local_8._0_1_ = 0xb;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  local_40 = FUN_00aae9af(0xdc);
  local_8._0_1_ = 0xe;
  if (local_40 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00a11c80(local_40,*(undefined4 *)(local_1c + 0x24),*(undefined2 *)(local_1c + 0x28))
    ;
  }
  local_8 = CONCAT31(local_8._1_3_,0xb);
  (**(code **)(**(int **)((int)local_18 + 0x38) + 0x18))(uVar4);
  if (local_dc != 0) {
    FUN_00463b30(local_d8,local_40);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_dc);
  }
  if (0xf < local_9c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_b0[0]);
  }
  ExceptionList = local_10;
  return;
}

