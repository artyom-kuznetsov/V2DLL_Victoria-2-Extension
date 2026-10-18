// FUN_00721fd0 @ 00721fd0 body=[[00721fd0, 0072203c] [00722040, 007220ae] [007220b2, 007220d4] [007220d8, 007221ad]]


void FUN_00721fd0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  short *psVar6;
  uint uVar7;
  int iVar8;
  undefined4 local_64;
  uint local_50;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  int local_28;
  int local_24;
  int local_20;
  undefined1 local_1c [4];
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b444e8;
  local_10 = ExceptionList;
  iVar8 = 0;
  local_28 = 0;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("goods_entry_offset",0x12);
  local_8 = 0;
  iVar4 = (**(code **)(*DAT_01258a80 + 0x48))(local_48);
  local_8 = 0xffffffff;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  local_20 = *(int *)(iVar4 + 0x68);
  local_24 = *(int *)(iVar4 + 100);
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350("group_",6);
  local_8 = 1;
  uVar5 = FUN_00988f20(param_2 + 0xc);
  local_8 = CONCAT31(local_8._1_3_,2);
  local_18 = (int *)(**(code **)(**(int **)(param_1 + 0x4c) + 0x6c))(uVar5);
  if (local_50 < 0x10) {
    local_8 = 0xffffffff;
    if (local_34 < 0x10) {
      local_34 = 0xf;
      local_38 = 0;
      local_48[0] = local_48[0] & 0xffffff00;
      piVar3 = *(int **)(param_1 + 0x5c);
      while (piVar3 != (int *)0x0) {
        local_14 = (int *)piVar3[2];
        piVar1 = (int *)*piVar3;
        piVar3 = local_14;
        if (param_2 == *(int *)(*piVar1 + 0x38)) {
          uVar7 = (uint)*(byte *)(*(int *)(*piVar1 + 8) + 0x3a4 + *(int *)(DAT_012588e8 + 0xbcc));
          iVar4 = *(int *)(*(int *)(DAT_012588e8 + 0xbcc) + 0x3e4);
          iVar2 = *(int *)(iVar4 + 4 + uVar7 * 8);
          if ((iVar2 < 1) && ((iVar2 < 0 || (*(int *)(iVar4 + uVar7 * 8) == 0)))) {
            (**(code **)(*(int *)(piVar1[1] + 0x18) + 0x38))();
            piVar3 = local_14;
          }
          else {
            (**(code **)(*(int *)(piVar1[1] + 0x18) + 0x34))();
            iVar4 = local_28;
            (**(code **)(*(int *)piVar1[1] + 0x18))(CONCAT22((short)local_28,(short)iVar8));
            psVar6 = (short *)(**(code **)(*local_18 + 0x60))(local_1c);
            piVar3 = local_14;
            if ((int)*psVar6 < iVar8 + local_24 * 2) {
              iVar8 = 0;
              local_28 = iVar4 + local_20;
            }
            else {
              iVar8 = iVar8 + local_24;
            }
          }
        }
      }
      ExceptionList = local_10;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_64);
}

