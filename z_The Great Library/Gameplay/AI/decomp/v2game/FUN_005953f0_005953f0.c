// FUN_005953f0 @ 005953f0 body=[[005953f0, 00595497]]


bool FUN_005953f0(void)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int *in_ECX;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  
  piVar6 = (int *)in_ECX[8];
  iVar4 = 0;
  iVar8 = 0;
  if (piVar6 != (int *)0x0) {
    do {
      iVar7 = *piVar6;
      piVar6 = (int *)piVar6[2];
      if (iVar7 == 0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5 = (undefined4 *)(iVar7 + 0x38);
      }
      piVar1 = (int *)*puVar5;
      while (piVar1 != (int *)0x0) {
        iVar7 = *piVar1;
        iVar2 = *(int *)(iVar7 + 0x74);
        piVar1 = (int *)piVar1[2];
        if ((iVar2 == 0) || (*(char *)(iVar2 + 0x164) == '\0')) {
          iVar7 = *(int *)(iVar7 + 0x40);
        }
        else {
          iVar7 = 0;
        }
        iVar4 = iVar4 + iVar7;
        iVar8 = iVar8 + 1;
      }
    } while (piVar6 != (int *)0x0);
    if (iVar8 != 0) {
      uVar9 = __allmul(iVar4,iVar4 >> 0x1f,1000,0);
      iVar4 = __alldiv(uVar9,iVar8 * 1000,iVar8 * 1000 >> 0x1f);
    }
  }
  if (iVar4 < DAT_0125f5b8) {
    return true;
  }
  cVar3 = (**(code **)(*in_ECX + 0x58))();
  return cVar3 == '\0';
}

