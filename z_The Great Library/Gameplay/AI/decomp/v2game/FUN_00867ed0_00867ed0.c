// FUN_00867ed0 @ 00867ed0 body=[[00867ed0, 00867f1b]]


undefined4 FUN_00867ed0(void)

{
  int in_EAX;
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  iVar1 = in_EAX + -1;
  FUN_0099e240(iVar1);
  piVar2 = (int *)FUN_00868600(iVar1);
  if ((int *)*piVar2 == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)*piVar2;
  }
  uVar3 = (uint)piVar2[2] >> 2;
  if (*(uint *)(iVar1 + 8) <= uVar3) {
    uVar3 = uVar3 - *(uint *)(iVar1 + 8);
  }
  return *(undefined4 *)(*(int *)(*(int *)(iVar1 + 4) + uVar3 * 4) + (piVar2[2] & 3U) * 4);
}

