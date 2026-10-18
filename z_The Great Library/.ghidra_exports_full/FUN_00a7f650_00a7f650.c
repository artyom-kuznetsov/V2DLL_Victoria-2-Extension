// FUN_00a7f650 @ 00a7f650 body=[[00a7f650, 00a7f69c] [00a7f6a0, 00a7f8c7] [00a7f8cb, 00a7f93b] [00a7f93f, 00a7f951]]


/* WARNING: Removing unreachable block (ram,0x00a7f913) */
/* WARNING: Removing unreachable block (ram,0x00a7f93f) */
/* WARNING: Removing unreachable block (ram,0x00a7f8c2) */
/* WARNING: Removing unreachable block (ram,0x00a7f936) */

undefined4 FUN_00a7f650(int param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  char *pcVar10;
  byte *pbVar11;
  undefined1 *puVar12;
  bool bVar13;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3a5d8;
  local_10 = ExceptionList;
  iVar2 = (*(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x50)) / 0x60;
  local_2c = 0;
  if (0 < iVar2) {
    local_20 = 0;
    ExceptionList = &local_10;
    do {
      pbVar11 = (byte *)(*(int *)(param_1 + 0x50) + local_20);
      pcVar10 = "object";
      pbVar3 = pbVar11;
      do {
        bVar1 = *pbVar3;
        bVar13 = bVar1 < (byte)*pcVar10;
        if (bVar1 != *pcVar10) {
LAB_00a7f6d3:
          iVar4 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
          goto LAB_00a7f6d8;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar13 = bVar1 < (byte)pcVar10[1];
        if (bVar1 != pcVar10[1]) goto LAB_00a7f6d3;
        pbVar3 = pbVar3 + 2;
        pcVar10 = pcVar10 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_00a7f6d8:
      if ((iVar4 == 0) &&
         (iVar4 = (*(int *)(pbVar11 + 0x54) - *(int *)(pbVar11 + 0x50)) / 0x60, 0 < iVar4)) {
        local_28 = 0;
        do {
          iVar5 = FUN_00a7cca0("skeleton");
          if (iVar5 != 0) {
            local_8 = 0;
            FUN_00a80000();
            local_24 = (*(int *)(iVar5 + 0x54) - *(int *)(iVar5 + 0x50)) / 0x60;
            if (0 < local_24) {
              local_18 = 0;
              puVar12 = (undefined1 *)0x30;
              do {
                _strncpy(puVar12 + 1,(char *)(*(int *)(iVar5 + 0x50) + local_18),0x1f);
                puVar12[0x20] = 0;
                iVar6 = FUN_00a7cc10(&DAT_00dee364);
                iVar7 = FUN_00a7cc10(&DAT_00dee350);
                iVar8 = FUN_00a7cc10(&DAT_00dee34c);
                if ((iVar6 != 0) && (iVar8 != 0)) {
                  if (iVar7 == 0) {
                    *puVar12 = 0xff;
                  }
                  else if ((*(int *)(iVar7 + 0x14) == 0) ||
                          ((*(int *)(iVar7 + 0x10) != 2 && (*(int *)(iVar7 + 0x10) != 3)))) {
                    *puVar12 = DAT_00000000;
                  }
                  else if (*(int *)(iVar7 + 0x14) == 1) {
                    *puVar12 = *(undefined1 *)(iVar7 + 0x18);
                  }
                  else {
                    *puVar12 = **(undefined1 **)(iVar7 + 0x18);
                  }
                  if ((*(int *)(iVar6 + 0x14) == 0) ||
                     ((*(int *)(iVar6 + 0x10) != 0 && (*(int *)(iVar6 + 0x10) != 1)))) {
                    puVar9 = (undefined4 *)0x0;
                  }
                  else if (*(int *)(iVar6 + 0x14) == 1) {
                    puVar9 = (undefined4 *)(iVar6 + 0x18);
                  }
                  else {
                    puVar9 = *(undefined4 **)(iVar6 + 0x18);
                  }
                  *(undefined4 *)(puVar12 + -0x30) = *puVar9;
                  *(undefined4 *)(puVar12 + -0x2c) = puVar9[1];
                  *(undefined4 *)(puVar12 + -0x28) = puVar9[2];
                  *(undefined4 *)(puVar12 + -0x24) = puVar9[3];
                  *(undefined4 *)(puVar12 + -0x20) = puVar9[4];
                  *(undefined4 *)(puVar12 + -0x1c) = puVar9[5];
                  *(undefined4 *)(puVar12 + -0x18) = puVar9[6];
                  *(undefined4 *)(puVar12 + -0x14) = puVar9[7];
                  *(undefined4 *)(puVar12 + -0x10) = puVar9[8];
                  *(undefined4 *)(puVar12 + -0xc) = puVar9[9];
                  *(undefined4 *)(puVar12 + -8) = puVar9[10];
                  *(undefined4 *)(puVar12 + -4) = puVar9[0xb];
                }
                local_18 = local_18 + 0x60;
                puVar12 = puVar12 + 0x54;
                local_24 = local_24 + -1;
              } while (local_24 != 0);
            }
            local_8 = 0xffffffff;
          }
          local_28 = local_28 + 1;
        } while (local_28 < iVar4);
      }
      local_20 = local_20 + 0x60;
      local_2c = local_2c + 1;
    } while (local_2c < iVar2);
  }
  ExceptionList = local_10;
  return 0;
}

