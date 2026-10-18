// FUN_0053f7b0 @ 0053f7b0 body=[[0053f7b0, 0053f8bc] [0053f8c0, 0053f93c] [0053f959, 0053f972]]


/* WARNING: Removing unreachable block (ram,0x0053f934) */

void FUN_0053f7b0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_44;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  int local_34;
  undefined1 local_30;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  undefined **local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b46498;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cVar3 = FUN_004467f0();
  if ((cVar3 == '\0') || (*(char *)(param_2 + 0x44) != '\0')) {
    *(undefined4 *)(param_2 + 0x5c) = 0xffffffff;
  }
  else {
    local_24 = *(undefined4 *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_2 + 8) * 4);
    local_28 = DAT_012588e8;
    local_18 = 0x7fffffff;
    local_8 = 0;
    iVar5 = *(int *)(param_1 + 0x1574) - *(int *)(param_1 + 0x1570) >> 2;
    local_1c = -1;
    local_14 = 0;
    iVar4 = DAT_012588e8;
    if (0 < iVar5) {
      do {
        piVar1 = (int *)(*(int *)(param_1 + 0x1570) + local_14 * 4);
        if (*(char *)(*piVar1 + 0x20) == '\0') {
          local_3c = 0;
          local_38 = 0;
          local_34 = 0;
          local_30 = 0;
          local_2c = 0;
          local_8 = CONCAT31(local_8._1_3_,1);
          local_20 = CSafePathFind::vftable;
          cVar3 = FUN_005b8cc0(&local_20,param_1 + 0x1c,
                               *(undefined4 *)(*(int *)(iVar4 + 0xacc) + *(int *)(*piVar1 + 8) * 4),
                               &local_3c,1);
          if ((cVar3 != '\0') && (local_34 < local_18)) {
            local_50 = 0;
            local_4c = 0;
            local_48 = 0;
            local_44 = 0;
            local_18 = local_34;
            local_1c = local_14;
            iVar4 = local_3c;
            while (iVar4 != 0) {
              iVar2 = *(int *)(iVar4 + 8);
              FUN_0057aab0(iVar4);
              iVar4 = iVar2;
            }
            local_8._1_3_ = (undefined3)(local_8 >> 8);
            local_8 = CONCAT31(local_8._1_3_,2);
            local_40 = local_2c;
            FUN_004e94a0(&local_50);
            FUN_00849e90();
          }
          local_8 = local_8 & 0xffffff00;
          FUN_00849e90();
          iVar4 = local_28;
        }
        local_14 = local_14 + 1;
      } while (local_14 < iVar5);
    }
    *(int *)(param_2 + 0x5c) = local_1c;
    if (local_1c != -1) {
      FUN_004f6990(param_2);
    }
  }
  ExceptionList = local_10;
  return;
}

