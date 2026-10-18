// FUN_00868000 @ 00868000 body=[[00868000, 00868070]]


undefined4 FUN_00868000(void)

{
  int *piVar1;
  uint uVar2;
  int in_ECX;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = *(undefined4 *)(in_ECX + 0x38);
  FUN_0099e240(uVar4);
  piVar1 = (int *)FUN_00868600(uVar4);
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
  uVar4 = *(undefined4 *)
           (*(int *)(*(int *)(*(int *)(iVar3 + 4) + uVar2 * 4) + (piVar1[2] & 3U) * 4) + 0xa4);
  FUN_00867ce0(in_ECX);
  FUN_00867990(in_ECX);
  FUN_00867dd0(in_ECX,*(undefined4 *)(in_ECX + 0x38),uVar4);
  return 1;
}

