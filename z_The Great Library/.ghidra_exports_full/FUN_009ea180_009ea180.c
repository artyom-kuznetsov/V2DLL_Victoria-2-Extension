// FUN_009ea180 @ 009ea180 body=[[009ea180, 009ea208]]


undefined4 FUN_009ea180(uint param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_1 == 0xffffffff) {
    return 0;
  }
  iVar2 = *(int *)(&DAT_00fc0c88 + param_1 * 4);
  piVar1 = (int *)(&DAT_00f20c60)[iVar2];
  puVar3 = &DAT_00f20c60 + iVar2;
  if ((piVar1 != (int *)0x0) && (-1 < iVar2)) {
    if ((&DAT_00f21460)[iVar2] == 0) {
      (**(code **)(*piVar1 + 0x24))(piVar1,&param_1);
      if ((param_1 & 5) != 0) {
        return 1;
      }
    }
    else {
      iVar2 = 0;
      do {
        (**(code **)(*(int *)*puVar3 + 0x24))((int *)*puVar3,&param_1);
        if ((param_1 & 5) != 0) {
          return 1;
        }
        iVar2 = iVar2 + 1;
        puVar3 = puVar3 + 0x200;
      } while (iVar2 < 0x40);
    }
    return 0;
  }
  return 0;
}

