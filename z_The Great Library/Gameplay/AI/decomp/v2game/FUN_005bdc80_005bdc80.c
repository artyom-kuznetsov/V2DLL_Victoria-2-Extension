// FUN_005bdc80 @ 005bdc80 body=[[005bdc80, 005bdd44]]


void FUN_005bdc80(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_EAX;
  undefined4 uVar5;
  int iVar6;
  undefined4 *unaff_EDI;
  
  cVar1 = *(char *)(in_EAX + 0x39);
  *unaff_EDI = 0;
  if (cVar1 != '\0') {
    uVar5 = __alldiv((longlong)*(int *)(in_EAX + 0x238) *
                     (longlong)
                     (*(int *)(in_EAX + 0x22c) +
                     *(int *)(in_EAX + 0x228) +
                     *(int *)(in_EAX + 0x240) +
                     *(int *)(in_EAX + 0x23c) + *(int *)(in_EAX + 0x234) + *(int *)(in_EAX + 0x230))
                     ,1000,0);
    *unaff_EDI = uVar5;
    return;
  }
  if (*(char *)(in_EAX + 0x38) == '\0') {
    iVar2 = *(int *)(in_EAX + 0x244);
    iVar3 = *(int *)(in_EAX + 0x25c);
    iVar4 = *(int *)(in_EAX + 0x248);
    FUN_00401000(0x447a1fff);
    iVar6 = FUN_00b31c00();
    uVar5 = __alldiv((longlong)(iVar2 + iVar3 + iVar4) *
                     (longlong)(*(int *)(in_EAX + 0x250) + *(int *)(in_EAX + 0x24c) + iVar6),1000,0)
    ;
    *unaff_EDI = uVar5;
  }
  return;
}

