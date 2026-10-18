// FUN_0085cd40 @ 0085cd40 body=[[0085cd40, 0085cf0a]]


void FUN_0085cd40(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar6;
  undefined8 uVar7;
  int iVar5;
  
  if (*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4) + 0x228) == 0) {
    *(undefined4 *)(param_1 + 0x1c) = 4;
  }
  else {
    *(undefined4 *)(param_1 + 0x1c) =
         *(undefined4 *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4) + 0x228)
    ;
  }
  if (*(char *)(param_1 + 0x19) == '\0') {
    FUN_00401000(0x3f000000);
    iVar1 = FUN_00b31c00();
    iVar6 = iVar1 * 3;
    if (iVar6 < 1000) {
      iVar6 = 1000;
    }
    FUN_00401000(0x43c84000);
    iVar2 = FUN_00b31c00();
    *(undefined4 *)(param_1 + 0x1c) = 4;
    iVar4 = iVar1 >> 0x1f;
    iVar5 = iVar6 >> 0x1f;
    if (iVar6 == 0) {
      iVar3 = -1;
    }
    else if (iVar1 + 0x189373U < 0x39580e) {
      iVar3 = (iVar1 * 1000) / iVar6;
    }
    else {
      uVar7 = __allmul(iVar1,iVar4,1000,0);
      iVar3 = __alldiv(uVar7,iVar6,iVar5);
    }
    if (iVar2 <= iVar3) {
      *(undefined4 *)(param_1 + 0x1c) = 1;
      return;
    }
    if (iVar6 == 0) {
      iVar3 = -1;
    }
    else if (iVar1 + 0x189373U < 0x39580e) {
      iVar3 = (iVar1 * 1000) / iVar6;
    }
    else {
      uVar7 = __allmul(iVar1,iVar4,1000,0);
      iVar3 = __alldiv(uVar7,iVar6,iVar5);
    }
    if (iVar2 <= iVar3) {
      *(undefined4 *)(param_1 + 0x1c) = 3;
      return;
    }
    if (iVar6 == 0) {
      iVar6 = -1;
    }
    else if (iVar1 + 0x189373U < 0x39580e) {
      iVar6 = (iVar1 * 1000) / iVar6;
    }
    else {
      uVar7 = __allmul(iVar1,iVar4,1000,0);
      iVar6 = __alldiv(uVar7,iVar6,iVar5);
    }
    if (iVar2 <= iVar6) {
      *(undefined4 *)(param_1 + 0x1c) = 2;
    }
  }
  return;
}

