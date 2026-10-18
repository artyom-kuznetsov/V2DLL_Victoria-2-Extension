// FUN_004d34b0 @ 004d34b0 body=[[004d34b0, 004d3551]]


int FUN_004d34b0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  int local_8;
  
  if (*(int *)(in_ECX + 0x68) == 0) {
    *param_1 = 0;
    return 0;
  }
  iVar4 = 0;
  local_8 = 0;
  iVar1 = *(int *)(in_ECX + 0x60);
joined_r0x004d34ca:
  iVar3 = iVar1;
  if (iVar3 == 0) {
    *param_1 = iVar4;
    return local_8;
  }
  iVar1 = *(int *)(iVar3 + 0x224);
  iVar5 = *(int *)(iVar3 + 0x20);
  if (*(int *)(iVar3 + 0x17c) == 0) goto LAB_004d34ec;
  iVar5 = iVar5 + 1;
  goto LAB_004d3502;
LAB_004d34ec:
  if (((0 < iVar5) && (*(int *)(iVar3 + 0x184) < 0xb)) && (*(char *)(iVar3 + 0x188) == '\0')) {
LAB_004d3502:
    iVar2 = *(int *)(*(int *)(iVar3 + 0x18) + 300);
    if (((iVar2 != 0) && (DAT_01258734 != 0)) && (iVar2 != DAT_01258734 + 0x10)) {
      local_8 = local_8 + *(int *)(iVar2 + 0x128) * iVar5;
      iVar4 = iVar4 + *(int *)(iVar3 + 0x128);
    }
  }
  goto joined_r0x004d34ca;
}

