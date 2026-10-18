// FUN_00b247a0 @ 00b247a0 body=[[00b247a0, 00b2485e]]


int FUN_00b247a0(char *param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int in_EAX;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  pcVar4 = (char *)FUN_00ab4790(param_1,0x2e);
  iVar3 = *(int *)(in_EAX + 0x14);
  iVar8 = *(int *)(in_EAX + 0x10) + -1;
  if (pcVar4 != (char *)0x0) {
    pcVar1 = pcVar4 + 1;
    do {
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    if (4 < (uint)((int)pcVar4 - (int)pcVar1)) goto LAB_00b24839;
  }
  iVar6 = 0;
  pcVar4 = param_1;
  do {
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  if ((uint)((int)pcVar4 - (int)(param_1 + 1)) < 0xd) {
    iVar5 = FUN_00ab4790(param_1,0x2f);
    if ((iVar5 == 0) && (-1 < iVar8)) {
      do {
        iVar7 = (iVar8 - iVar6) / 2 + iVar6;
        iVar5 = FUN_00b23450(param_1,iVar3 + iVar7 * 0x18);
        if (iVar5 == 0) {
          return iVar3 + iVar7 * 0x18;
        }
        if (iVar5 < 1) {
          iVar8 = iVar7 + -1;
        }
        else {
          iVar6 = iVar7 + 1;
        }
      } while (iVar6 <= iVar8);
    }
  }
LAB_00b24839:
  FUN_00b1f840("File not found");
  return 0;
}

