// FUN_0053f5c0 @ 0053f5c0 body=[[0053f5c0, 0053f65d] [0053f660, 0053f739] [0053f740, 0053f748] [0053f755, 0053f78d] [0053f797, 0053f7a9]]


/* WARNING: Removing unreachable block (ram,0x0053f785) */

void FUN_0053f5c0(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  void **ppvVar4;
  char cVar5;
  int iVar6;
  int iVar7;
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
  undefined **local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b46498;
  local_10 = ExceptionList;
  cVar5 = *(char *)(*(int *)(param_2 + 0x88) + 0x3a);
  if ((*(char *)(*(int *)(param_2 + 0x88) + 0x39) == '\0') && (cVar5 == '\0')) {
    *(undefined4 *)(param_2 + 0x98) = 0xffffffff;
    return;
  }
  local_1c = *(undefined4 *)(param_2 + 0x48);
  local_20 = 0x7fffffff;
  local_8 = 0;
  iVar7 = *(int *)(param_1 + 0x1574) - *(int *)(param_1 + 0x1570) >> 2;
  local_24 = -1;
  local_18 = 0;
  ExceptionList = &local_10;
  ppvVar4 = &local_10;
  local_11 = cVar5;
  if (0 < iVar7) {
    do {
      iVar6 = local_18;
      piVar1 = (int *)(*(int *)(param_1 + 0x1570) + local_18 * 4);
      if (*(char *)(*piVar1 + 0x20) == cVar5) {
        local_3c = 0;
        local_38 = 0;
        local_34 = 0;
        local_30 = 0;
        local_2c = 0;
        local_8 = CONCAT31(local_8._1_3_,1);
        local_28 = CSafePathFind::vftable;
        uVar2 = *(undefined4 *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(*piVar1 + 8) * 4);
        if (cVar5 == '\0') {
          cVar5 = FUN_005b8cc0(&local_28,param_1 + 0x1c,uVar2,&local_3c,1);
        }
        else {
          cVar5 = FUN_005b91b0(local_1c,uVar2,&local_3c);
        }
        if ((cVar5 != '\0') && (local_34 < local_20)) {
          local_50 = 0;
          local_4c = 0;
          local_48 = 0;
          local_44 = 0;
          local_20 = local_34;
          iVar3 = local_3c;
          local_24 = iVar6;
          while (iVar3 != 0) {
            iVar6 = *(int *)(iVar3 + 8);
            FUN_0057aab0(iVar3);
            iVar3 = iVar6;
          }
          local_8._1_3_ = (undefined3)(local_8 >> 8);
          local_8 = CONCAT31(local_8._1_3_,2);
          local_40 = local_2c;
          FUN_004e94a0(&local_50);
          FUN_00849e90();
          iVar6 = local_18;
        }
        local_8 = local_8 & 0xffffff00;
        cVar5 = local_11;
        if (local_3c != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_3c);
        }
      }
      local_18 = iVar6 + 1;
      ppvVar4 = ExceptionList;
    } while (local_18 < iVar7);
  }
  ExceptionList = ppvVar4;
  *(int *)(param_2 + 0x98) = local_24;
  if (local_24 != -1) {
    FUN_004f68e0(param_2);
  }
  ExceptionList = local_10;
  return;
}

