// FUN_0064dad0 @ 0064dad0 body=[[0064dad0, 0064db9d] [0064dba1, 0064dbcf] [0064dbd3, 0064dbfc] [0064dc00, 0064ddaa]]


void FUN_0064dad0(byte *param_1)

{
  byte bVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  byte *pbVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *in_ECX;
  char *pcVar9;
  bool bVar10;
  undefined4 uVar11;
  int local_60;
  undefined1 local_58 [8];
  uint local_50;
  undefined4 local_40;
  uint local_3c;
  uint local_34;
  undefined4 local_24;
  void *local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b95272;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_0066bc90();
  local_20 = (void *)0xf;
  local_24 = 0;
  local_34 = local_34 & 0xffffff00;
  FUN_00409350("alert_bad_supply",0x10);
  local_c = 0;
  bVar10 = false;
  cVar4 = FUN_00416db0();
  if (cVar4 == '\0') {
    local_3c = 0xf;
    local_40 = 0;
    local_50 = local_50 & 0xffffff00;
    FUN_00409350("alert_lack_of_troops",0x14);
    local_c = 1;
    bVar10 = true;
    cVar4 = FUN_00416db0();
    bVar3 = true;
    if (cVar4 == '\0') goto LAB_0064db85;
  }
  bVar3 = false;
LAB_0064db85:
  if (bVar10) {
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50);
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50 = local_50 & 0xffffff00;
  }
  local_c = 0xffffffff;
  if ((void *)0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34);
  }
  if (bVar3) {
    FUN_004cd940();
  }
  pbVar5 = param_1;
  if (0xf < *(uint *)(param_1 + 0x14)) {
    pbVar5 = *(byte **)param_1;
  }
  pcVar9 = "alert_country_at_war";
  do {
    bVar1 = *pbVar5;
    bVar10 = bVar1 < (byte)*pcVar9;
    if (bVar1 != *pcVar9) {
LAB_0064dc20:
      iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_0064dc25;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    bVar10 = bVar1 < (byte)pcVar9[1];
    if (bVar1 != pcVar9[1]) goto LAB_0064dc20;
    pbVar5 = pbVar5 + 2;
    pcVar9 = pcVar9 + 2;
  } while (bVar1 != 0);
  iVar6 = 0;
LAB_0064dc25:
  if (iVar6 != 0) {
    if (0xf < *(uint *)(param_1 + 0x14)) {
      param_1 = *(byte **)param_1;
    }
    pcVar9 = "alert_free_tech_slots";
    do {
      bVar1 = *param_1;
      bVar10 = bVar1 < (byte)*pcVar9;
      if (bVar1 != *pcVar9) {
LAB_0064dc60:
        iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        goto LAB_0064dc65;
      }
      if (bVar1 == 0) break;
      bVar1 = param_1[1];
      bVar10 = bVar1 < (byte)pcVar9[1];
      if (bVar1 != pcVar9[1]) goto LAB_0064dc60;
      param_1 = param_1 + 2;
      pcVar9 = pcVar9 + 2;
    } while (bVar1 != 0);
    iVar6 = 0;
LAB_0064dc65:
    if ((iVar6 == 0) || (cVar4 = FUN_0040b360(), cVar4 != '\0')) {
      uVar11 = 5;
    }
    else {
      cVar4 = FUN_0040b360();
      if (cVar4 == '\0') {
        cVar4 = FUN_0040b360();
        if (cVar4 != '\0') {
          ExceptionList = local_14;
          return;
        }
        cVar4 = FUN_0040b360();
        if (cVar4 == '\0') {
          ExceptionList = local_14;
          return;
        }
        iVar6 = (**(code **)(*in_ECX + 0x58))(local_58);
        iVar6 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar6 + 4) * 4);
        local_60 = *(int *)(iVar6 + 0x7bc);
        piVar2 = *(int **)(iVar6 + 0x7b4);
        piVar7 = piVar2;
        if (0 < in_ECX[0x36a]) {
          for (; piVar7 != (int *)0x0; piVar7 = (int *)piVar7[2]) {
            if (*piVar7 == *(int *)(*(int *)in_ECX[0x368] + 0x28)) {
              if ((piVar7 != (int *)0x0) && (piVar7 = (int *)piVar7[2], piVar7 != (int *)0x0))
              goto LAB_0064dd30;
              break;
            }
          }
          piVar7 = piVar2;
        }
LAB_0064dd30:
        while( true ) {
          if (piVar7 == (int *)0x0) {
            ExceptionList = local_14;
            return;
          }
          iVar6 = *piVar7;
          piVar8 = (int *)piVar7[2];
          if ((int *)piVar7[2] == (int *)0x0) {
            piVar8 = piVar2;
          }
          local_60 = local_60 + -1;
          if (local_60 < 0) break;
          piVar7 = piVar8;
          if (*(int *)(iVar6 + 0xb0) < 1000) {
            (**(code **)(*in_ECX + 0xa4))(0);
            (**(code **)(*in_ECX + 0x88))(iVar6);
            (**(code **)(*in_ECX + 0xb4))(*(undefined4 *)(iVar6 + 0xdc));
            ExceptionList = local_20;
            return;
          }
        }
        ExceptionList = local_14;
        return;
      }
      uVar11 = 0;
    }
    FUN_0066bd60(uVar11,0);
  }
  ExceptionList = local_14;
  return;
}

