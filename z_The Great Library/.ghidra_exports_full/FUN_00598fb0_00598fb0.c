// FUN_00598fb0 @ 00598fb0 body=[[00598fb0, 005990ac]]


int * FUN_00598fb0(int *param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  undefined8 uVar3;
  int local_14;
  
  iVar1 = *(int *)(in_ECX + 0x70) - *(int *)(in_ECX + 0x6c) >> 2;
  *param_1 = 0;
  if (0 < iVar1) {
    local_14 = 0;
    if (0 < iVar1) {
      do {
        iVar1 = *(int *)(*(int *)(in_ECX + 0x6c) + local_14 * 4);
        iVar2 = *(int *)(iVar1 + 0x5c);
        if (((iVar2 != 5) && (iVar2 != 6)) && (iVar2 = FUN_00967f50(), iVar2 != 0)) {
          iVar2 = DAT_01258a94;
          if (*(uint *)(iVar1 + 0xc) < 0x1269) {
            iVar2 = DAT_01258a98;
          }
          if (iVar2 == 0) {
            iVar1 = 0;
          }
          else {
            iVar1 = FUN_009c1d40();
          }
          if ((*(int *)(iVar1 + 0x74) == 0) || (*(char *)(*(int *)(iVar1 + 0x74) + 0x164) == '\0'))
          {
            iVar1 = *(int *)(iVar1 + 0x40);
          }
          else {
            iVar1 = 0;
          }
          *param_1 = *param_1 + iVar1;
        }
        local_14 = local_14 + 1;
      } while (local_14 < *(int *)(in_ECX + 0x70) - *(int *)(in_ECX + 0x6c) >> 2);
    }
    iVar1 = (*(int *)(in_ECX + 0x70) - *(int *)(in_ECX + 0x6c) >> 2) * 1000;
    uVar3 = __allmul(*param_1,*param_1 >> 0x1f,1000,0);
    iVar1 = __alldiv(uVar3,iVar1,iVar1 >> 0x1f);
    *param_1 = iVar1;
  }
  return param_1;
}

