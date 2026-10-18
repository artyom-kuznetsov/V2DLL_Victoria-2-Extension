// FUN_0061bf70 @ 0061bf70 body=[[0061bf70, 0061bf99] [0061bfa0, 0061c0a4]]


char FUN_0061bf70(void)

{
  undefined4 *puVar1;
  char cVar2;
  int *piVar3;
  uint uVar4;
  int in_ECX;
  int iVar5;
  
  cVar2 = FUN_007539f0();
  if (cVar2 != '\0') {
    iVar5 = *(int *)(in_ECX + 0xd4);
    while (iVar5 != 0) {
      FUN_00816010();
      piVar3 = (int *)FUN_00705450();
      if ((int *)*piVar3 == (int *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)*piVar3;
      }
      uVar4 = (uint)piVar3[2] >> 2;
      if (*(uint *)(iVar5 + 8) <= uVar4) {
        uVar4 = uVar4 - *(uint *)(iVar5 + 8);
      }
      puVar1 = *(undefined4 **)(*(int *)(*(int *)(iVar5 + 4) + uVar4 * 4) + (piVar3[2] & 3U) * 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      if ((*(int *)(in_ECX + 0xd4) != 0) &&
         (iVar5 = *(int *)(in_ECX + 0xd4) + -1, *(int *)(in_ECX + 0xd4) = iVar5, iVar5 == 0)) {
        *(undefined4 *)(in_ECX + 0xd0) = 0;
      }
      iVar5 = *(int *)(in_ECX + 0xd4);
    }
    iVar5 = *(int *)(in_ECX + 0xec);
    while (iVar5 != 0) {
      FUN_00816010();
      piVar3 = (int *)FUN_00705450();
      if ((int *)*piVar3 == (int *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)*piVar3;
      }
      uVar4 = (uint)piVar3[2] >> 2;
      if (*(uint *)(iVar5 + 8) <= uVar4) {
        uVar4 = uVar4 - *(uint *)(iVar5 + 8);
      }
      puVar1 = *(undefined4 **)(*(int *)(*(int *)(iVar5 + 4) + uVar4 * 4) + (piVar3[2] & 3U) * 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      if ((*(int *)(in_ECX + 0xec) != 0) &&
         (iVar5 = *(int *)(in_ECX + 0xec) + -1, *(int *)(in_ECX + 0xec) = iVar5, iVar5 == 0)) {
        *(undefined4 *)(in_ECX + 0xe8) = 0;
      }
      iVar5 = *(int *)(in_ECX + 0xec);
    }
    FUN_00622270(in_ECX);
  }
  return cVar2;
}

