// FUN_0048b290 @ 0048b290 body=[[0048b290, 0048b406]]


undefined8 * FUN_0048b290(int param_1,undefined8 *param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int in_EAX;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  undefined8 uVar12;
  undefined8 local_28;
  uint local_20;
  int iStack_1c;
  int local_c;
  
  if (*(int *)(in_EAX + 4) != 0) {
    iVar3 = (*(int *)(param_1 + 0x7d8) - *(int *)(param_1 + 0x7d4)) / 0x58;
    local_20 = 0;
    iStack_1c = 0;
    local_28 = 0;
    local_c = 1;
    if (1 < iVar3) {
      piVar6 = *(int **)(DAT_012588e8 + 0xadc);
      iVar8 = 0x58;
      do {
        piVar6 = piVar6 + 1;
        iVar5 = *piVar6;
        if (((*(int *)(iVar5 + 0x20) != 0) &&
            (((*(char *)(iVar5 + 0x1c) != 'R' || (*(char *)(iVar5 + 0x1d) != 'E')) ||
             (*(char *)(iVar5 + 0x1e) != 'B')))) &&
           (iVar5 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar5 + 0x20) * 4),
           0 < (int)(*(int *)(iVar5 + 0x9dc) - *(int *)(iVar5 + 0x9d8) & 0xfffffffcU))) {
          iVar5 = *(int *)(param_1 + 0x7d4) + iVar8;
          uVar9 = (uint)*(byte *)(*(int *)(param_3 + 8) + 8 + iVar5);
          iVar5 = *(int *)(iVar5 + 0x48);
          iVar4 = *(int *)(param_1 + 0x814) + iVar8;
          uVar10 = (uint)*(byte *)(*(int *)(param_3 + 8) + 8 + iVar4);
          iVar4 = *(int *)(iVar4 + 0x48);
          uVar2 = *(uint *)(iVar5 + uVar9 * 8);
          puVar1 = (uint *)(iVar4 + uVar10 * 8);
          uVar7 = uVar2 - *puVar1;
          iVar5 = (*(int *)(iVar5 + 4 + uVar9 * 8) - *(int *)(iVar4 + 4 + uVar10 * 8)) -
                  (uint)(uVar2 < *puVar1);
          if (local_c == *(int *)(in_EAX + 4)) {
            local_28 = CONCAT44(iVar5,uVar7);
          }
          bVar11 = CARRY4(local_20,uVar7);
          local_20 = local_20 + uVar7;
          iStack_1c = iStack_1c + iVar5 + (uint)bVar11;
        }
        local_c = local_c + 1;
        iVar8 = iVar8 + 0x58;
      } while (local_c < iVar3);
      if ((-1 < iStack_1c) && ((0 < iStack_1c || (local_20 != 0)))) {
        uVar12 = __alldiv((uint)local_28 << 0xf,local_28._4_4_ << 0xf | (uint)local_28 >> 0x11,
                          local_20,iStack_1c);
        *param_2 = uVar12;
        return param_2;
      }
    }
  }
  *(undefined4 *)((int)param_2 + 4) = 0;
  *(undefined4 *)param_2 = 0;
  return param_2;
}

