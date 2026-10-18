// FUN_004cbfb0 @ 004cbfb0 body=[[004cbfb0, 004cca1f]]


void FUN_004cbfb0(void)

{
  int in_EAX;
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  undefined8 uVar10;
  int local_14;
  int local_10;
  int *local_c;
  int local_8;
  
  iVar8 = DAT_012588e8;
  iVar2 = DAT_012586dc;
  iVar4 = 0;
  piVar1 = (int *)(in_EAX + 0x98);
  do {
    if (*piVar1 != 0) {
      iVar4 = *(int *)(DAT_012586dc + 0x40);
      iVar3 = *(int *)(iVar4 + 0xfc) / 1000;
      iVar6 = *(int *)(in_EAX + 0x80);
      if (iVar6 == 0) {
        bVar9 = *(int *)(in_EAX + 0x98) != 0;
        if (*(int *)(in_EAX + 0xb4) != 0) {
          bVar9 = bVar9 + 1;
        }
        if (*(int *)(in_EAX + 0xd0) != 0) {
          bVar9 = bVar9 + 1;
        }
        if (*(int *)(in_EAX + 0xec) != 0) {
          bVar9 = bVar9 + 1;
        }
        if (bVar9 < 2) {
          local_c = (int *)(in_EAX + 0xa4);
          iVar6 = 0;
          goto LAB_004cc0c0;
        }
        *(undefined4 *)(in_EAX + 0x80) = 1;
        goto LAB_004cc3dc;
      }
      if (iVar6 != 1) {
        if (iVar6 != 2) {
          if (iVar6 == 3) {
            iVar2 = *(int *)(in_EAX + 0x84);
            FUN_00424810(*(int *)(iVar4 + 0x104) / 1000);
            iVar8 = DAT_012588e8;
            if (iVar2 < *(int *)(DAT_012588e8 + 0xb0c)) {
              *(undefined4 *)(in_EAX + 0x80) = 0;
              *(undefined4 *)(in_EAX + 0x94) = 0x2d2d2d;
              *(undefined4 *)(in_EAX + 0xb0) = 0x2d2d2d;
              *(undefined4 *)(in_EAX + 0x98) = 0;
              *(undefined4 *)(in_EAX + 0x9c) = 0;
              *(undefined4 *)(in_EAX + 0xa0) = 0;
              *(undefined4 *)(in_EAX + 0xb4) = 0;
              *(undefined4 *)(in_EAX + 0xb8) = 0;
              *(undefined4 *)(in_EAX + 0xbc) = 0;
              *(undefined4 *)(in_EAX + 0xcc) = 0x2d2d2d;
              *(undefined4 *)(in_EAX + 0xd0) = 0;
              *(undefined4 *)(in_EAX + 0xd4) = 0;
              *(undefined4 *)(in_EAX + 0xd8) = 0;
              *(undefined4 *)(in_EAX + 0xe8) = 0x2d2d2d;
              *(undefined4 *)(in_EAX + 0xec) = 0;
              *(undefined4 *)(in_EAX + 0xf0) = 0;
              *(undefined4 *)(in_EAX + 0xf4) = 0;
            }
          }
          else {
            *(undefined4 *)(in_EAX + 0x80) = 0;
            iVar8 = DAT_012588e8;
          }
          goto LAB_004cc3dc;
        }
        iVar3 = -1;
        iVar6 = 0;
        local_c = (int *)0xffffffff;
        iVar2 = 0;
        uVar5 = 0;
        if (*(int *)(in_EAX + 0x98) != 0) {
          uVar5 = 1;
          if (0 < *(int *)(in_EAX + 0x9c)) {
            iVar3 = 0;
            iVar2 = *(int *)(in_EAX + 0x9c);
            uVar5 = 1;
          }
        }
        if (*(int *)(in_EAX + 0xb4) != 0) {
          uVar5 = uVar5 + 1;
          if (iVar2 < *(int *)(in_EAX + 0xb8)) {
            iVar3 = 1;
            iVar2 = *(int *)(in_EAX + 0xb8);
          }
        }
        if (*(int *)(in_EAX + 0xd0) != 0) {
          uVar5 = uVar5 + 1;
          if (iVar2 < *(int *)(in_EAX + 0xd4)) {
            iVar3 = 2;
            iVar2 = *(int *)(in_EAX + 0xd4);
          }
        }
        if (*(int *)(in_EAX + 0xec) != 0) {
          uVar5 = uVar5 + 1;
          if (iVar2 < *(int *)(in_EAX + 0xf0)) {
            iVar3 = 3;
            iVar2 = *(int *)(in_EAX + 0xf0);
          }
        }
        if (1 < uVar5) {
          if (((iVar3 != 0) && (*(int *)(in_EAX + 0x98) != 0)) && (0 < *(int *)(in_EAX + 0x9c))) {
            local_c = (int *)0x0;
            iVar6 = *(int *)(in_EAX + 0x9c);
          }
          if (((iVar3 != 1) && (*(int *)(in_EAX + 0xb4) != 0)) && (iVar6 < *(int *)(in_EAX + 0xb8)))
          {
            local_c = (int *)0x1;
            iVar6 = *(int *)(in_EAX + 0xb8);
          }
          if (((iVar3 != 2) && (*(int *)(in_EAX + 0xd0) != 0)) && (iVar6 < *(int *)(in_EAX + 0xd4)))
          {
            local_c = (int *)0x2;
            iVar6 = *(int *)(in_EAX + 0xd4);
          }
          if ((((iVar3 != 3) && (*(int *)(in_EAX + 0xec) != 0)) &&
              (iVar7 = *(int *)(in_EAX + 0xf0), iVar6 < iVar7)) ||
             (iVar7 = iVar6, -1 < (int)local_c)) {
            if (*(int *)(iVar4 + 0x100) / 1000 <= iVar2 - iVar7) {
              *(undefined4 *)(in_EAX + 0xa0) = 0;
              if (iVar3 == 0) {
LAB_004cc606:
                *(undefined4 *)(in_EAX + 0xb0) = 0x2d2d2d;
                *(undefined4 *)(in_EAX + 0xb4) = 0;
                *(undefined4 *)(in_EAX + 0xb8) = 0;
                *(undefined4 *)(in_EAX + 0xbc) = 0;
                if (iVar3 != 2) goto LAB_004cc598;
                *(undefined4 *)(in_EAX + 0xd8) = 0;
LAB_004cc5c1:
                *(undefined4 *)(in_EAX + 0xe8) = 0x2d2d2d;
                *(undefined4 *)(in_EAX + 0xec) = 0;
                *(undefined4 *)(in_EAX + 0xf0) = 0;
              }
              else {
                *(undefined4 *)(in_EAX + 0x94) = 0x2d2d2d;
                *(undefined4 *)(in_EAX + 0x98) = 0;
                *(undefined4 *)(in_EAX + 0x9c) = 0;
                if (iVar3 != 1) goto LAB_004cc606;
                *(undefined4 *)(in_EAX + 0xbc) = 0;
LAB_004cc598:
                *(undefined4 *)(in_EAX + 0xcc) = 0x2d2d2d;
                *(undefined4 *)(in_EAX + 0xd0) = 0;
                *(undefined4 *)(in_EAX + 0xd4) = 0;
                *(undefined4 *)(in_EAX + 0xd8) = 0;
                if (iVar3 != 3) goto LAB_004cc5c1;
              }
              *(undefined4 *)(in_EAX + 0xf4) = 0;
              iVar8 = DAT_012588e8;
              *(undefined4 *)(in_EAX + 0x84) = *(undefined4 *)(DAT_012588e8 + 0xb0c);
              *(undefined4 *)(in_EAX + 0x80) = 3;
            }
            goto LAB_004cc3dc;
          }
        }
        *(undefined4 *)(in_EAX + 0x84) = *(undefined4 *)(DAT_012588e8 + 0xb0c);
        *(undefined4 *)(in_EAX + 0x80) = 3;
        *(undefined4 *)(in_EAX + 0xa0 + iVar3 * 0x1c) = 0;
        goto LAB_004cc3dc;
      }
      iVar6 = -1;
      iVar4 = 0;
      local_8 = -1;
      iVar2 = 0;
      uVar5 = 0;
      if (*(int *)(in_EAX + 0x98) != 0) {
        uVar5 = 1;
        if (0 < *(int *)(in_EAX + 0x9c)) {
          iVar6 = 0;
          iVar2 = *(int *)(in_EAX + 0x9c);
          uVar5 = 1;
        }
      }
      if (*(int *)(in_EAX + 0xb4) != 0) {
        uVar5 = uVar5 + 1;
        if (iVar2 < *(int *)(in_EAX + 0xb8)) {
          iVar6 = 1;
          iVar2 = *(int *)(in_EAX + 0xb8);
        }
      }
      if (*(int *)(in_EAX + 0xd0) != 0) {
        uVar5 = uVar5 + 1;
        if (iVar2 < *(int *)(in_EAX + 0xd4)) {
          iVar6 = 2;
          iVar2 = *(int *)(in_EAX + 0xd4);
        }
      }
      if (*(int *)(in_EAX + 0xec) != 0) {
        uVar5 = uVar5 + 1;
        if (iVar2 < *(int *)(in_EAX + 0xf0)) {
          iVar6 = 3;
          iVar2 = *(int *)(in_EAX + 0xf0);
        }
      }
      if (uVar5 < 2) {
LAB_004cc419:
        if (iVar3 <= iVar2) {
          *(undefined4 *)(in_EAX + 0x84) = *(undefined4 *)(DAT_012588e8 + 0xb0c);
          *(undefined4 *)(in_EAX + 0x80) = 3;
          *(undefined4 *)(in_EAX + 0xa0 + iVar6 * 0x1c) = 0;
        }
        goto LAB_004cc3dc;
      }
      if (((iVar6 != 0) && (*(int *)(in_EAX + 0x98) != 0)) && (0 < *(int *)(in_EAX + 0x9c))) {
        local_8 = 0;
        iVar4 = *(int *)(in_EAX + 0x9c);
      }
      if (((iVar6 != 1) && (*(int *)(in_EAX + 0xb4) != 0)) && (iVar4 < *(int *)(in_EAX + 0xb8))) {
        local_8 = 1;
        iVar4 = *(int *)(in_EAX + 0xb8);
      }
      if (((iVar6 != 2) && (*(int *)(in_EAX + 0xd0) != 0)) && (iVar4 < *(int *)(in_EAX + 0xd4))) {
        local_8 = 2;
        iVar4 = *(int *)(in_EAX + 0xd4);
      }
      if (((iVar6 == 3) || (*(int *)(in_EAX + 0xec) == 0)) || (*(int *)(in_EAX + 0xf0) <= iVar4)) {
        if (local_8 < 0) goto LAB_004cc419;
      }
      else {
        local_8 = 3;
        iVar4 = *(int *)(in_EAX + 0xf0);
      }
      if ((iVar2 - iVar4 < iVar3) && ((iVar2 < iVar3 || (uVar5 != 2)))) {
        if (uVar5 < 3) goto LAB_004cc3dc;
        if (((iVar6 != 0) && (local_8 != 0)) && (iVar3 <= iVar2 - *(int *)(in_EAX + 0x9c))) {
          *(undefined4 *)(in_EAX + 0x98) = 0;
          *(undefined4 *)(in_EAX + 0x9c) = 0;
          *(undefined4 *)(in_EAX + 0xa0) = 0;
          *(undefined4 *)(in_EAX + 0x94) = 0x2d2d2d;
          *(undefined4 *)(in_EAX + 0xa4) = DAT_01259abc;
          uVar5 = uVar5 - 1;
        }
        if (((iVar6 != 1) && (local_8 != 1)) && (iVar3 <= iVar2 - *(int *)(in_EAX + 0xb8))) {
          *(undefined4 *)(in_EAX + 0xb4) = 0;
          *(undefined4 *)(in_EAX + 0xb8) = 0;
          *(undefined4 *)(in_EAX + 0xbc) = 0;
          *(undefined4 *)(in_EAX + 0xb0) = 0x2d2d2d;
          *(undefined4 *)(in_EAX + 0xc0) = DAT_01259abc;
          uVar5 = uVar5 - 1;
        }
        if (((iVar6 != 2) && (local_8 != 2)) && (iVar3 <= iVar2 - *(int *)(in_EAX + 0xd4))) {
          *(undefined4 *)(in_EAX + 0xd0) = 0;
          *(undefined4 *)(in_EAX + 0xd4) = 0;
          *(undefined4 *)(in_EAX + 0xd8) = 0;
          *(undefined4 *)(in_EAX + 0xcc) = 0x2d2d2d;
          *(undefined4 *)(in_EAX + 0xdc) = DAT_01259abc;
          uVar5 = uVar5 - 1;
        }
        if (((iVar6 != 3) && (local_8 != 3)) && (iVar3 <= iVar2 - *(int *)(in_EAX + 0xf0))) {
          *(undefined4 *)(in_EAX + 0xe8) = 0x2d2d2d;
          *(undefined4 *)(in_EAX + 0xec) = 0;
          *(undefined4 *)(in_EAX + 0xf0) = 0;
          *(undefined4 *)(in_EAX + 0xf4) = 0;
          *(undefined4 *)(in_EAX + 0xf8) = DAT_01259abc;
          uVar5 = uVar5 - 1;
        }
        iVar8 = DAT_012588e8;
        if (2 < (int)uVar5) goto LAB_004cc3dc;
      }
      FUN_004cd5f0(local_8,iVar2);
      *(undefined4 *)(in_EAX + 0x80) = 2;
      iVar8 = DAT_012588e8;
      goto LAB_004cc3dc;
    }
    iVar4 = iVar4 + 1;
    piVar1 = piVar1 + 7;
  } while (iVar4 < 4);
  if (*(int *)(in_EAX + 0x80) != 0) {
    *(undefined4 *)(in_EAX + 0x80) = 0;
    iVar2 = (**(code **)(**(int **)(iVar8 + 0xb24) + 0x124))();
    if ((iVar2 != 0) && (*(char *)(*(int *)(iVar2 + 0x20) + 0x67) != '\0')) {
      FUN_00740050(iVar2);
    }
    iVar8 = DAT_012588e8;
    *(undefined4 *)(*(int *)(*(int *)(DAT_012588e8 + 0xb24) + 0x24) + 0x1c) = 1;
  }
  goto LAB_004cc3dc;
  while( true ) {
    local_c = local_c + 7;
    iVar6 = iVar6 + 1;
    if (3 < iVar6) break;
LAB_004cc0c0:
    if ((local_c[-3] != 0) &&
       (*local_c + (*(int *)(iVar4 + 0x10c) / 1000) * 0x18 < *(int *)(DAT_012588e8 + 0xb0c))) {
      *(undefined4 *)(in_EAX + 0x84) = *(undefined4 *)(DAT_012588e8 + 0xb0c);
      *(undefined4 *)(in_EAX + 0x80) = 3;
      iVar4 = in_EAX + iVar6 * 0x1c;
      *(undefined4 *)(iVar4 + 0xa0) = 0;
      *(int *)(iVar4 + 0x9c) = *(int *)(*(int *)(iVar2 + 0x40) + 0xfc) / 1000;
      break;
    }
  }
LAB_004cc3dc:
  iVar2 = DAT_012586dc;
  if (*(int *)(in_EAX + 0x80) == 2) {
    iVar4 = *(int *)(*(int *)(iVar8 + 0xcf8) + 8);
    if ((iVar4 == 0) || (*(int *)(iVar4 + 0xc) != in_EAX)) {
      *(int *)(in_EAX + 0x88) =
           *(int *)(in_EAX + 0x88) + *(int *)(*(int *)(DAT_012586dc + 0x40) + 0x148);
      iVar4 = 0;
      if ((*(int *)(in_EAX + 0x98) != 0) && (0 < *(int *)(in_EAX + 0x9c))) {
        iVar4 = *(int *)(in_EAX + 0x9c);
      }
      if ((*(int *)(in_EAX + 0xb4) != 0) && (iVar4 < *(int *)(in_EAX + 0xb8))) {
        iVar4 = *(int *)(in_EAX + 0xb8);
      }
      if ((*(int *)(in_EAX + 0xd0) != 0) && (iVar4 < *(int *)(in_EAX + 0xd4))) {
        iVar4 = *(int *)(in_EAX + 0xd4);
      }
      if ((*(int *)(in_EAX + 0xec) != 0) && (iVar4 < *(int *)(in_EAX + 0xf0))) {
        iVar4 = *(int *)(in_EAX + 0xf0);
      }
      FUN_00401000(((float)iVar4 + 0.0005) * 1000.0);
      iVar4 = FUN_00b31c00();
      iVar4 = __alldiv((longlong)*(int *)(*(int *)(iVar2 + 0x40) + 0x14c) * (longlong)iVar4,1000,0);
      *(int *)(in_EAX + 0x88) = *(int *)(in_EAX + 0x88) + iVar4;
      if (*(int *)(*(int *)(iVar8 + 0xcf8) + 8) != 0) {
        *(int *)(in_EAX + 0x88) = *(int *)(in_EAX + 0x88) + *(int *)(*(int *)(iVar2 + 0x30) + 0x4cc)
        ;
      }
      local_8 = 0;
      local_10 = 0;
      local_c = (int *)0x0;
      FUN_004cd2a0();
      piVar1 = *(int **)(iVar8 + 0xbe0);
      local_14 = *(int *)(iVar8 + 0xbe4) - (int)piVar1 >> 2;
      if (0 < local_14) {
        iVar2 = *(int *)(iVar8 + 0xacc);
        do {
          iVar8 = *(int *)(*(int *)(iVar2 + *(int *)(*piVar1 + 0xbe4) * 4) + 0x16c);
          if ((iVar8 == *(int *)(*(int *)(iVar2 + *(int *)(**(int **)(DAT_012587e4 + 4) + 0xbe4) * 4
                                         ) + 0x16c)) ||
             (iVar8 == *(int *)(*(int *)(iVar2 + *(int *)(**(int **)(DAT_012587e4 + 4) + 0xbe4) * 4)
                               + 0x16c))) {
            local_c = (int *)((int)local_c + 1);
            if (*(char *)(*piVar1 + 0x67c) == '\0') {
              if (*(char *)(*piVar1 + 3000) != '\0') {
                local_10 = local_10 + 1000;
              }
            }
            else {
              local_8 = local_8 + 1000;
            }
          }
          piVar1 = piVar1 + 1;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
        if (0 < (int)local_c) {
          iVar2 = __alldiv((longlong)*(int *)(*(int *)(DAT_012586dc + 0x30) + 0x544) *
                           (longlong)local_8,1000,0);
          iVar8 = (int)local_c * 1000;
          if (iVar8 == 0) {
            iVar2 = -1;
          }
          else if ((iVar2 < -0x189373) || (0x20c49a < iVar2)) {
            uVar10 = __allmul(iVar2,iVar2 >> 0x1f,1000,0);
            iVar2 = __alldiv(uVar10,iVar8,iVar8 >> 0x1f);
          }
          else {
            iVar2 = (iVar2 * 1000) / iVar8;
          }
          *(int *)(in_EAX + 0x88) = *(int *)(in_EAX + 0x88) + iVar2;
          iVar2 = __alldiv((longlong)*(int *)(*(int *)(DAT_012586dc + 0x30) + 0x544) *
                           (longlong)local_10,1000,0);
          if (iVar8 == 0) {
            iVar8 = -1;
          }
          else if ((iVar2 < -0x189373) || (0x20c49a < iVar2)) {
            uVar10 = __allmul(iVar2,iVar2 >> 0x1f,1000,0);
            iVar8 = __alldiv(uVar10,iVar8,iVar8 >> 0x1f);
          }
          else {
            iVar8 = (iVar2 * 1000) / iVar8;
          }
          *(int *)(in_EAX + 0x88) = *(int *)(in_EAX + 0x88) + iVar8;
        }
      }
    }
    else {
      *(undefined4 *)(in_EAX + 0x88) = 100000;
    }
    if (100000 < *(int *)(in_EAX + 0x88)) {
      *(undefined4 *)(in_EAX + 0x88) = 100000;
      return;
    }
    if (-1 < *(int *)(in_EAX + 0x88)) {
      return;
    }
  }
  *(undefined4 *)(in_EAX + 0x88) = 0;
  return;
}

