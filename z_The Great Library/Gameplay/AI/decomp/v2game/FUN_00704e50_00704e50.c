// FUN_00704e50 @ 00704e50 body=[[00704e50, 00704e96]]


int FUN_00704e50(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  FUN_00816010();
  piVar1 = (int *)FUN_00705450();
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
  return *(int *)(*(int *)(iVar3 + 4) + uVar2 * 4) + (piVar1[2] & 3U) * 4;
}

