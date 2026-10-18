// FUN_005417d0 @ 005417d0 body=[[005417d0, 00541b7f]]


void FUN_005417d0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  char cVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  bool bVar13;
  undefined8 uVar14;
  int iStack_84;
  int local_7c;
  uint local_78;
  uint local_74;
  int iStack_70;
  int local_6c;
  undefined1 auStack_50 [8];
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  local_7c = *(int *)(param_1 + 0x1594) - *(int *)(param_1 + 0x1590) >> 2;
  local_78 = 0;
  local_74 = 0;
  local_6c = 0;
  if (0 < local_7c) {
    uVar14 = FUN_00b31c36();
    iVar10 = (int)((ulonglong)uVar14 >> 0x20);
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x1590) + local_6c * 4);
      piVar12 = *(int **)(iVar2 + 0xc);
      bVar13 = false;
      if ((piVar12 != (int *)0x0) && (cVar7 = (**(code **)(*piVar12 + 0x34))(), cVar7 != '\0')) {
        switch(*(undefined4 *)(piVar12[0x15] + 0x5c)) {
        case 2:
          iVar11 = *(int *)(param_1 + 0x860);
          break;
        case 3:
          iVar11 = *(int *)(param_1 + 0x850);
          break;
        case 4:
          iVar11 = *(int *)(param_1 + 0x880);
          break;
        case 5:
          iVar11 = *(int *)(param_1 + 0x870);
          break;
        default:
          goto switchD_00541862_default;
        }
        bVar13 = piVar12[0x14] ==
                 *(int *)(*(int *)(iVar11 + *(int *)(piVar12[0x15] + 0x50) * 4) + 0x50);
switchD_00541862_default:
        if ((piVar12[0x19] - piVar12[0x18] & 0xfffffffcU) != 0) {
          FUN_008a8650(1);
          uStack_48 = *(undefined4 *)(param_1 + 0x1c);
          uStack_44 = *(undefined4 *)(param_1 + 0x20);
          cVar7 = (**(code **)(piVar12[0x16] + 0x18))(auStack_50);
          if (cVar7 == '\0') {
            bVar13 = true;
          }
        }
      }
      iVar11 = DAT_012588e8;
      if ((*(int *)(iVar2 + 0x24) < iVar10) ||
         ((*(int *)(iVar2 + 0x24) <= iVar10 && (*(uint *)(iVar2 + 0x20) < (uint)uVar14)))) {
        if (bVar13) goto LAB_005419b6;
      }
      else {
        piVar12 = *(int **)(param_1 + 0x9d8);
        while ((*(int **)(param_1 + 0x9d8) <= piVar12 && (piVar12 < *(int **)(param_1 + 0x9dc)))) {
          iVar3 = *(int *)(*(int *)(iVar11 + 0xacc) + *piVar12 * 4);
          piVar12 = piVar12 + 1;
          iStack_70 = *(int *)(iVar3 + 0x198) - *(int *)(iVar3 + 0x194) >> 4;
          if (0 < iStack_70) {
            iStack_84 = 0;
            do {
              iVar6 = *(int *)(iStack_84 + *(int *)(iVar3 + 0x194));
              while (iVar6 != 0) {
                iVar4 = *(int *)(iVar6 + 0x27c);
                piVar1 = (int *)(iVar6 + 0x274);
                iVar6 = iVar4;
                if (*piVar1 == iVar2) {
                  FUN_00967960();
                }
              }
              iStack_84 = iStack_84 + 0x10;
              iStack_70 = iStack_70 + -1;
            } while (iStack_70 != 0);
          }
        }
LAB_005419b6:
        FUN_00541680(1);
        puVar5 = *(undefined4 **)(*(int *)(param_1 + 0x1590) + local_6c * 4);
        if (puVar5 != (undefined4 *)0x0) {
          (**(code **)*puVar5)(1);
        }
        iVar2 = *(int *)(param_1 + 0x1590);
        *(undefined4 *)(iVar2 + local_6c * 4) =
             *(undefined4 *)(iVar2 + -4 + (*(int *)(param_1 + 0x1594) - iVar2 >> 2) * 4);
        iVar2 = *(int *)(param_1 + 0x1594);
        if (((iVar2 - *(int *)(param_1 + 0x1590) & 0xfffffffcU) != 0) &&
           (*(int *)(param_1 + 0x1590) != iVar2)) {
          *(int *)(param_1 + 0x1594) = iVar2 + -4;
        }
        local_7c = local_7c + -1;
        local_6c = local_6c + -1;
      }
      local_6c = local_6c + 1;
    } while (local_6c < local_7c);
  }
  uVar8 = *(uint *)(param_1 + 0x12f4);
  iVar10 = *(int *)(param_1 + 0x1594) - *(int *)(param_1 + 0x1590) >> 2;
  if (0 < iVar10) {
    piVar12 = *(int **)(param_1 + 0x1590);
    do {
      iVar2 = *piVar12;
      if (*(int *)(iVar2 + 0xc) != 0) {
        iVar11 = *(int *)(*(int *)(*(int *)(iVar2 + 0xc) + 0x54) + 0x5c);
        if (iVar11 == 2) {
          local_78 = local_78 + *(int *)(iVar2 + 0x28);
        }
        else if (iVar11 == 3) {
          local_74 = local_74 + *(int *)(iVar2 + 0x28);
        }
      }
      piVar12 = piVar12 + 1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  if (uVar8 == 0) {
    *(undefined4 *)(param_1 + 0x15a4) = 0;
    *(undefined4 *)(param_1 + 0x15a8) = 0;
    return;
  }
  uVar14 = __alldiv(local_78 << 0x1e,local_78 >> 2,uVar8 << 0xf,uVar8 >> 0x11);
  uVar14 = __allmul(uVar14,0x1f40000,0);
  *(uint *)(param_1 + 0x15a4) = (uint)uVar14 >> 0x1e | (int)((ulonglong)uVar14 >> 0x20) << 2;
  uVar14 = __alldiv(local_74 << 0x1e,local_74 >> 2,uVar8 << 0xf,uVar8 >> 0x11);
  uVar14 = __allmul(uVar14,0x1f40000,0);
  *(uint *)(param_1 + 0x15a8) = (uint)uVar14 >> 0x1e | (int)((ulonglong)uVar14 >> 0x20) << 2;
  uVar14 = __allmul(*(undefined4 *)(*(int *)(DAT_012586dc + 0x50) + 0x1c0),
                    *(undefined4 *)(*(int *)(DAT_012586dc + 0x50) + 0x1c4),0x1f40000,0);
  uVar8 = (uint)uVar14 >> 0x1e | (int)((ulonglong)uVar14 >> 0x20) << 2;
  uVar14 = __allmul(*(int *)(param_1 + 0x15a4),*(int *)(param_1 + 0x15a4) >> 0x1f,uVar8,
                    (int)uVar8 >> 0x1f);
  uVar9 = __alldiv(uVar14,1000,0);
  *(undefined4 *)(param_1 + 0x15a4) = uVar9;
  uVar14 = __allmul(*(int *)(param_1 + 0x15a8),*(int *)(param_1 + 0x15a8) >> 0x1f,uVar8,
                    (int)uVar8 >> 0x1f);
  uVar9 = __alldiv(uVar14,1000,0);
  *(undefined4 *)(param_1 + 0x15a8) = uVar9;
  return;
}

