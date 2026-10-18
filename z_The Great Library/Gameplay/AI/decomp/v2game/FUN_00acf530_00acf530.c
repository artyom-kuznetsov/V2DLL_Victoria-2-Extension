// FUN_00acf530 @ 00acf530 body=[[00acf530, 00acf5b7]]


void FUN_00acf530(int param_1,char param_2)

{
  void *_Dst;
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int in_ECX;
  int *piVar4;
  
  uVar2 = 0;
  if (*(uint *)(in_ECX + 0x160) != 0) {
    piVar4 = *(int **)(in_ECX + 0x15c);
    do {
      if (*piVar4 == param_1) goto LAB_00acf55f;
      uVar2 = uVar2 + 1;
      piVar4 = piVar4 + 1;
    } while (uVar2 < *(uint *)(in_ECX + 0x160));
  }
  uVar2 = 0xffffffff;
LAB_00acf55f:
  if ((param_2 != '\0') &&
     (puVar1 = *(undefined4 **)(*(int *)(in_ECX + 0x15c) + uVar2 * 4), puVar1 != (undefined4 *)0x0))
  {
    (**(code **)*puVar1)(1);
  }
  if ((1 < *(uint *)(in_ECX + 0x160)) &&
     (iVar3 = (*(uint *)(in_ECX + 0x160) - uVar2) + -1, iVar3 != 0)) {
    _Dst = (void *)(*(int *)(in_ECX + 0x15c) + uVar2 * 4);
    FID_conflict__memcpy(_Dst,(void *)((int)_Dst + 4),iVar3 * 4);
  }
  *(int *)(in_ECX + 0x160) = *(int *)(in_ECX + 0x160) + -1;
  return;
}

