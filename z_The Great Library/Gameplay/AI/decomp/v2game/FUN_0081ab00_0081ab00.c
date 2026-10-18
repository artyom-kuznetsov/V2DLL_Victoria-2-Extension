// FUN_0081ab00 @ 0081ab00 body=[[0081ab00, 0081abc7] [0081abd0, 0081ad41]]


void FUN_0081ab00(int param_1)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  short *psVar5;
  char *pcVar6;
  int iVar7;
  int *piVar8;
  undefined1 local_44 [4];
  int local_40;
  int local_3c;
  undefined4 local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  uint *local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_28 = DAT_012588e8;
  (**(code **)(**(int **)(param_1 + 0x14) + 0x4c))(*(int **)(param_1 + 0x14),0,local_44,0,0x2000);
  local_24 = local_40;
  local_10 = 1;
  local_2c = *(int *)(*(int *)(param_1 + 8) + 0x20) - *(int *)(*(int *)(param_1 + 8) + 0x1c) >> 2;
  if (1 < local_2c) {
    local_18 = 0xe;
    local_14 = 0x10;
    do {
      iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 8) + 0x1c) + local_10 * 4) + 8);
      local_34 = *(undefined4 *)(*(int *)(iVar1 + 0x18) + 0x128);
      local_30 = *(int *)(*(int *)(iVar1 + 0x18) + 300);
      piVar8 = (int *)(*(int *)(*(int *)(param_1 + 8) + 0x18fc) + local_14);
      puVar2 = (uint *)((*(int *)(iVar1 + 0xcc) - *(int *)(iVar1 + 200)) / 0x24);
      iVar7 = piVar8[1] - *piVar8 >> 3;
      local_1c = local_18;
      if (0 < (int)puVar2) {
        local_c = 0;
        local_20 = puVar2;
        do {
          piVar3 = (int *)(local_c + *(int *)(iVar1 + 200));
          iVar4 = *(int *)(*(int *)(*(int *)(local_28 + 0xacc) + piVar3[1] * 4) + 300);
          if (*piVar3 == 4) {
            iVar4 = (-(uint)(iVar4 != local_30) & 0x20000000) + 3;
          }
          else {
            iVar4 = (-(uint)(iVar4 != local_30) & 0x20000000) + 1;
          }
          local_c = local_c + 0x24;
          *(int *)(local_40 + local_1c * 4) = iVar4;
          local_1c = local_1c + 1;
          local_20 = (uint *)((int)local_20 + -1);
        } while (local_20 != (uint *)0x0);
      }
      local_c = 0;
      if (0 < iVar7) {
        local_20 = (uint *)(local_40 + local_1c * 4);
        do {
          local_3c = *(int *)(*piVar8 + local_c * 8);
          iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x1580);
          piVar3 = (int *)(*(int *)(iVar1 + 0x8c) + *(int *)(*piVar8 + local_c * 8 + 4) * 4);
          for (psVar5 = (short *)(*(int *)(iVar1 + 0x90) + *piVar3 * 2);
              psVar5 < (short *)(*(int *)(iVar1 + 0x90) + piVar3[1] * 2); psVar5 = psVar5 + 1) {
            if (local_3c <= *psVar5) {
              if (local_3c == *psVar5) {
                pcVar6 = (char *)(*(int *)(iVar1 + 0x9c) +
                                 ((int)psVar5 - *(int *)(iVar1 + 0x90) >> 1) * 4);
                goto LAB_0081ac95;
              }
              break;
            }
          }
          pcVar6 = (char *)0x0;
LAB_0081ac95:
          *local_20 = (uint)CONCAT21(CONCAT11(*pcVar6 * '\b',pcVar6[2] * '\b'),pcVar6[3] * '\b') <<
                      8 | -(uint)(pcVar6[1] != '\0') & 2;
          local_20 = local_20 + 1;
          local_c = local_c + 1;
        } while (local_c < iVar7);
      }
      local_14 = local_14 + 0x10;
      local_18 = local_18 + 0xe;
      local_10 = local_10 + 1;
    } while (local_10 < local_2c);
  }
  (**(code **)(**(int **)(param_1 + 0x14) + 0x50))(*(int **)(param_1 + 0x14),0);
  return;
}

