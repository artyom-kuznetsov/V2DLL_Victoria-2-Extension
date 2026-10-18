// FUN_004a50e0 @ 004a50e0  (requested 004A50E0, first bytes: 55 8B EC 51 8B 48 6C 83)


bool FUN_004a50e0(void)

{
  int in_EAX;
  int iVar1;
  undefined8 uVar2;
  int local_8;
  
  if (*(int *)(*(int *)(in_EAX + 0x6c) + 0x68) == 0) {
    return true;
  }
  local_8 = 0;
  iVar1 = FUN_004d34b0(&local_8);
  if (iVar1 != 0) {
    uVar2 = __allmul(local_8 * 1000,local_8 * 1000 >> 0x1f,1000,0);
    iVar1 = __alldiv(uVar2,iVar1 * 1000,iVar1 * 1000 >> 0x1f);
    return *(int *)(*(int *)(DAT_012586dc + 0x10) + 0x24) < iVar1;
  }
  return *(int *)(*(int *)(DAT_012586dc + 0x10) + 0x24) < 1000;
}

