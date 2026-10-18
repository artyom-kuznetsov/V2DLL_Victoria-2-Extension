// FUN_005456e0 @ 005456e0 body=[[005456e0, 005457dc] [005457e0, 005457e8] [005457f2, 0054585b] [00545865, 00545928] [00545932, 00545948] [00545952, 00545978] [00545982, 00545996]]


/* WARNING: Removing unreachable block (ram,0x005458bc) */
/* WARNING: Removing unreachable block (ram,0x005458c0) */
/* WARNING: Removing unreachable block (ram,0x005458e9) */
/* WARNING: Removing unreachable block (ram,0x005458d7) */
/* WARNING: Removing unreachable block (ram,0x005458eb) */
/* WARNING: Removing unreachable block (ram,0x00545905) */
/* WARNING: Removing unreachable block (ram,0x005458fd) */
/* WARNING: Removing unreachable block (ram,0x00545908) */
/* WARNING: Removing unreachable block (ram,0x0054596e) */
/* WARNING: Removing unreachable block (ram,0x0054588b) */
/* WARNING: Removing unreachable block (ram,0x005458a0) */
/* WARNING: Removing unreachable block (ram,0x0054590c) */
/* WARNING: Removing unreachable block (ram,0x00545920) */
/* WARNING: Removing unreachable block (ram,0x00545890) */
/* WARNING: Removing unreachable block (ram,0x00545932) */
/* WARNING: Removing unreachable block (ram,0x00545952) */
/* WARNING: Removing unreachable block (ram,0x00545939) */

undefined4 FUN_005456e0(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int local_40 [3];
  undefined1 local_34;
  undefined4 local_30;
  undefined **local_2c;
  undefined4 local_28;
  undefined1 local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b46448;
  local_10 = ExceptionList;
  local_1c = DAT_012588e8;
  uStack_7 = 0;
  local_24 = DAT_012586db;
  iVar3 = *(int *)(param_3 + 8);
  local_11 = 0;
  local_18 = 0x7fffffff;
  local_2c = CRailroadPathFind::vftable;
  local_28 = 0;
  local_20 = 0;
  if (0 < (int)(*(int *)(param_3 + 0xc) - iVar3 & 0xfffffffcU)) {
    ExceptionList = &local_10;
    do {
      local_40[0] = 0;
      local_40[1] = 0;
      local_40[2] = 0;
      local_34 = 0;
      local_30 = 0;
      _local_8 = CONCAT31(uStack_7,1);
      uVar1 = *(undefined4 *)(*(int *)(local_1c + 0xacc) + *(int *)(iVar3 + local_20 * 4) * 4);
      cVar2 = FUN_005b8cc0(&local_2c,param_1 + 0x1c,uVar1,local_40,0);
      if ((cVar2 != '\0') && (local_40[2] < local_18)) {
        FUN_004e94a0(local_40);
        local_18 = local_40[2];
        local_11 = 1;
      }
      if (local_40[0] != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_40[0]);
      }
      local_40[0] = 0;
      local_40[1] = 0;
      local_40[2] = 0;
      cVar2 = FUN_005b8cc0(&local_2c,param_1 + 0x1c,uVar1,local_40,0);
      if ((cVar2 != '\0') && (local_40[2] < local_18)) {
        FUN_004e94a0(local_40);
        local_18 = local_40[2];
        local_11 = 0;
      }
      local_8 = 0;
      if (local_40[0] != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_40[0]);
      }
      iVar3 = *(int *)(param_3 + 8);
      local_20 = local_20 + 1;
    } while (local_20 < *(int *)(param_3 + 0xc) - iVar3 >> 2);
  }
  ExceptionList = local_10;
  return 0;
}

