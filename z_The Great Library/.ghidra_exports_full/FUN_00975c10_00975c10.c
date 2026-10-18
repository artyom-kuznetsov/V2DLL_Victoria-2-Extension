// FUN_00975c10 @ 00975c10 body=[[00975c10, 00975dcb]]


void FUN_00975c10(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int local_14;
  undefined4 local_10 [3];
  
  local_14 = 0;
  iVar5 = DAT_0125a5b8;
  iVar9 = DAT_0125a5b4;
  if (0 < (int)(*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18) & 0xfffffffcU)) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x18) + local_14 * 4);
      iVar8 = *(int *)(iVar1 + 0x1c) - *(int *)(iVar1 + 0x18) >> 3;
      if (iVar8 < iVar5 - iVar9 >> 2) {
        FUN_00401000(0x3f000000);
        local_10[0] = FUN_00b31c00();
        do {
          local_10[1] = *(undefined4 *)(iVar9 + iVar8 * 4);
          puVar4 = *(undefined4 **)(iVar1 + 0x1c);
          if ((local_10 < puVar4) && (puVar2 = *(undefined4 **)(iVar1 + 0x18), puVar2 <= local_10))
          {
            if (puVar4 == *(undefined4 **)(iVar1 + 0x20)) {
              uVar3 = (int)puVar4 - (int)puVar2 >> 3;
              if (0x1ffffffe < uVar3) {
LAB_00975dc2:
                    /* WARNING: Subroutine does not return */
                FUN_00aad3ad("vector<T> too long");
              }
              uVar3 = uVar3 + 1;
              uVar6 = (int)*(undefined4 **)(iVar1 + 0x20) - (int)puVar2 >> 3;
              if (uVar6 < uVar3) {
                if (0x1fffffff - (uVar6 >> 1) < uVar6) {
                  uVar6 = 0;
                }
                else {
                  uVar6 = uVar6 + (uVar6 >> 1);
                }
                if (uVar6 < uVar3) {
                  uVar6 = uVar3;
                }
                FUN_004237e0(uVar6);
              }
            }
            puVar4 = *(undefined4 **)(iVar1 + 0x1c);
            puVar2 = (undefined4 *)(*(int *)(iVar1 + 0x18) + ((int)local_10 - (int)puVar2 >> 3) * 8)
            ;
            if (puVar4 != (undefined4 *)0x0) {
              *puVar4 = *puVar2;
              uVar7 = puVar2[1];
LAB_00975d76:
              puVar4[1] = uVar7;
            }
          }
          else {
            if (puVar4 == *(undefined4 **)(iVar1 + 0x20)) {
              uVar3 = (int)puVar4 - *(int *)(iVar1 + 0x18) >> 3;
              if (0x1ffffffe < uVar3) goto LAB_00975dc2;
              uVar3 = uVar3 + 1;
              uVar6 = (int)*(undefined4 **)(iVar1 + 0x20) - *(int *)(iVar1 + 0x18) >> 3;
              if (uVar6 < uVar3) {
                if (0x1fffffff - (uVar6 >> 1) < uVar6) {
                  uVar6 = 0;
                }
                else {
                  uVar6 = uVar6 + (uVar6 >> 1);
                }
                if (uVar6 < uVar3) {
                  uVar6 = uVar3;
                }
                FUN_004237e0(uVar6);
              }
            }
            puVar4 = *(undefined4 **)(iVar1 + 0x1c);
            if (puVar4 != (undefined4 *)0x0) {
              *puVar4 = local_10[0];
              uVar7 = local_10[1];
              goto LAB_00975d76;
            }
          }
          *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) + 8;
          iVar8 = iVar8 + 1;
          iVar5 = DAT_0125a5b8;
          iVar9 = DAT_0125a5b4;
        } while (iVar8 < DAT_0125a5b8 - DAT_0125a5b4 >> 2);
      }
      local_14 = local_14 + 1;
    } while (local_14 < *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18) >> 2);
  }
  return;
}

