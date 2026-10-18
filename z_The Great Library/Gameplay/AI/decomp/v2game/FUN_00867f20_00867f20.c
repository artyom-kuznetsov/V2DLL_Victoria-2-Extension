// FUN_00867f20 @ 00867f20 body=[[00867f20, 00867ff1]]


undefined1 FUN_00867f20(void)

{
  int in_EAX;
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(in_EAX + 0x38);
  if (iVar3 < 0) {
    return 1;
  }
  FUN_0099e240(iVar3);
  piVar1 = (int *)FUN_00868600(iVar3);
  if ((int *)*piVar1 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)*piVar1;
  }
  uVar2 = (uint)piVar1[2] >> 2;
  if (*(uint *)(iVar3 + 8) <= uVar2) {
    uVar2 = uVar2 - *(uint *)(iVar3 + 8);
  }
  if (*(int *)(*(int *)(*(int *)(*(int *)(iVar3 + 4) + uVar2 * 4) + (piVar1[2] & 3U) * 4) + 0xa0) <
      0) {
    return 1;
  }
  FUN_008682f0();
  iVar3 = FUN_008676e0();
  if (iVar3 != 0) {
    FUN_008682f0();
    iVar3 = FUN_008676e0();
    if (*(char *)(iVar3 + 0x888) != '\0') {
      return 1;
    }
  }
  FUN_008682f0();
  FUN_008682f0();
  piVar1 = (int *)FUN_008682f0();
  return *(undefined1 *)(*piVar1 + 0x1a4);
}

