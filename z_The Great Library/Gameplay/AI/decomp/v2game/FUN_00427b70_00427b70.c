// FUN_00427b70 @ 00427b70 body=[[00427b70, 00427cc5] [00427cd0, 00427da8] [00427db0, 00427ed3]]


/* WARNING: Removing unreachable block (ram,0x00427d33) */

void FUN_00427b70(undefined4 *param_1,int param_2,char param_3)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int in_ECX;
  
  iVar4 = param_1[1];
  if (*(int *)(in_ECX + 0x60) == iVar4) {
    if (param_3 != '\0') {
      for (iVar5 = *(int *)(in_ECX + 0x78);
          (iVar5 != *(int *)(in_ECX + 0x7c) && (*(int *)(iVar5 + 4) != iVar4)); iVar5 = iVar5 + 8) {
      }
      FUN_0042ba80();
      iVar4 = *(int *)(in_ECX + 0x68);
      if (iVar4 != *(int *)(in_ECX + 0x6c)) {
        do {
          if (*(int *)(iVar4 + 4) == param_1[1]) break;
          iVar4 = iVar4 + 8;
        } while (iVar4 != *(int *)(in_ECX + 0x6c));
      }
      FUN_0042ba80();
      iVar4 = *(int *)(in_ECX + 0x4c);
      if (iVar4 != *(int *)(in_ECX + 0x50)) {
        do {
          if (*(int *)(iVar4 + 4) == param_1[1]) break;
          iVar4 = iVar4 + 8;
        } while (iVar4 != *(int *)(in_ECX + 0x50));
      }
      FUN_0042ba80();
      if (param_3 != '\x01') goto LAB_00427ead;
      if (*(int *)(in_ECX + 0x20) == *(int *)(param_2 + 4)) {
        iVar4 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x20) * 4);
        if ((((int)(*(int *)(iVar4 + 0x9dc) - *(int *)(iVar4 + 0x9d8) & 0xfffffffcU) < 1) &&
            ((*(int *)(in_ECX + 0x40) - *(int *)(in_ECX + 0x3c) & 0xfffffff8U) == 0)) &&
           (iVar4 = *(int *)(in_ECX + 0x9c) - *(int *)(in_ECX + 0x98) >> 6, 0 < iVar4)) {
          iVar5 = 0;
          do {
            iVar1 = *(int *)(in_ECX + 0x98);
            if (*(int *)(iVar1 + 0x1c + iVar5) == *(int *)(in_ECX + 0x20)) {
              uVar2 = param_1[1];
              *(undefined4 *)(iVar1 + 0x18 + iVar5) = *param_1;
              *(undefined4 *)(iVar1 + 0x1c + iVar5) = uVar2;
            }
            iVar5 = iVar5 + 0x40;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        iVar4 = *(int *)(in_ECX + 0x40);
        iVar5 = *(int *)(in_ECX + 0x3c);
        if (iVar5 == iVar4) {
LAB_00427d15:
          FUN_004d61d0();
        }
        else {
          do {
            if (*(int *)(iVar5 + 4) == param_1[1]) break;
            iVar5 = iVar5 + 8;
          } while (iVar5 != iVar4);
          if (iVar5 == iVar4) goto LAB_00427d15;
        }
        if (*(int *)(in_ECX + 0x78) != *(int *)(in_ECX + 0x7c)) {
          *(int *)(in_ECX + 0x7c) = *(int *)(in_ECX + 0x78);
        }
      }
      else {
        if (*(int *)(in_ECX + 0x18) != *(int *)(param_2 + 4)) goto LAB_00427ead;
        iVar4 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x18) * 4);
        if ((((int)(*(int *)(iVar4 + 0x9dc) - *(int *)(iVar4 + 0x9d8) & 0xfffffffcU) < 1) &&
            ((*(int *)(in_ECX + 0x30) - *(int *)(in_ECX + 0x2c) & 0xfffffff8U) == 0)) &&
           (iVar4 = *(int *)(in_ECX + 0x8c) - *(int *)(in_ECX + 0x88) >> 6, 0 < iVar4)) {
          iVar5 = 0;
          do {
            iVar1 = *(int *)(in_ECX + 0x88);
            if (*(int *)(iVar1 + 0x1c + iVar5) == *(int *)(in_ECX + 0x18)) {
              uVar2 = param_1[1];
              *(undefined4 *)(iVar1 + 0x18 + iVar5) = *param_1;
              *(undefined4 *)(iVar1 + 0x1c + iVar5) = uVar2;
            }
            iVar5 = iVar5 + 0x40;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        cVar3 = FUN_0042bb00();
        if (cVar3 == '\0') {
          FUN_004d61d0();
        }
        FUN_0043a970();
      }
      if (*(char *)(DAT_012588e8 + 0xd1c) != '\0') {
        uVar2 = *(undefined4 *)(DAT_012588e8 + 0xcf4);
        uVar6 = FUN_0046a6c0(*(undefined4 *)(DAT_012586f4 + 8));
        FUN_00457b00(uVar2,uVar6);
      }
      goto LAB_00427ead;
    }
    FUN_0042b850();
    iVar4 = *(int *)(in_ECX + 0x4c);
    if (iVar4 != *(int *)(in_ECX + 0x50)) {
      do {
        if (*(int *)(iVar4 + 4) == param_1[1]) break;
        iVar4 = iVar4 + 8;
      } while (iVar4 != *(int *)(in_ECX + 0x50));
    }
  }
  else {
    if (*(int *)(param_2 + 4) == *(int *)(in_ECX + 0x18)) {
      for (iVar5 = *(int *)(in_ECX + 0x68);
          (iVar5 != *(int *)(in_ECX + 0x6c) && (*(int *)(iVar5 + 4) != iVar4)); iVar5 = iVar5 + 8) {
      }
    }
    else {
      for (iVar5 = *(int *)(in_ECX + 0x78);
          (iVar5 != *(int *)(in_ECX + 0x7c) && (*(int *)(iVar5 + 4) != iVar4)); iVar5 = iVar5 + 8) {
      }
    }
    FUN_0042ba80();
    iVar4 = *(int *)(in_ECX + 0x4c);
    if (iVar4 != *(int *)(in_ECX + 0x50)) {
      do {
        if (*(int *)(iVar4 + 4) == param_1[1]) break;
        iVar4 = iVar4 + 8;
      } while (iVar4 != *(int *)(in_ECX + 0x50));
    }
  }
  FUN_0042ba80();
LAB_00427ead:
  *(undefined4 *)(in_ECX + 0x5c) = 0x2d2d2d;
  *(undefined4 *)(in_ECX + 0x60) = 0;
  *(undefined1 *)(in_ECX + 100) = 0;
  FUN_004278c0();
  return;
}

