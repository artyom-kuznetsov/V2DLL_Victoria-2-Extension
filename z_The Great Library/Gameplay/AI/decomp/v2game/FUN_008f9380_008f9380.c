// FUN_008f9380 @ 008f9380 body=[[008f9380, 008f9422]]


bool FUN_008f9380(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  undefined8 uVar3;
  
  iVar2 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4) + 0x1430);
  iVar1 = *(int *)(*(int *)(DAT_012586dc + 0x40) + 0x24);
  if (iVar1 == 0) {
    return *(int *)(in_ECX + 0x1c) < 0;
  }
  if (iVar2 + 0x189373U < 0x39580e) {
    return *(int *)(in_ECX + 0x1c) <= (iVar2 * 1000) / iVar1;
  }
  uVar3 = __allmul(iVar2,iVar2 >> 0x1f,1000,0);
  iVar2 = __alldiv(uVar3,iVar1,iVar1 >> 0x1f);
  return *(int *)(in_ECX + 0x1c) <= iVar2;
}

