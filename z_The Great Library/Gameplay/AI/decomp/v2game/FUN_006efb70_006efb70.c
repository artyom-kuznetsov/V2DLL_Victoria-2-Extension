// FUN_006efb70 @ 006efb70 body=[[006efb70, 006efb99] [006efba0, 006efda4]]


char FUN_006efb70(void)

{
  undefined4 *puVar1;
  char cVar2;
  int *piVar3;
  uint uVar4;
  int in_ECX;
  int iVar5;
  
  cVar2 = FUN_007539f0();
  if (cVar2 != '\0') {
    iVar5 = *(int *)(in_ECX + 0x15c);
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
      if ((*(int *)(in_ECX + 0x15c) != 0) &&
         (iVar5 = *(int *)(in_ECX + 0x15c) + -1, *(int *)(in_ECX + 0x15c) = iVar5, iVar5 == 0)) {
        *(undefined4 *)(in_ECX + 0x158) = 0;
      }
      iVar5 = *(int *)(in_ECX + 0x15c);
    }
    iVar5 = *(int *)(in_ECX + 0x174);
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
      if ((*(int *)(in_ECX + 0x174) != 0) &&
         (iVar5 = *(int *)(in_ECX + 0x174) + -1, *(int *)(in_ECX + 0x174) = iVar5, iVar5 == 0)) {
        *(undefined4 *)(in_ECX + 0x170) = 0;
      }
      iVar5 = *(int *)(in_ECX + 0x174);
    }
    iVar5 = *(int *)(in_ECX + 0x18c);
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
      if ((*(int *)(in_ECX + 0x18c) != 0) &&
         (iVar5 = *(int *)(in_ECX + 0x18c) + -1, *(int *)(in_ECX + 0x18c) = iVar5, iVar5 == 0)) {
        *(undefined4 *)(in_ECX + 0x188) = 0;
      }
      iVar5 = *(int *)(in_ECX + 0x18c);
    }
    iVar5 = *(int *)(in_ECX + 1000);
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
      if ((*(int *)(in_ECX + 1000) != 0) &&
         (iVar5 = *(int *)(in_ECX + 1000) + -1, *(int *)(in_ECX + 1000) = iVar5, iVar5 == 0)) {
        *(undefined4 *)(in_ECX + 0x3e4) = 0;
      }
      iVar5 = *(int *)(in_ECX + 1000);
    }
    FUN_006efdb0(in_ECX);
  }
  return cVar2;
}

