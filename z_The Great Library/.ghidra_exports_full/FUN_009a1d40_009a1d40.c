// FUN_009a1d40 @ 009a1d40 body=[[009a1d40, 009a1dde]]


void FUN_009a1d40(void)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  undefined4 *puVar3;
  undefined8 *unaff_EDI;
  undefined8 uVar4;
  undefined8 uStack_10;
  
  cVar1 = (**(code **)(**(int **)(in_EAX + 0x1c) + 8))();
  if (cVar1 == '\0') {
    if (*(int *)(in_EAX + 0x228) == 399) {
      uVar4 = FUN_00aaf0d0(in_EAX + 0x22c);
      *unaff_EDI = uVar4;
      return;
    }
    puVar3 = (undefined4 *)FUN_0098fdd0(in_EAX + 0x228,&uStack_10);
    *(undefined4 *)unaff_EDI = *puVar3;
    *(undefined4 *)((int)unaff_EDI + 4) = puVar3[1];
    return;
  }
  uStack_10 = 0;
  iVar2 = FID_conflict__sscanf((char *)(in_EAX + 0x22c),"%lld",&uStack_10);
  if (iVar2 == 0) {
    FUN_009a1140();
    return;
  }
  *(undefined4 *)unaff_EDI = (undefined4)uStack_10;
  *(undefined4 *)((int)unaff_EDI + 4) = uStack_10._4_4_;
  return;
}

