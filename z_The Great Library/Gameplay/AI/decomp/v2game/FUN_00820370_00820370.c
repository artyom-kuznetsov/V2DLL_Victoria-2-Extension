// FUN_00820370 @ 00820370 body=[[00820370, 008204b2]]


int FUN_00820370(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_EAX + 0x34) * 4);
  iVar5 = *(int *)(*(int *)(DAT_012586dc + 0x20) + 0xa4);
  iVar2 = FUN_0081eab0();
  iVar2 = __alldiv((longlong)(*(int *)(iVar2 + 0xa8) * 1000) * (longlong)iVar5,1000,0);
  iVar5 = *(int *)(*(int *)(DAT_012586dc + 0x20) + 0x9c);
  iVar3 = FUN_0081eab0();
  iVar3 = __alldiv((longlong)(*(int *)(iVar3 + 0xa8) * 1000) * (longlong)iVar5,1000,0);
  iVar5 = *(int *)(*(int *)(DAT_012586dc + 0x20) + 0xa0);
  iVar4 = FUN_0081eab0();
  iVar5 = __alldiv((longlong)(*(int *)(iVar4 + 0xa8) * 1000) * (longlong)iVar5,1000,0);
  iVar5 = iVar3 + iVar2 + iVar5;
  if (iVar5 != 0) {
    iVar1 = *(int *)(iVar1 + 0x160);
    iVar2 = iVar1 * 1000;
    if (iVar5 == 0) {
      iVar5 = -1;
    }
    else if (iVar2 + 0x189373U < 0x39580e) {
      iVar5 = (iVar1 * 1000000) / iVar5;
    }
    else {
      uVar6 = __allmul(iVar2,iVar2 >> 0x1f,1000,0);
      iVar5 = __alldiv(uVar6,iVar5,iVar5 >> 0x1f);
    }
    return iVar5 / 1000;
  }
  return 0;
}

