// FUN_005cd6f0 @ 005cd6f0 body=[[005cd6f0, 005cd84e]]


int * FUN_005cd6f0(int *param_1,int param_2)

{
  int in_EAX;
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  
  FUN_00401000(0x3f000000);
  iVar1 = FUN_00b31c00();
  *param_1 = iVar1;
  piVar2 = *(int **)(in_EAX + 0x38);
  if (piVar2 != (int *)0x0) {
    iVar1 = *param_1;
    do {
      iVar4 = *piVar2;
      piVar2 = (int *)piVar2[2];
      iVar1 = iVar1 + *(int *)(iVar4 + 0x3c);
    } while (piVar2 != (int *)0x0);
    *param_1 = iVar1;
  }
  if (0 < *param_1) {
    iVar1 = *(int *)(*(int *)(in_EAX + 0xdc) + 0x58);
    if (iVar1 != *(int *)(param_2 + 0x58)) {
      iVar1 = *(int *)(*(int *)(DAT_0125870c + 0x2aa4) + iVar1 * 4);
      iVar4 = *(int *)(*(int *)(DAT_0125870c + 0x2aa4) + *(int *)(param_2 + 0x58) * 4);
      uVar3 = *(int *)(iVar1 + 0x34) - *(int *)(iVar4 + 0x34);
      iVar4 = *(int *)(iVar1 + 0x38) - *(int *)(iVar4 + 0x38);
      iVar1 = (uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f);
      if (*(int *)(DAT_0125870c + 0x2abc) / 2 < iVar1) {
        uVar3 = *(int *)(DAT_0125870c + 0x2abc) - iVar1;
      }
      iVar1 = iVar4 * iVar4 + uVar3 * uVar3;
      iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 0xfU)) >> 4;
      if (iVar1 < 100) {
        if (iVar1 < 0x1f) {
          iVar1 = 0x1e;
        }
      }
      else {
        iVar1 = 100;
      }
      iVar4 = (iVar1 + -0x1e) * 1000;
      if (iVar4 + 0x189373U < 0x39580e) {
        iVar1 = ((iVar1 + -0x1e) * 1000000) / 70000;
      }
      else {
        uVar5 = __allmul(iVar4,iVar4 >> 0x1f,1000,0);
        iVar1 = __alldiv(uVar5,70000,0);
      }
      iVar1 = __alldiv((longlong)*param_1 * (longlong)(1000 - iVar1),1000,0);
      *param_1 = iVar1;
    }
  }
  return param_1;
}

