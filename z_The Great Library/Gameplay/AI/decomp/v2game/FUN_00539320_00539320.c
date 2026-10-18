// FUN_00539320 @ 00539320 body=[[00539320, 0053937d]]


uint FUN_00539320(void)

{
  int *piVar1;
  uint in_EAX;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar2 = *(int *)(in_EAX + 0xe90) - *(int *)(in_EAX + 0xe8c) >> 2;
  iVar4 = 0;
  if (0 < iVar2) {
    piVar1 = (int *)(in_EAX + 0xbe8);
    piVar3 = *(int **)(in_EAX + 0xe8c);
    do {
      in_EAX = *(uint *)(*piVar1 + *(int *)(*piVar3 + 0xc) * 4);
      if (*(int *)(in_EAX + 0x30) != 0) {
        return CONCAT31((int3)(in_EAX >> 8),1);
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar4 < iVar2);
  }
  return in_EAX & 0xffffff00;
}

