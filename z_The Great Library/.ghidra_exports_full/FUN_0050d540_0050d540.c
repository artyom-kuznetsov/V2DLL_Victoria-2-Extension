// FUN_0050d540 @ 0050d540 body=[[0050d540, 0050d6f3]]


int FUN_0050d540(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  iVar4 = DAT_012586dc;
  iVar2 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x46c);
  if (DAT_012586f3 != '\0') {
    FUN_00401000(0x47c35040);
    iVar2 = FUN_00b31c00();
  }
  iVar3 = *(int *)(*(int *)(in_EAX + 0xa60) + 0x358);
  iVar1 = *(int *)(*(int *)(in_EAX + 0xbcc) + 0x58);
  iVar2 = __alldiv((longlong)*(int *)(param_1 + 0x1d0) * (longlong)iVar2,1000,0);
  iVar2 = __alldiv((longlong)iVar2 * (longlong)(iVar1 + iVar3 + 1000),1000,0);
  iVar3 = FUN_00540ad0(param_2,(int)&param_1 + 3);
  if (iVar3 != 0) {
    iVar4 = *(int *)(iVar4 + 0x30);
    iVar2 = __alldiv((longlong)(*(int *)(iVar4 + 0x470) + 1000) * (longlong)iVar2,1000,0);
    if (param_1._3_1_ != '\0') {
      iVar2 = __alldiv((longlong)(*(int *)(iVar4 + 0x474) + 1000) * (longlong)iVar2,1000,0);
    }
  }
  iVar4 = 0;
  if ((((*(int *)(in_EAX + 0x156c) != 0) &&
       (iVar3 = *(int *)(*(int *)(in_EAX + 0xbe8) + *(int *)(*(int *)(in_EAX + 0x156c) + 0x14) * 4),
       iVar3 != 0)) && (iVar3 = *(int *)(iVar3 + 0x34), iVar3 != 0)) &&
     (*(char *)(iVar3 + 0xfc) != '\0')) {
    iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x4a0);
  }
  iVar3 = 100000 - param_3;
  iVar2 = __alldiv((longlong)(iVar4 + 1000) * (longlong)iVar2,1000,0);
  if (iVar2 == 0) {
    iVar2 = -1;
  }
  else if ((iVar3 < -0x189373) || (0x20c49a < iVar3)) {
    uVar5 = __allmul(iVar3,iVar3 >> 0x1f,1000,0);
    iVar2 = __alldiv(uVar5,iVar2,iVar2 >> 0x1f);
  }
  else {
    iVar2 = (iVar3 * 1000) / iVar2;
  }
  FUN_00401000(0x43fa4001);
  iVar4 = FUN_00b31c00();
  return (iVar4 + iVar2) / 1000;
}

