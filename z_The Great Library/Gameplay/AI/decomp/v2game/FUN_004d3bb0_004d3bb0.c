// FUN_004d3bb0 @ 004d3bb0 body=[[004d3bb0, 004d3d3c] [004d3d40, 004d40c8] [004d40d0, 004d41ef]]


void FUN_004d3bb0(void)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  int in_EAX;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  undefined8 uVar12;
  int *local_2c;
  int local_28;
  int local_24;
  int local_1c;
  
  FUN_004d3700();
  piVar10 = DAT_012587e4;
  if (*(char *)(in_EAX + 0x27c) == '\0') {
    return;
  }
  local_28 = 0;
  if (0 < *DAT_012587e4) {
    local_2c = (int *)DAT_012587e4[1];
    do {
      iVar7 = *local_2c;
      uVar1 = *(undefined4 *)(iVar7 + 0x1c);
      if ((*(int *)(iVar7 + 0x20) != 0) &&
         (((((char)uVar1 != 'R' || ((char)((uint)uVar1 >> 8) != 'E')) ||
           ((char)((uint)uVar1 >> 0x10) != 'B')) &&
          ((iVar7 = *(int *)(DAT_012587e4[1] + *(int *)(iVar7 + 0x20) * 4),
           0 < (int)(*(int *)(iVar7 + 0x9dc) - *(int *)(iVar7 + 0x9d8) & 0xfffffffcU) &&
           (0 < *(int *)(*(int *)(*(int *)(iVar7 + 0xbe8) + *(int *)(in_EAX + 0x5c) * 4) + 0x58)))))
         )) {
        *(int *)(in_EAX + 0x280) =
             *(int *)(in_EAX + 0x280) + *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x4b8);
        break;
      }
      local_2c = local_2c + 1;
      local_28 = local_28 + 1;
    } while (local_28 < *DAT_012587e4);
  }
  iVar7 = *(int *)(piVar10[1] + *(int *)(in_EAX + 0x5c) * 4);
  iVar8 = *(int *)(iVar7 + 0x1594) - *(int *)(iVar7 + 0x1590) >> 2;
  local_28 = 0;
  if (0 < iVar8) {
    do {
      iVar6 = *(int *)(*(int *)(iVar7 + 0x1590) + local_28 * 4);
      iVar5 = *(int *)(iVar6 + 0x14);
      if (((iVar5 != 0) && (iVar5 != *(int *)(in_EAX + 0x5c))) &&
         (iVar5 == *(int *)(in_EAX + 0x288))) {
        local_2c = *(int **)(in_EAX + 0x48);
        iVar11 = *(int *)(in_EAX + 0x4c) - (int)local_2c >> 2;
        bVar3 = false;
        local_24 = 0;
        if (0 < iVar11) {
          do {
            if (bVar3) goto LAB_004d3d70;
            iVar4 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *local_2c * 4);
            iVar2 = *(int *)(iVar4 + 0x148);
            iVar4 = *(int *)(iVar4 + 0x14c) - iVar2 >> 3;
            iVar9 = 0;
            if (0 < iVar4) {
              piVar10 = (int *)(iVar2 + 4);
              do {
                if (iVar5 == *piVar10) {
                  bVar3 = true;
                  break;
                }
                iVar9 = iVar9 + 1;
                piVar10 = piVar10 + 2;
              } while (iVar9 < iVar4);
            }
            local_2c = local_2c + 1;
            local_24 = local_24 + 1;
          } while (local_24 < iVar11);
          if (bVar3) {
LAB_004d3d70:
            local_24 = 0;
            if (0 < *(int *)(in_EAX + 200)) {
              local_24 = *(int *)(in_EAX + 200) * 1000;
              iVar5 = *(int *)(*(int *)(in_EAX + 0x110) +
                              *(int *)(*(int *)(*(int *)(DAT_012587e4[1] +
                                                        *(int *)(in_EAX + 0x288) * 4) + 0xe64) + 8)
                              * 4);
              iVar11 = iVar5 * 1000;
              if (local_24 == 0) {
                local_24 = -1;
              }
              else if (iVar11 + 0x189373U < 0x39580e) {
                local_24 = (iVar5 * 1000000) / local_24;
              }
              else {
                uVar12 = __allmul(iVar11,iVar11 >> 0x1f,1000,0);
                local_24 = __alldiv(uVar12,local_24,local_24 >> 0x1f);
              }
            }
            iVar5 = *(int *)(iVar6 + 0x28) * 1000;
            if (iVar5 + 0x189373U < 0x39580e) {
              iVar5 = (*(int *)(iVar6 + 0x28) * 1000000) / 4000000;
            }
            else {
              uVar12 = __allmul(iVar5,iVar5 >> 0x1f,1000,0);
              iVar5 = __alldiv(uVar12,4000000,0);
            }
            uVar12 = __alldiv(*(uint *)(iVar6 + 0x20) << 0xf,
                              *(int *)(iVar6 + 0x24) << 0xf | *(uint *)(iVar6 + 0x20) >> 0x11,
                              0x320000,0);
            uVar12 = __allmul(uVar12,0x1f40000,0);
            iVar6 = *(int *)(DAT_012586dc + 0x30);
            iVar5 = __alldiv((longlong)iVar5 * (longlong)local_24,1000,0);
            iVar5 = __alldiv((longlong)iVar5 * (longlong)*(int *)(iVar6 + 0x4bc),1000,0);
            iVar6 = *(int *)(iVar6 + 0x4c0);
            if (iVar6 < iVar5) {
              iVar5 = iVar6;
            }
            iVar6 = __alldiv((longlong)iVar5 *
                             (longlong)
                             (int)((uint)uVar12 >> 0x1e | (int)((ulonglong)uVar12 >> 0x20) << 2),
                             1000,0);
            *(int *)(in_EAX + 0x280) = *(int *)(in_EAX + 0x280) + iVar6;
          }
        }
      }
      local_28 = local_28 + 1;
    } while (local_28 < iVar8);
  }
  piVar10 = DAT_012587e4;
  if (((((*(int *)(in_EAX + 0x4c) - (int)*(int **)(in_EAX + 0x48) & 0xfffffffcU) != 0) &&
       (iVar7 = **(int **)(in_EAX + 0x48), iVar7 != 0)) &&
      (iVar7 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + iVar7 * 4), *(int *)(iVar7 + 0x164) != 0))
     && (iVar7 = **(int **)(iVar7 + 0x15c), iVar7 != 0)) {
    iVar8 = *DAT_012587e4;
    iVar6 = 0;
    if (0 < iVar8) {
      do {
        iVar5 = *(int *)(piVar10[1] + iVar6 * 4);
        uVar1 = *(undefined4 *)(iVar5 + 0x1c);
        iVar5 = *(int *)(iVar5 + 0x20);
        if ((iVar5 != 0) &&
           (((((char)uVar1 != 'R' || ((char)((uint)uVar1 >> 8) != 'E')) ||
             ((char)((uint)uVar1 >> 0x10) != 'B')) && (*(int *)(in_EAX + 0x5c) != iVar5)))) {
          *(int *)(in_EAX + 0x280) =
               *(int *)(in_EAX + 0x280) +
               *(int *)(*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xbf0) + iVar5 * 0x10) +
                                *(int *)(iVar7 + 0x6c) * 4) + 0xec);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar8);
    }
  }
  iVar8 = DAT_012588e8;
  iVar7 = DAT_012586dc;
  *(int *)(in_EAX + 0x280) =
       *(int *)(in_EAX + 0x280) + *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x4b4);
  if (*(int *)(*(int *)(iVar8 + 0xcf8) + 8) != 0) {
    *(int *)(in_EAX + 0x280) = *(int *)(in_EAX + 0x280) + *(int *)(*(int *)(iVar7 + 0x30) + 0x4cc);
  }
  switch(*(undefined4 *)(*(int *)(DAT_012587e4[1] + *(int *)(in_EAX + 0x5c) * 4) + 0x1404)) {
  case 1:
    iVar7 = *(int *)(*(int *)(iVar7 + 0x30) + 0x524);
    break;
  case 2:
    iVar7 = *(int *)(*(int *)(iVar7 + 0x30) + 0x528);
    break;
  case 3:
    iVar7 = *(int *)(*(int *)(iVar7 + 0x30) + 0x52c);
    break;
  case 4:
    iVar7 = *(int *)(*(int *)(iVar7 + 0x30) + 0x530);
    break;
  case 5:
    iVar7 = *(int *)(*(int *)(iVar7 + 0x30) + 0x534);
    break;
  case 6:
    iVar7 = *(int *)(*(int *)(iVar7 + 0x30) + 0x538);
    break;
  case 7:
    iVar7 = *(int *)(*(int *)(iVar7 + 0x30) + 0x53c);
    break;
  case 8:
    iVar7 = *(int *)(*(int *)(iVar7 + 0x30) + 0x540);
    break;
  default:
    goto switchD_004d4004_default;
  }
  *(int *)(in_EAX + 0x280) = *(int *)(in_EAX + 0x280) + iVar7;
switchD_004d4004_default:
  piVar10 = *(int **)(iVar8 + 0xbe0);
  local_1c = *(int *)(iVar8 + 0xbe4) - (int)piVar10 >> 2;
  local_2c = (int *)0x0;
  local_28 = 0;
  if (0 < local_1c) {
    iVar7 = *(int *)(iVar8 + 0xacc);
    do {
      iVar8 = *(int *)(*(int *)(iVar7 + *(int *)(*piVar10 + 0xbe4) * 4) + 0x16c);
      if ((iVar8 == *(int *)(*(int *)(iVar7 + *(int *)(*(int *)(DAT_012587e4[1] +
                                                               *(int *)(in_EAX + 0x5c) * 4) + 0xbe4)
                                              * 4) + 0x16c)) ||
         (iVar8 == *(int *)(*(int *)(iVar7 + *(int *)(*(int *)(DAT_012587e4[1] +
                                                              *(int *)(in_EAX + 0x288) * 4) + 0xbe4)
                                             * 4) + 0x16c))) {
        iVar8 = *piVar10;
        local_28 = local_28 + 1;
        if ((*(int *)(iVar8 + 0x20) != *(int *)(in_EAX + 0x5c)) &&
           ((*(char *)(iVar8 + 0x67c) != '\0' || (*(char *)(iVar8 + 3000) != '\0')))) {
          local_2c = (int *)((int)local_2c + 1);
        }
      }
      piVar10 = piVar10 + 1;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
    if (local_28 != 0) goto LAB_004d414a;
  }
  local_28 = 1;
LAB_004d414a:
  iVar7 = __alldiv((longlong)((int)local_2c * 1000) *
                   (longlong)*(int *)(*(int *)(DAT_012586dc + 0x30) + 0x544),1000,0);
  local_28 = local_28 * 1000;
  if (local_28 == 0) {
    local_28 = -1;
  }
  else if ((iVar7 < -0x189373) || (0x20c49a < iVar7)) {
    uVar12 = __allmul(iVar7,iVar7 >> 0x1f,1000,0);
    local_28 = __alldiv(uVar12,local_28,local_28 >> 0x1f);
  }
  else {
    local_28 = (iVar7 * 1000) / local_28;
  }
  piVar10 = (int *)(in_EAX + 0x280);
  *piVar10 = *piVar10 + local_28;
  if (-1 < *piVar10) {
    if (100000 < *(int *)(in_EAX + 0x280)) {
      *(undefined4 *)(in_EAX + 0x280) = 100000;
    }
    return;
  }
  *(undefined4 *)(in_EAX + 0x280) = 0;
  return;
}

