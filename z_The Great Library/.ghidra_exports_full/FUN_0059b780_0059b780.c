// FUN_0059b780 @ 0059b780 body=[[0059b780, 0059b833]]


bool FUN_0059b780(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_EDX;
  
  iVar3 = *(int *)(in_EDX + 0x38);
  if ((*(int *)(in_EDX + 0x74) == 0) || (*(char *)(*(int *)(in_EDX + 0x74) + 0x164) == '\0')) {
    iVar2 = *(int *)(in_EDX + 0x40);
  }
  else {
    iVar2 = 0;
  }
  iVar4 = *(int *)(in_EDX + 0x3c);
  iVar3 = __alldiv((longlong)iVar2 *
                   (longlong)
                   (*(int *)(iVar3 + 0x230) + *(int *)(iVar3 + 0x234) + *(int *)(iVar3 + 0x240)),
                   1000,0);
  iVar2 = __alldiv((longlong)iVar3 * (longlong)iVar4,1000,0);
  iVar3 = *(int *)(in_EAX + 0x38);
  if ((*(int *)(in_EAX + 0x74) == 0) || (*(char *)(*(int *)(in_EAX + 0x74) + 0x164) == '\0')) {
    iVar4 = *(int *)(in_EAX + 0x40);
  }
  else {
    iVar4 = 0;
  }
  iVar1 = *(int *)(in_EAX + 0x3c);
  iVar3 = __alldiv((longlong)iVar4 *
                   (longlong)
                   (*(int *)(iVar3 + 0x230) + *(int *)(iVar3 + 0x234) + *(int *)(iVar3 + 0x240)),
                   1000,0);
  iVar3 = __alldiv((longlong)iVar3 * (longlong)iVar1,1000,0);
  return iVar2 < iVar3;
}

