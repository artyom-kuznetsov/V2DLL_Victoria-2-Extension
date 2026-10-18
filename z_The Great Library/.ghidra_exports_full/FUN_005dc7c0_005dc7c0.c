// FUN_005dc7c0 @ 005dc7c0 body=[[005dc7c0, 005dc8af]]


int FUN_005dc7c0(undefined4 param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  undefined4 *in_EAX;
  int iVar4;
  int iVar5;
  
  piVar1 = (int *)*in_EAX;
  iVar5 = 0;
  while (piVar1 != (int *)0x0) {
    piVar2 = (int *)*piVar1;
    piVar1 = (int *)piVar1[2];
    cVar3 = (**(code **)(*piVar2 + 0x3c))();
    if (((cVar3 == '\0') &&
        (iVar4 = *(int *)(*(int *)(DAT_012587e4 + 4) + piVar2[0x31] * 4),
        param_2 != *(int *)(iVar4 + 0x20))) &&
       (((*(int *)(*(int *)(*(int *)(iVar4 + 0xbe8) + param_2 * 4) + 0x34) != 0 ||
         ((((char)param_1 == 'R' && (param_1._1_1_ == 'E')) && (param_1._2_1_ == 'B')))) ||
        (((*(char *)(iVar4 + 0x1c) == 'R' && (*(char *)(iVar4 + 0x1d) == 'E')) &&
         (*(char *)(iVar4 + 0x1e) == 'B')))))) {
      FUN_00401000(0x3f000000);
      iVar4 = FUN_00b31c00();
      for (piVar2 = (int *)piVar2[0xe]; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
        iVar4 = iVar4 + *(int *)(*piVar2 + 0x3c);
      }
      iVar5 = iVar5 + iVar4;
    }
  }
  return iVar5 / 1000;
}

