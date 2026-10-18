// FUN_004568a0 @ 004568a0 body=[[004568a0, 00456b29] [00456b33, 00456b8b]]


void FUN_004568a0(void)

{
  undefined4 *puVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  int *in_ECX;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  char cStack_6d;
  int *local_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int *piStack_5c;
  int iStack_58;
  int iStack_54;
  int *local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  undefined4 *puStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 uStack_20;
  undefined4 uStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b51e18;
  pvStack_14 = ExceptionList;
  local_6c = DAT_012588e8;
  ExceptionList = &pvStack_14;
  local_50 = in_ECX;
  cStack_6d = (**(code **)(*in_ECX + 8))();
  piVar3 = (int *)(**(code **)(*in_ECX + 0xc))();
  iVar6 = *piVar3;
  iVar5 = piVar3[1] - iVar6 >> 2;
  if (0 < iVar5) {
    piStack_5c = piVar3;
    if ((cStack_6d != '\0') && (iVar7 = 0, 0 < iVar5)) {
      do {
        FUN_0093d080(iVar6 + iVar7 * 4);
        if (iStack_54 != in_ECX[3]) {
          FUN_0093d690();
          piVar3 = piStack_5c;
        }
        iVar6 = *piVar3;
        iVar7 = iVar7 + 1;
      } while (iVar7 < piVar3[1] - iVar6 >> 2);
    }
    iStack_30 = (**(code **)(*local_6c + 0x18))();
    iStack_68 = 0;
    if (0 < iStack_30) {
      do {
        iVar6 = iStack_68;
        iStack_54 = *(int *)(local_6c[0x2b3] + iStack_68 * 4);
        cVar2 = (**(code **)(*in_ECX + 0x18))(iStack_54);
        if (cVar2 != '\0') {
          iVar5 = *piStack_5c;
          iStack_60 = 0;
          if (0 < (int)(piStack_5c[1] - iVar5 & 0xfffffffcU)) {
            do {
              iVar6 = *(int *)(iVar5 + iStack_60 * 4);
              iStack_4c = *(int *)(local_6c[0x2b3] + iVar6 * 4);
              cStack_6d = '\0';
              iStack_34 = iVar6;
              FUN_0049b7f0(&iStack_58,iVar6,&cStack_6d);
              iVar5 = iStack_4c;
              if (((cStack_6d != '\0') && (0 < iStack_58)) &&
                 ((**(code **)(*in_ECX + 0x14))(&iStack_48,iStack_4c), iStack_58 <= iStack_48)) {
                iStack_40 = iStack_68;
                iStack_4c = iVar6;
                FUN_0093d080(&iStack_4c);
                iVar6 = iStack_44;
                if ((iStack_44 == in_ECX[3]) ||
                   (FUN_00445430(&iStack_40), iStack_3c == *(int *)(iVar6 + 0x14))) {
                  uVar4 = (**(code **)(*in_ECX + 0x1c))();
                  puStack_2c = (undefined4 *)0x0;
                  uStack_28 = 0;
                  uStack_24 = 0;
                  uStack_20 = 0;
                  uStack_1c = 0;
                  uStack_c = 0;
                  cVar2 = FUN_005b8840(uVar4,iVar5,iStack_54,&puStack_2c);
                  puVar8 = puStack_2c;
                  if (cVar2 != '\0') {
                    FUN_0049b7f0(&iStack_64,*puStack_2c,0);
                    iVar6 = iStack_64;
                    do {
                      puVar1 = (undefined4 *)puVar8[2];
                      if (puVar1 == (undefined4 *)0x0) break;
                      puVar8 = (undefined4 *)puVar1[2];
                      FUN_0049b7f0(&iStack_38,*puVar1,0);
                      iVar6 = iVar6 + iStack_38;
                    } while (puVar8 != (undefined4 *)0x0);
                    iStack_64 = iVar6;
                    FUN_00445260(local_50 + 2,&iStack_34);
                    piVar3 = (int *)FUN_00456b90();
                    *piVar3 = iVar6;
                    in_ECX = local_50;
                  }
                  uStack_c = 0xffffffff;
                  if (puStack_2c != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00aae91b(puStack_2c);
                  }
                  puStack_2c = (undefined4 *)0x0;
                  uStack_28 = 0;
                  uStack_24 = 0;
                }
              }
              iVar5 = *piStack_5c;
              iStack_60 = iStack_60 + 1;
              iVar6 = iStack_68;
            } while (iStack_60 < piStack_5c[1] - iVar5 >> 2);
          }
        }
        iStack_68 = iVar6 + 1;
      } while (iStack_68 < iStack_30);
    }
    (**(code **)(*in_ECX + 0x10))();
  }
  ExceptionList = pvStack_14;
  return;
}

