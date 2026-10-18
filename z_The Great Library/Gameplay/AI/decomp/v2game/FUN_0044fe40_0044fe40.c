// FUN_0044fe40 @ 0044fe40 body=[[0044fe40, 0044ff11] [0044ff15, 0044ffe5] [0044ffe9, 00450008] [0045000c, 0045002a] [0045002e, 00450098]]


void FUN_0044fe40(int param_1,int param_2,char param_3,char param_4)

{
  char cVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 local_94;
  uint local_80;
  uint local_78 [4];
  undefined4 local_68;
  uint local_64;
  uint local_5c [4];
  undefined4 local_4c;
  uint local_48;
  char *local_40 [4];
  char *local_30;
  char *local_2c;
  char *local_28;
  char *local_24;
  char *local_20;
  char *local_1c;
  char *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b47283;
  local_10 = ExceptionList;
  local_40[0] = "filter_bestguess";
  local_40[1] = "filter_enemies";
  local_40[2] = "filter_allies";
  local_40[3] = "filter_neighbours";
  local_30 = "filter_sphere";
  local_2c = "filter_north_america";
  local_28 = "filter_south_america";
  local_24 = "filter_europe";
  local_20 = "filter_africa";
  local_1c = "filter_asia";
  local_18 = "filter_oceania";
  pcVar2 = local_40[param_2];
  local_64 = 0xf;
  local_68 = 0;
  local_78[0] = local_78[0] & 0xffffff00;
  pcVar5 = pcVar2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_10;
  FUN_00409350(pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
  local_8 = 0;
  local_14 = (int *)(**(code **)(**(int **)(param_1 + 8) + 0x34))(local_78);
  local_8 = 0xffffffff;
  if (0xf < local_64) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_78[0]);
  }
  local_64 = 0xf;
  local_68 = 0;
  local_78[0] = local_78[0] & 0xffffff00;
  if (local_14 == (int *)0x0) goto LAB_00450069;
  if (param_4 != '\0') {
    uVar6 = (**(code **)(*local_14 + 0xd0))();
    *(undefined4 *)(param_1 + 900 + param_2 * 4) = uVar6;
  }
  piVar3 = *(int **)(DAT_012588e8 + 0xb24);
  if (param_3 == '\0') {
    local_48 = 0xf;
    local_4c = 0;
    local_5c[0] = local_5c[0] & 0xffffff00;
    FUN_00409350("_black",6);
    local_8 = 1;
    FUN_00a8bc80(*(undefined4 *)(param_1 + 900 + param_2 * 4));
    local_8._0_1_ = 2;
    uVar6 = FUN_00988f20(local_5c);
    local_8 = CONCAT31(local_8._1_3_,3);
    (**(code **)(*piVar3 + 0x40))();
    iVar7 = FUN_00973bd0(uVar6);
    if (iVar7 == 0) {
      iVar7 = FUN_00973bd0(uVar6);
    }
    if (0xf < local_80) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_94);
    }
    if ((char *)0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30);
    }
    local_8 = 0xffffffff;
    local_1c = (char *)0xf;
    local_20 = (char *)0x0;
    local_30 = (char *)((uint)local_30 & 0xffffff00);
    if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_5c[0]);
    }
    local_48 = 0xf;
    local_4c = 0;
    local_5c[0] = local_5c[0] & 0xffffff00;
    if (iVar7 == 0) goto LAB_0045003e;
  }
  else {
LAB_0045003e:
    iVar7 = *(int *)(param_1 + 900 + param_2 * 4);
  }
  iVar4 = *local_14;
  uVar6 = (**(code **)(iVar4 + 0xf0))(iVar7);
  (**(code **)(iVar4 + 0xcc))(uVar6);
LAB_00450069:
  if (*(char *)(param_2 + 0x3b0 + param_1) != param_3) {
    *(undefined1 *)(param_1 + 0x3bb) = 1;
  }
  *(char *)(param_2 + 0x3b0 + param_1) = param_3;
  ExceptionList = local_10;
  return;
}

