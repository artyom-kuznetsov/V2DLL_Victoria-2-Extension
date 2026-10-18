// FUN_00a0f640 @ 00a0f640 body=[[00a0f640, 00a0f732] [00a0f736, 00a0f758] [00a0f75c, 00a0f775] [00a0f779, 00a0f78f] [00a0f793, 00a0f839] [00a0f83d, 00a0f865] [00a0f869, 00a0f8aa] [00a0f8ae, 00a0f90f] [00a0fa3f, 00a0fa4f]]


void FUN_00a0f640(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int in_ECX;
  undefined1 local_1cc [12];
  undefined4 uStack_1c0;
  uint local_d0;
  undefined4 local_c8 [5];
  uint local_b4;
  char local_ac [4];
  undefined4 local_a8;
  uint local_94;
  uint local_8c;
  undefined4 local_7c;
  uint local_78;
  uint local_70;
  undefined4 local_60;
  uint local_5c;
  uint local_54;
  undefined4 local_44;
  uint local_40;
  uint local_38;
  undefined1 local_34 [8];
  int local_2c;
  undefined4 local_28;
  uint local_24;
  undefined4 *local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5543b;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffe50;
  local_5c = 0xf;
  local_60 = 0;
  local_70 = local_70 & 0xffffff00;
  ExceptionList = &local_10;
  local_18 = in_ECX;
  FUN_00409350();
  local_40 = 0xf;
  local_44 = 0;
  local_54 = local_54 & 0xffffff00;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  uStack_1c0 = 0xa0f6ad;
  pcVar4 = __itoa(*(int *)(in_ECX + 0xdc),local_ac,10);
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00409350();
  local_8._0_1_ = 2;
  local_78 = 0xf;
  local_7c = 0;
  local_8c = local_8c & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 3;
  FUN_00988f20();
  local_8._0_1_ = 4;
  FUN_00988f20();
  piVar2 = DAT_01258b64;
  if (0xf < local_d0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_78 = 0xf;
  local_7c = 0;
  local_8c = local_8c & 0xffffff00;
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_40 = 0xf;
  local_44 = 0;
  local_54 = local_54 & 0xffffff00;
  if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_1c = (undefined4 *)local_1cc;
  local_8._0_1_ = 10;
  local_5c = 0xf;
  local_60 = 0;
  local_70 = local_70 & 0xffffff00;
  local_1cc[0] = 0;
  FUN_00408ed0(local_c8,0,0xffffffff);
  (**(code **)(*piVar2 + 0x10))(local_34);
  local_8._0_1_ = 0xb;
  local_1c = (undefined4 *)FUN_00aae9af(0x3c);
  if (local_1c == (undefined4 *)0x0) {
    local_1c = (undefined4 *)0x0;
  }
  else {
    *local_1c = 0;
    local_1c[1] = 0;
    local_1c[2] = 0;
    local_1c[4] = 0;
    local_1c[5] = 0;
    local_1c[6] = 0;
    local_1c[0xd] = 0xf;
    local_1c[0xc] = 0;
    *(undefined1 *)(local_1c + 8) = 0;
  }
  uVar5 = FUN_00a714a0(1);
  local_8 = CONCAT31(local_8._1_3_,0xc);
  FUN_009d7230(uVar5);
  iVar3 = local_18;
  if (0xf < local_94) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_a8);
  }
  *(undefined4 **)(local_18 + 0x8c) = local_1c;
  if (local_2c != 0) {
    FUN_00463b30(local_28,local_18);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c);
  }
  local_8 = 9;
  local_24 = 0xf;
  local_28 = 0;
  local_38 = local_38 & 0xffffff00;
  FUN_00408ed0(local_18 + 8,0,0xffffffff);
  local_8._0_1_ = 0x12;
  local_18 = FUN_009c1bd0(&local_38);
  local_8._0_1_ = 9;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38);
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38 = local_38 & 0xffffff00;
  local_1c = (undefined4 *)FUN_00aae9af(0xdc);
  local_8._0_1_ = 0x13;
  if (local_1c == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_00a0fc40(local_1c,*(undefined4 *)(iVar3 + 0x24),*(undefined2 *)(iVar3 + 0x28));
  }
  local_8 = CONCAT31(local_8._1_3_,9);
  (**(code **)(**(int **)(local_18 + 0x38) + 0x18))(uVar5);
  if (0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_c8[0]);
  }
  ExceptionList = local_10;
  return;
}

