// FUN_0048e320 @ 0048e320 body=[[0048e320, 0048e3a2]]


uint FUN_0048e320(void)

{
  int *piVar1;
  int iVar2;
  uint in_EAX;
  int iVar3;
  int in_ECX;
  undefined4 *puVar4;
  
  puVar4 = *(undefined4 **)(in_EAX + 0x14);
  if (puVar4 != (undefined4 *)0x0) {
    do {
      piVar1 = (int *)*puVar4;
      puVar4 = (undefined4 *)puVar4[2];
      if (*(int *)(*piVar1 + 0xc) == 0) {
        in_EAX = 0;
      }
      else {
        iVar3 = **(int **)(*piVar1 + 4);
        iVar2 = *(int *)(iVar3 + 0x110);
        if ((iVar2 == 0) ||
           (iVar2 = *(int *)(iVar2 + 0x10),
           (int)(*(int *)(iVar2 + 0x38) - *(int *)(iVar2 + 0x34) & 0xfffffff8U) < 1)) {
          iVar3 = iVar3 + 0x130;
        }
        else {
          iVar3 = *(int *)(iVar2 + 0x34);
        }
        in_EAX = *(uint *)(iVar3 + 4);
      }
      if (in_EAX == *(uint *)(in_ECX + 4)) {
        return CONCAT31((int3)(in_EAX >> 8),1);
      }
    } while (puVar4 != (undefined4 *)0x0);
  }
  return in_EAX & 0xffffff00;
}

