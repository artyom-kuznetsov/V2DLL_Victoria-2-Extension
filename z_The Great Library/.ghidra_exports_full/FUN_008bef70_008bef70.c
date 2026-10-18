// FUN_008bef70 @ 008bef70 body=[[008bef70, 008bf045]]


undefined4 FUN_008bef70(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  undefined8 uVar4;
  
  iVar1 = *(int *)(DAT_012587e4 + 4);
  iVar3 = *(int *)(iVar1 + *(int *)(param_1 + 0xc) * 4);
  if ((*(int *)(iVar3 + 0x9dc) - *(int *)(iVar3 + 0x9d8) & 0xfffffffcU) != 0) {
    iVar3 = *(int *)(iVar1 + *(int *)(param_1 + 0xc) * 4);
    iVar1 = *(int *)(*(int *)(iVar1 + *(int *)(param_1 + 0xc) * 4) + 0xd00);
    iVar2 = iVar1 * 1000;
    iVar3 = (*(int *)(iVar3 + 0x9dc) - *(int *)(iVar3 + 0x9d8) >> 2) * 1000;
    if (iVar3 == 0) {
      iVar3 = -1;
    }
    else if (iVar2 + 0x189373U < 0x39580e) {
      iVar3 = (iVar1 * 1000000) / iVar3;
    }
    else {
      uVar4 = __allmul(iVar2,iVar2 >> 0x1f,1000,0);
      iVar3 = __alldiv(uVar4,iVar3,iVar3 >> 0x1f);
    }
    if (*(int *)(in_ECX + 0x1c) <= iVar3) {
      return 1;
    }
  }
  return 0;
}

