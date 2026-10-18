// FUN_004da800 @ 004da800 body=[[004da800, 004da842]]


void FUN_004da800(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  int unaff_ESI;
  undefined4 unaff_EDI;
  
  iVar3 = 0;
  if (in_EAX != 0) {
    iVar2 = *(int *)(in_EAX + 0x60);
    do {
      iVar1 = iVar2;
      if (iVar1 == 0) goto LAB_004da827;
      iVar2 = *(int *)(iVar1 + 0x224);
    } while (*(int *)(iVar1 + 0x18) != unaff_ESI);
    iVar3 = *(int *)(iVar1 + 0x20);
  }
LAB_004da827:
  FUN_004da850(unaff_ESI,unaff_EDI,param_1,param_2,param_3,iVar3 + 1);
  return;
}

