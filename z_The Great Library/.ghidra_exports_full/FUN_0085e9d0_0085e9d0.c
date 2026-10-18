// FUN_0085e9d0 @ 0085e9d0 body=[[0085e9d0, 0085edfd]]


void FUN_0085e9d0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  int local_1c;
  int local_14;
  int local_10;
  int local_c [2];
  
  FUN_00401000(0x41280000);
  local_10 = FUN_00b31c00();
  FUN_005dcbd0();
  piVar7 = DAT_012587e4;
  local_1c = 0;
  if (0 < *DAT_012587e4) {
    do {
      iVar1 = *(int *)(piVar7[1] + local_1c * 4);
      iVar2 = *(int *)(iVar1 + 0x20);
      uVar3 = *(undefined4 *)(iVar1 + 0x1c);
      iVar9 = local_14;
      if ((iVar2 != 0) &&
         (((((char)uVar3 != 'R' || ((char)((uint)uVar3 >> 8) != 'E')) ||
           ((char)((uint)uVar3 >> 0x10) != 'B')) && (iVar2 != *(int *)(param_1 + 0xc))))) {
        iVar4 = *(int *)(DAT_012587e4[1] + *(int *)(iVar1 + 0x20) * 4);
        iVar8 = *(int *)(iVar4 + 0x9dc) - *(int *)(iVar4 + 0x9d8) >> 2;
        if ((0 < iVar8) &&
           (((*(char *)(iVar4 + 0xcf5) == '\0' && (*(char *)(iVar4 + 0xcf4) == '\0')) ||
            (*(int *)(iVar4 + 0xcfc) == *(int *)(param_1 + 0xc))))) {
          if (((*(char *)(*(int *)(param_1 + 0xc) + *(int *)(iVar4 + 0xd08)) != '\0') &&
              (iVar9 = FUN_0085b8c0(*(undefined4 *)(iVar1 + 0x1c),*(undefined4 *)(iVar1 + 0x20)),
              0 < iVar9)) && (piVar10 = *(int **)(param_1 + 0x20), piVar10 != (int *)0x0)) {
            do {
              iVar9 = *piVar10;
              piVar10 = (int *)piVar10[2];
              if (*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(iVar9 + 8) * 4) + 300)
                  == iVar2) {
                iVar9 = local_14;
                if (((*(char *)(iVar4 + 0xcf5) == '\0') && (*(char *)(iVar4 + 0xcf4) == '\0')) ||
                   (*(int *)(iVar4 + 0xcfc) != *(int *)(param_1 + 0xc))) goto LAB_0085ede3;
                break;
              }
            } while (piVar10 != (int *)0x0);
          }
          iVar11 = FUN_0085b880(*(undefined4 *)(iVar1 + 0x1c),*(undefined4 *)(iVar1 + 0x20));
          iVar1 = local_10;
          local_14 = local_10;
          FUN_005dcbd0();
          FUN_005db9b0();
          piVar10 = *(int **)(param_1 + 0x40);
          local_c[0] = 0;
          iVar9 = local_14;
          iVar12 = local_10;
          while (local_14 = iVar12, local_10 = local_14, piVar10 != (int *)0x0) {
            iVar5 = *piVar10;
            piVar10 = (int *)piVar10[2];
            iVar6 = *(int *)(DAT_012587e4[1] + *(int *)(iVar5 + 0xc) * 4);
            iVar12 = local_14;
            if (((0 < (int)(*(int *)(iVar6 + 0x9dc) - *(int *)(iVar6 + 0x9d8) & 0xfffffffcU)) &&
                (*(int *)(iVar5 + 0xc) != iVar2)) &&
               ((*(char *)(*(int *)(iVar5 + 0xc) + *(int *)(iVar4 + 0xd08)) != '\0' &&
                (iVar11 <= *(int *)(iVar5 + 0x10))))) {
              FUN_005dcbd0();
              iVar9 = local_14;
              if (local_14 == 0) {
                local_14 = -1;
              }
              else if (iVar1 + 0x189373U < 0x39580e) {
                local_14 = (iVar1 * 1000) / local_14;
              }
              else {
                uVar13 = __allmul(iVar1,iVar1 >> 0x1f,1000,0);
                local_14 = __alldiv(uVar13,iVar9,iVar9 >> 0x1f);
              }
              iVar9 = *(int *)(DAT_012587e4[1] + *(int *)(iVar5 + 0xc) * 4);
              iVar12 = iVar8 * 1000;
              iVar9 = (*(int *)(iVar9 + 0x9dc) - *(int *)(iVar9 + 0x9d8) >> 2) * 1000;
              if (iVar9 == 0) {
                iVar9 = -1;
              }
              else if (iVar12 + 0x189373U < 0x39580e) {
                iVar9 = (iVar8 * 1000000) / iVar9;
              }
              else {
                uVar13 = __allmul(iVar12,iVar12 >> 0x1f,1000,0);
                iVar9 = __alldiv(uVar13,iVar9,iVar9 >> 0x1f);
              }
              iVar9 = __alldiv((longlong)(iVar9 + local_14) * (longlong)DAT_01318e5c,1000,0);
              if (4000 < iVar9) {
                iVar9 = 4000;
              }
              FUN_00401000(((float)*(int *)(iVar5 + 0x10) + 0.0005) * 1000.0);
              iVar12 = FUN_00b31c00();
              local_14 = __alldiv((longlong)iVar12 * (longlong)iVar9,1000,0);
              FUN_0085fe40(&local_14);
              iVar9 = local_14;
              iVar12 = local_10;
              if (-1 < local_14) {
                local_c[0] = local_c[0] + local_14;
                iVar12 = local_10;
              }
            }
          }
          if ((0 < local_c[0]) &&
             (local_14 = iVar9, FUN_0085fe40(local_c), iVar9 = local_14, 999 < local_c[0])) {
            FUN_009cd680(uVar3,iVar2);
            FUN_0085bde0();
            iVar9 = local_14;
          }
        }
      }
LAB_0085ede3:
      local_14 = iVar9;
      local_1c = local_1c + 1;
    } while (local_1c < *piVar7);
  }
  return;
}

