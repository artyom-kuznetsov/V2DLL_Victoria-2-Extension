// FUN_0059b4e0 @ 0059b4e0

int * FUN_0059b4e0(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  int iVar4;
  undefined8 uVar5;
  int local_c;
  int local_8;
  
  FUN_00401000(0x3f000000);
  iVar2 = FUN_00b31c00();
  *param_1 = iVar2;
  local_c = *(int *)(*(int *)(in_ECX + 0x1c) + 0x10);
  local_8 = 0;
  if (local_c == in_ECX) {
    local_c = *(int *)(*(int *)(in_ECX + 0x1c) + 0x14);
  }
  uVar3 = 0;
  do {
    uVar1 = uVar3 & 1;
    uVar3 = uVar3 + 1;
    iVar4 = ((uint)(uVar1 == 0) * 2 + -1) * ((int)uVar3 / 2);
    iVar2 = *(int *)(in_ECX + 0xac + iVar4 * 4);
    if (iVar2 != 0) {
      iVar4 = FUN_0059b610(local_c,iVar4 + 0x10);
      if (iVar4 != 0) {
        if ((*(int *)(iVar2 + 0x74) == 0) || (*(char *)(*(int *)(iVar2 + 0x74) + 0x164) == '\0')) {
          iVar2 = *(int *)(iVar2 + 0x40);
        }
        else {
          iVar2 = 0;
        }
        *param_1 = *param_1 + iVar2;
        local_8 = local_8 + 1;
      }
    }
  } while ((int)uVar3 < 0x1e);
  if (local_8 != 0) {
    uVar5 = __allmul(*param_1,*param_1 >> 0x1f,1000,0);
    iVar2 = __alldiv(uVar5,local_8 * 1000,local_8 * 1000 >> 0x1f);
    *param_1 = iVar2;
    return param_1;
  }
  return param_1;
}


