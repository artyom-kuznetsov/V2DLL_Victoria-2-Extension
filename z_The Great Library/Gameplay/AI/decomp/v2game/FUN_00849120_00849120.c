// FUN_00849120 @ 00849120 body=[[00849120, 0084919f]]


int FUN_00849120(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  int in_ECX;
  int iVar3;
  undefined1 local_68 [100];
  
  iVar3 = in_ECX - in_EAX;
  iVar1 = iVar3 / 100;
  iVar2 = iVar1;
  while (1 < iVar2) {
    FUN_00849680();
    FUN_00849680();
    iVar3 = iVar3 + -100;
    FUN_008497a0(iVar3 / 100,local_68,param_1);
    iVar1 = iVar3 * 0x51eb851f;
    iVar2 = iVar3 / 100;
  }
  return iVar1;
}

