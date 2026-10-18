// FUN_0093aa90 @ 0093aa90 body=[[0093aa90, 0093ac48]]


undefined4 FUN_0093aa90(int param_1,int param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  char cVar7;
  
  iVar1 = *(int *)(DAT_012587e4 + 4);
  iVar2 = *(int *)(iVar1 + *(int *)(param_1 + 4) * 4);
  iVar3 = *(int *)(param_2 + 4);
  iVar4 = *(int *)(*(int *)(iVar2 + 0xbe8) + iVar3 * 4);
  if ((((((*(char *)(iVar2 + 0xcf5) != '\0') || (*(char *)(iVar2 + 0xcf4) != '\0')) ||
        (cVar7 = FUN_00534000(), cVar7 == '\0')) &&
       (((iVar5 = *(int *)(iVar1 + *(int *)(param_2 + 4) * 4), *(char *)(iVar5 + 0xcf5) == '\0' &&
         (*(char *)(iVar5 + 0xcf4) == '\0')) || (param_3 == '\0')))) &&
      ((*(int *)(iVar4 + 0x28) == 0 ||
       (*(int *)(*(int *)(iVar4 + 0x28) + 0xc) != *(int *)(iVar4 + 0xc))))) &&
     ((((*(int *)(*(int *)(DAT_012588e8 + 0xcf8) + 8) == 0 ||
        ((cVar7 = FUN_0042b220(), cVar7 == '\0' && (cVar7 = FUN_0042b220(), cVar7 == '\0')))) &&
       ((*(int *)(iVar4 + 0x20) == 0 ||
        (((*(char *)(iVar2 + 0xcf5) != '\0' || (*(char *)(iVar2 + 0xcf4) != '\0')) &&
         (*(int *)(iVar2 + 0xcfc) == iVar3)))))) && (*(char *)(iVar4 + 0x70) == '\0')))) {
    if (*(char *)(DAT_012588e8 + 0xd11) != '\0') {
      return 1;
    }
    piVar6 = *(int **)(*(int *)(iVar1 + *(int *)(param_1 + 4) * 4) + 0x7b4);
    do {
      if (piVar6 == (int *)0x0) {
        if ((*(int *)(iVar2 + 0x142c) != 0) && (cVar7 = FUN_0042bb00(), cVar7 != '\0')) {
          return 0;
        }
        if (param_3 == '\0') {
          return 1;
        }
        cVar7 = FUN_0092ede0(iVar4,param_1,param_2);
        if (cVar7 == '\0') {
          return 0;
        }
        return 1;
      }
      iVar1 = *piVar6;
      piVar6 = (int *)piVar6[2];
    } while (*(int *)(*(int *)(iVar1 + 0xdc) + 300) != iVar3);
  }
  return 0;
}

