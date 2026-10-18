// FUN_00884580 @ 00884580 body=[[00884580, 0088494d]]


void FUN_00884580(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  int local_34;
  
  iVar4 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
  iVar2 = FUN_008852b0(in_ECX);
  iVar4 = *(int *)(*(int *)(iVar4 + 0xbe8) + *(int *)(iVar2 + 4) * 4);
  if (DAT_01258a08 == 0) {
    local_34 = *(int *)(iVar4 + 0x48);
  }
  else {
    local_34 = 100000;
  }
  iVar2 = *(int *)(in_ECX + 0x28);
  iVar1 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x3d0);
  iVar7 = iVar1 >> 0x1f;
  if (iVar2 + local_34 < 0) {
    iVar3 = *(int *)(DAT_012587e4 + 4);
    if ((*(char *)(*(int *)(iVar3 + *(int *)(iVar4 + 0xc) * 4) + 0x31) != '\0') ||
       (-1 < *(int *)(iVar4 + 0x40))) {
      iVar6 = 1;
      if (*(char *)(*(int *)(iVar3 + *(int *)(iVar4 + 0xc) * 4) + 0x31) == '\0') {
        iVar6 = *(int *)(iVar4 + 0x40);
      }
      if ((*(char *)(*(int *)(iVar3 + *(int *)(iVar4 + 0xc) * 4) + 0x31) == '\0') &&
         (*(int *)(iVar4 + 0x40) == 5)) {
        uVar5 = *(undefined4 *)(iVar3 + *(int *)(param_1 + 0xc) * 4);
        FUN_008852b0(in_ECX);
        FUN_00533f20(uVar5);
      }
      uVar8 = __allmul(iVar6 * 1000,iVar6 * 1000 >> 0x1f,iVar1,iVar7);
      iVar3 = __alldiv(uVar8,1000,0);
      iVar2 = iVar3 + local_34 + iVar2;
      if (-1 < iVar2) {
        if (iVar1 == 0) {
          iVar3 = -1;
        }
        else if (iVar2 + 0x189373U < 0x39580e) {
          iVar3 = (iVar2 * 1000) / iVar1;
        }
        else {
          uVar8 = __allmul(iVar2,iVar2 >> 0x1f,1000,0);
          iVar3 = __alldiv(uVar8,iVar1,iVar7);
        }
        iVar3 = iVar3 / 1000;
        if (iVar3 != *(int *)(iVar4 + 0x40)) {
          *(undefined4 *)(iVar4 + 0x44) = *(undefined4 *)(DAT_012588e8 + 0xb0c);
        }
        *(int *)(iVar4 + 0x40) = iVar3;
        uVar8 = __allmul(iVar3 * 1000,iVar3 * 1000 >> 0x1f,iVar1,iVar7);
        iVar4 = __alldiv(uVar8,1000,0);
        FUN_0092f570(iVar2 - iVar4);
        return;
      }
      if (*(int *)(iVar4 + 0x40) != 0) {
        *(undefined4 *)(iVar4 + 0x44) = *(undefined4 *)(DAT_012588e8 + 0xb0c);
      }
      *(undefined4 *)(iVar4 + 0x40) = 0;
      return;
    }
  }
  else if (iVar1 < iVar2 + local_34) {
    iVar3 = *(int *)(DAT_012587e4 + 4);
    if (*(char *)(*(int *)(iVar3 + *(int *)(iVar4 + 0xc) * 4) + 0x31) == '\0') {
      iVar6 = *(int *)(iVar4 + 0x40);
      if (4 < iVar6) goto LAB_008848f9;
    }
    else {
      iVar6 = 1;
    }
    uVar8 = __allmul(iVar6 * 1000,iVar6 * 1000 >> 0x1f,iVar1,iVar7);
    iVar6 = __alldiv(uVar8,1000,0);
    iVar2 = iVar6 + local_34 + iVar2;
    if (iVar1 == 0) {
      iVar6 = -1;
    }
    else if (iVar2 + 0x189373U < 0x39580e) {
      iVar6 = (iVar2 * 1000) / iVar1;
    }
    else {
      uVar8 = __allmul(iVar2,iVar2 >> 0x1f,1000,0);
      iVar6 = __alldiv(uVar8,iVar1,iVar7);
    }
    iVar6 = iVar6 / 1000;
    if (4 < iVar6) {
      uVar5 = *(undefined4 *)(iVar3 + *(int *)(param_1 + 0xc) * 4);
      FUN_008852b0(in_ECX);
      FUN_00533e50(uVar5);
      if (5 < iVar6) {
        iVar6 = 5;
      }
    }
    if (iVar6 != *(int *)(iVar4 + 0x40)) {
      *(undefined4 *)(iVar4 + 0x44) = *(undefined4 *)(DAT_012588e8 + 0xb0c);
    }
    *(int *)(iVar4 + 0x40) = iVar6;
    uVar8 = __allmul(iVar6 * 1000,iVar6 * 1000 >> 0x1f,iVar1,iVar7);
    iVar4 = __alldiv(uVar8,1000,0);
    FUN_0092f570(iVar2 - iVar4);
    return;
  }
LAB_008848f9:
  uVar5 = FUN_008852b0(in_ECX);
  FUN_008852b0(in_ECX);
  FUN_0092f5b0(iVar2,uVar5);
  return;
}

