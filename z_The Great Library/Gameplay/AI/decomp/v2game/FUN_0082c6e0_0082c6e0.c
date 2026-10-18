// FUN_0082c6e0 @ 0082c6e0 body=[[0082c6e0, 0082c7e2]]


uint FUN_0082c6e0(void)

{
  int iVar1;
  uint in_EAX;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  
  uVar3 = in_EAX;
  if ((1 < *(int *)(in_EAX + 0xb4)) &&
     (uVar2 = (**(code **)(*(int *)**(undefined4 **)(in_EAX + 0xac) + 0x2c))(), uVar3 = uVar2,
     *(char *)(uVar2 + 0x104) == '\0')) {
    piVar5 = *(int **)(in_EAX + 0xac);
    uVar3 = 0;
    if (piVar5 != (int *)0x0) {
      do {
        iVar1 = *piVar5;
        piVar5 = (int *)piVar5[2];
        if (*(int *)(*(int *)(iVar1 + 0xdc) + 0xe8) == *(int *)(*(int *)(uVar2 + 0xdc) + 0xe8)) {
LAB_0082c78b:
          uVar3 = uVar3 + *(int *)(iVar1 + 0x98);
        }
        else {
          if (*(int *)(iVar1 + 0xa0) == 0) {
            if (*(int *)(iVar1 + 0xec) < 1) {
              iVar4 = 0;
            }
            else {
              iVar4 = *(int *)(*(int *)(DAT_0125870c + 0x2238) + **(int **)(iVar1 + 0xe8) * 4);
            }
          }
          else {
            iVar4 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(iVar1 + 0xa0) * 4);
          }
          if (iVar4 == *(int *)(uVar2 + 0xdc)) goto LAB_0082c78b;
        }
      } while (piVar5 != (int *)0x0);
    }
    if ((int)uVar3 < 2) {
      uVar3 = 1;
    }
    if ((float)*(int *)(uVar2 + 0x98) / (float)(int)uVar3 < 0.33) {
      return CONCAT31((int3)(uVar3 >> 8),1);
    }
  }
  return uVar3 & 0xffffff00;
}

