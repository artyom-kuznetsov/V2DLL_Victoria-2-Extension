// FUN_005dc8b0 @ 005dc8b0 body=[[005dc8b0, 005dc93a]]


int FUN_005dc8b0(undefined4 param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  undefined4 *in_EAX;
  int iVar5;
  
  piVar1 = (int *)*in_EAX;
  iVar5 = 0;
  while (piVar1 != (int *)0x0) {
    piVar2 = (int *)*piVar1;
    piVar1 = (int *)piVar1[2];
    cVar4 = (**(code **)(*piVar2 + 0x3c))();
    if (((cVar4 == '\0') &&
        (iVar3 = *(int *)(*(int *)(DAT_012587e4 + 4) + piVar2[0x31] * 4),
        param_2 != *(int *)(iVar3 + 0x20))) &&
       (((*(int *)(*(int *)(*(int *)(iVar3 + 0xbe8) + param_2 * 4) + 0x34) != 0 ||
         ((((char)param_1 == 'R' && (param_1._1_1_ == 'E')) && (param_1._2_1_ == 'B')))) ||
        (((*(char *)(iVar3 + 0x1c) == 'R' && (*(char *)(iVar3 + 0x1d) == 'E')) &&
         (*(char *)(iVar3 + 0x1e) == 'B')))))) {
      iVar5 = iVar5 + piVar2[0x10];
    }
  }
  return iVar5;
}

