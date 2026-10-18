// FUN_00520df0 @ 00520df0 body=[[00520df0, 00520e5b]]


void FUN_00520df0(void)

{
  int iVar1;
  int iVar2;
  int *in_EAX;
  int iVar3;
  
  iVar1 = *in_EAX;
  while (iVar2 = iVar1, iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x2c);
    if (((*(int *)(iVar2 + 0x24) != 0) && (*(int *)(iVar2 + 0x18) != 0)) &&
       (iVar3 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar2 + 0x18) * 4),
       0 < (int)(*(int *)(iVar3 + 0x9dc) - *(int *)(iVar3 + 0x9d8) & 0xfffffffcU))) {
      iVar3 = FUN_0057a4c0(*(undefined4 *)(iVar2 + 0x14),*(undefined4 *)(iVar2 + 0x18));
      *(int *)(iVar2 + 0xc) = iVar3 * 1000;
    }
  }
  return;
}

