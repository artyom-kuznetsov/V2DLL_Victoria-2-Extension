// FUN_004b7a70 @ 004b7a70 body=[[004b7a70, 004b7adc]]


void FUN_004b7a70(void)

{
  int in_EAX;
  int iVar1;
  undefined4 uVar2;
  undefined4 *unaff_EDI;
  undefined8 uVar3;
  
  if (in_EAX < 1) {
    *unaff_EDI = 1000;
    return;
  }
  iVar1 = FUN_004b7ae0();
  uVar3 = __allmul(iVar1 * 1000,iVar1 * 1000 >> 0x1f,1000,0);
  iVar1 = __alldiv(uVar3,in_EAX * 1000,in_EAX * 1000 >> 0x1f);
  uVar3 = __allmul(iVar1,iVar1 >> 0x1f,100000,0);
  uVar2 = __alldiv(uVar3,1000,0);
  *unaff_EDI = uVar2;
  return;
}

