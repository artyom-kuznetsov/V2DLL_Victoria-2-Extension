// FUN_004a4b10 @ 004a4b10 body=[[004a4b10, 004a4c9a]]


uint FUN_004a4b10(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int local_14;
  
  iVar5 = *(int *)(param_1 + 0x6c);
  uVar1 = *(uint *)(iVar5 + 0x58);
  iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar5 + 0x5c) * 4);
  uVar6 = *(uint *)(param_1 + 0x7c);
  switch(uVar6) {
  case 0:
  case 1:
    FUN_004da720(*(undefined4 *)(param_1 + 0x70),iVar2,1,param_1 + 8);
    cVar4 = FUN_0043a720();
    if (((cVar4 != '\0') &&
        (cVar4 = FUN_004da6f0(*(undefined4 *)(param_1 + 0x70),param_1 + 8), cVar4 != '\0')) &&
       (*(char *)(iVar2 + 0xb00) != '\0')) {
      return 1;
    }
    break;
  case 2:
    for (iVar5 = *(int *)(param_1 + 0x78); iVar5 != 0; iVar5 = iVar5 + -1) {
    }
    FUN_004dab20();
    if (((local_14 <= *(int *)(param_1 + 100)) &&
        ((local_14 < *(int *)(param_1 + 100) || (uVar1 <= *(uint *)(param_1 + 0x60))))) &&
       (*(char *)(iVar2 + 0xb10) != '\0')) {
      return 1;
    }
    break;
  case 3:
    iVar3 = *(int *)(iVar5 + 0x60);
    for (iVar5 = *(int *)(param_1 + 0x78); iVar5 != 0; iVar5 = iVar5 + -1) {
      iVar3 = *(int *)(iVar3 + 0x224);
    }
    uVar6 = 0;
    if ((((*(char *)(iVar2 + 0xb08) == '\0') || (uVar6 = FUN_0047e560(), (char)uVar6 == '\0')) ||
        (uVar6 = FUN_004f3510(), (char)uVar6 == '\0')) || (*(int *)(iVar3 + 0x17c) != 0))
    goto switchD_004a4b43_caseD_4;
    FUN_004da800(iVar2,1,param_1 + 8);
    cVar4 = FUN_0043a720();
    if ((cVar4 != '\0') &&
       (cVar4 = FUN_004da6f0(*(undefined4 *)(iVar3 + 0x18),param_1 + 8), cVar4 != '\0')) {
      return 1;
    }
    break;
  default:
switchD_004a4b43_caseD_4:
    return uVar6 & 0xffffff00;
  }
  return 0;
}

