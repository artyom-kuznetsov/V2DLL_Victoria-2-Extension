// FUN_0094b900 @ 0094b900 body=[[0094b900, 0094b9c6] [0094b9ca, 0094b9e4] [0094b9e8, 0094bad3] [0094bad7, 0094bae7] [0094baeb, 0094bb19]]


undefined4 FUN_0094b900(undefined4 param_1,int *param_2)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 uVar7;
  int in_ECX;
  char *pcVar8;
  bool bVar9;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00bb6deb;
  local_10 = ExceptionList;
  local_8 = 0;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  ExceptionList = &local_10;
  local_14 = in_ECX;
  FUN_00409350("wargoal_list",0xc);
  local_8._0_1_ = 1;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350("setup_goals",0xb);
  local_8._0_1_ = 2;
  piVar3 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x6c))(local_4c);
  piVar3 = (int *)(**(code **)(*piVar3 + 0x7c))(local_30);
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x2c))();
  piVar3 = (int *)*puVar4;
  do {
    if (piVar3 == (int *)0x0) {
      pbVar5 = (byte *)(**(code **)(*param_2 + 0x44))();
      if (0xf < *(uint *)(pbVar5 + 0x14)) {
        pbVar5 = *(byte **)pbVar5;
      }
      pcVar8 = "AgreeButton";
      goto LAB_0094ba38;
    }
    iVar6 = *piVar3;
    piVar3 = (int *)piVar3[2];
    cVar2 = (**(code **)(*(int *)(iVar6 + 0x1c) + 0x58))(param_2);
  } while (cVar2 == '\0');
  FUN_00948760(iVar6,param_1);
  goto LAB_0094bafa;
  while( true ) {
    bVar1 = pbVar5[1];
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_0094ba67;
    pbVar5 = pbVar5 + 2;
    pcVar8 = pcVar8 + 2;
    if (bVar1 == 0) break;
LAB_0094ba38:
    bVar1 = *pbVar5;
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_0094ba67:
      iVar6 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_0094ba6c;
    }
    if (bVar1 == 0) break;
  }
  iVar6 = 0;
LAB_0094ba6c:
  if ((iVar6 == 0) && (cVar2 = FUN_00911760(0), cVar2 == '\0')) {
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350(&DAT_00ded94d,0);
    local_8._0_1_ = 3;
    uVar7 = FUN_00911be0(*(undefined4 *)(local_14 + 0x6c),local_4c);
    local_8._0_1_ = 4;
    FUN_00408ed0(uVar7,0,0xffffffff);
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_4c[0]);
    }
    local_8 = (uint)local_8._1_3_ << 8;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
  }
  FUN_0040c830(param_1);
LAB_0094bafa:
  FUN_00459820();
  ExceptionList = local_10;
  return param_1;
}

