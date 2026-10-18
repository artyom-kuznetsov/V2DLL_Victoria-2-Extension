// FUN_006eb460 @ 006eb460 body=[[006eb460, 006eb667] [006eb66b, 006eb68f]]


undefined4 * FUN_006eb460(undefined4 *param_1,undefined4 param_2,int param_3,char param_4)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  short *psVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  char local_60 [32];
  uint local_40 [4];
  undefined4 local_30;
  uint local_2c;
  undefined1 local_24 [4];
  char *local_20;
  int *local_1c;
  uint local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar2 = DAT_01258a80;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b8ac8f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar3 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x3c))();
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  DAT_013f08e0 = DAT_013f08e0 + 1;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = &PTR_FUN_00e39158;
  local_8 = 3;
  *param_1 = &PTR_FUN_00e392f0;
  param_1[7] = &PTR_FUN_00e39320;
  *(undefined1 *)(param_1 + 9) = 0;
  uVar3 = (**(code **)(*piVar2 + 0x2c))(param_3,uVar3);
  param_1[8] = uVar3;
  *param_1 = CGoodsCategoryItem::vftable;
  param_1[7] = CGoodsCategoryItem::vftable;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  local_8._1_3_ = 0;
  iVar6 = DAT_012587f0 + 0xa8;
  *(char *)(param_1 + 0x12) = param_4;
  param_1[0x13] = iVar6;
  if (param_4 == '\0') {
    param_3 = 0;
    local_18 = (uint)(ushort)local_18;
    do {
      local_8._0_1_ = 6;
      iVar6 = FUN_00aae9af(0x88);
      local_8._0_1_ = 7;
      if (iVar6 == 0) {
        _param_4 = 0;
      }
      else {
        _param_4 = FUN_006e7bc0(iVar6,param_2);
      }
      local_8 = CONCAT31(local_8._1_3_,6);
      local_14 = _param_4;
      psVar4 = (short *)(**(code **)(*(int *)(_param_4 + 0x1c) + 0x14))(local_24);
      local_20 = (char *)(*psVar4 * param_3);
      piVar2 = (int *)param_1[0xb];
      if ((&local_14 < piVar2) && ((int *)param_1[10] <= &local_14)) {
        local_1c = (int *)((int)&local_14 - (int)param_1[10] >> 2);
        if (piVar2 == (int *)param_1[0xc]) {
          FUN_00a513f0();
        }
        if ((undefined4 *)param_1[0xb] != (undefined4 *)0x0) {
          *(undefined4 *)param_1[0xb] = *(undefined4 *)(param_1[10] + (int)local_1c * 4);
        }
      }
      else {
        if (piVar2 == (int *)param_1[0xc]) {
          FUN_00a513f0();
        }
        if ((int *)param_1[0xb] != (int *)0x0) {
          *(int *)param_1[0xb] = _param_4;
        }
      }
      param_1[0xb] = param_1[0xb] + 4;
      local_18 = CONCAT22(local_18._2_2_,local_20._0_2_);
      (**(code **)(**(int **)(_param_4 + 0x20) + 0x18))(local_18);
      local_1c = (int *)param_1[8];
      local_2c = 0xf;
      local_30 = 0;
      local_40[0] = local_40[0] & 0xffffff00;
      local_8._0_1_ = 8;
      pcVar5 = __itoa(param_3,local_60,10);
      local_20 = pcVar5 + 1;
      pcVar7 = pcVar5;
      do {
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      FUN_00409350(pcVar5,(int)pcVar7 - (int)local_20);
      local_8._0_1_ = 9;
      (**(code **)(*local_1c + 0xbc))(local_40,*(undefined4 *)(_param_4 + 0x20));
      local_8._0_1_ = 6;
      if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_40[0]);
      }
      param_3 = param_3 + 1;
    } while (param_3 < 7);
  }
  ExceptionList = local_10;
  return param_1;
}

