// FUN_006f3c70 @ 006f3c70 body=[[006f3c70, 006f3d2c] [006f3d30, 006f3d9e] [006f3da2, 006f3dbf] [006f3dc3, 006f3ddd] [006f3de1, 006f3e02] [006f3e06, 006f3e6d]]


void FUN_006f3c70(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 uVar5;
  char *pcVar6;
  char local_b4 [32];
  uint local_94;
  undefined4 local_84;
  uint local_80;
  uint local_78;
  undefined4 local_68;
  uint local_64;
  uint local_5c [4];
  undefined4 local_4c;
  uint local_48;
  uint local_40 [4];
  undefined4 local_30;
  uint local_2c;
  int *local_24;
  int *local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4464b;
  local_10 = ExceptionList;
  local_24 = (int *)(DAT_012588e8 + 0xbe0);
  local_1c = *(int *)(DAT_012588e8 + 0xbe4) - *(int *)(DAT_012588e8 + 0xbe0) >> 2;
  local_14 = 0;
  ExceptionList = &local_10;
  if (0 < local_1c) {
    do {
      iVar2 = local_14;
      local_18 = *(int *)(*local_24 + local_14 * 4);
      local_48 = 0xf;
      local_4c = 0;
      local_5c[0] = local_5c[0] & 0xffffff00;
      FUN_00409350("investment_browser",0x12);
      local_8 = 0;
      piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x4c) + 0x6c))(local_5c);
      local_2c = 0xf;
      local_30 = 0;
      local_40[0] = local_40[0] & 0xffffff00;
      local_8._0_1_ = 1;
      pcVar4 = __itoa(iVar2,local_b4,10);
      pcVar6 = pcVar4;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      FUN_00409350(pcVar4,(int)pcVar6 - (int)(pcVar4 + 1));
      local_8._0_1_ = 2;
      local_64 = 0xf;
      local_68 = 0;
      local_78 = local_78 & 0xffffff00;
      FUN_00409350("sort_by_gpflag",0xe);
      local_8._0_1_ = 3;
      uVar5 = FUN_00988f20(local_40);
      local_8 = CONCAT31(local_8._1_3_,4);
      piVar3 = (int *)(**(code **)(*piVar3 + 0x44))(uVar5);
      if (0xf < local_80) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_94);
      }
      local_80 = 0xf;
      local_84 = 0;
      local_94 = local_94 & 0xffffff00;
      if (0xf < local_64) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_78);
      }
      local_64 = 0xf;
      local_68 = 0;
      local_78 = local_78 & 0xffffff00;
      if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_40[0]);
      }
      local_8 = 0xffffffff;
      local_2c = 0xf;
      local_30 = 0;
      local_40[0] = local_40[0] & 0xffffff00;
      if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_5c[0]);
      }
      local_48 = 0xf;
      local_4c = 0;
      local_5c[0] = local_5c[0] & 0xffffff00;
      local_20 = (int *)(**(code **)(*piVar3 + 0xec))();
      iVar2 = *local_20;
      uVar5 = FUN_0052fc10();
      (**(code **)(iVar2 + 0x150))(uVar5);
      (**(code **)(*piVar3 + 0xd4))(*(undefined4 *)(local_18 + 0x20));
      local_14 = local_14 + 1;
    } while (local_14 < local_1c);
  }
  ExceptionList = local_10;
  return;
}

