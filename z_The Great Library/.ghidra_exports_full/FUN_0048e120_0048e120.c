// FUN_0048e120 @ 0048e120 body=[[0048e120, 0048e189]]


void FUN_0048e120(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_EAX;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xc) == 0) {
    in_EAX[1] = 0;
    *in_EAX = 0x2d2d2d;
    return;
  }
  iVar1 = **(int **)(in_ECX + 4);
  if ((*(int *)(iVar1 + 0x110) != 0) &&
     (iVar2 = *(int *)(*(int *)(iVar1 + 0x110) + 0x10),
     0 < (int)(*(int *)(iVar2 + 0x38) - *(int *)(iVar2 + 0x34) & 0xfffffff8U))) {
    uVar3 = **(undefined4 **)(iVar2 + 0x34);
    in_EAX[1] = (*(undefined4 **)(iVar2 + 0x34))[1];
    *in_EAX = uVar3;
    return;
  }
  uVar3 = *(undefined4 *)(iVar1 + 0x130);
  in_EAX[1] = *(undefined4 *)(iVar1 + 0x134);
  *in_EAX = uVar3;
  return;
}

