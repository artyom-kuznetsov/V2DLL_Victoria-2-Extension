// FUN_009a1ce0 @ 009a1ce0 body=[[009a1ce0, 009a1d3c]]


void FUN_009a1ce0(void)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  undefined4 *unaff_EDI;
  undefined4 local_8;
  
  cVar1 = (**(code **)(**(int **)(in_EAX + 0x1c) + 8))();
  if (cVar1 == '\0') {
    cVar1 = FUN_0098fc80(in_EAX + 0x228,unaff_EDI);
    if (cVar1 != '\0') {
      return;
    }
  }
  else {
    local_8 = 0;
    iVar2 = FID_conflict__sscanf((char *)(in_EAX + 0x22c),"%i",&local_8);
    if (iVar2 != 0) {
      *unaff_EDI = local_8;
      return;
    }
  }
  FUN_009a1140();
  return;
}

