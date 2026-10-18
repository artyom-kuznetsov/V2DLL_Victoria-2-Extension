// FUN_0052fc10 @ 0052fc10 body=[[0052fc10, 0052fcc0]]


uint FUN_0052fc10(void)

{
  int iVar1;
  char cVar2;
  int in_EAX;
  uint uVar3;
  int iVar4;
  
  cVar2 = (**(code **)(**(int **)(in_EAX + 0xbd0) + 0x2c))();
  if (cVar2 == '\0') {
    return 0;
  }
  cVar2 = (**(code **)(**(int **)(*(int *)(in_EAX + 0x154c) +
                                 *(int *)(*(int *)(in_EAX + 0xbd0) + 0x40) * 4) + 0x2c))();
  iVar4 = DAT_012589b8;
  iVar1 = *(int *)(in_EAX + 0x20);
  if (cVar2 == '\0') {
    uVar3 = (**(code **)(*(int *)(DAT_012589b8 + 0x6bdac) + 4))(*(int *)(in_EAX + 0xbd0) + 0x24);
    iVar4 = *(int *)(iVar4 + 0x6bd6c);
  }
  else {
    uVar3 = (**(code **)(*(int *)(DAT_012589b8 + 0x6bdac) + 4))
                      (*(int *)(*(int *)(in_EAX + 0x154c) +
                               *(int *)(*(int *)(in_EAX + 0xbd0) + 0x40) * 4) + 0x24);
    iVar4 = *(int *)(iVar4 + 0x6bd6c);
  }
  return ~-(uint)(*(int *)(*(int *)(*(int *)(iVar4 + uVar3 * 4) + 0x24) + iVar1 * 4) != 1) & uVar3;
}

