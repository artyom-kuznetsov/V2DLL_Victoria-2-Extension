// FUN_004d35f0 @ 004d35f0 body=[[004d35f0, 004d367d]]


undefined4 * FUN_004d35f0(undefined4 *param_1)

{
  int in_EAX;
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  int local_8;
  
  piVar3 = *(int **)(in_EAX + 0x48);
  local_8 = 0;
  while ((*(int **)(in_EAX + 0x48) <= piVar3 && (piVar3 < *(int **)(in_EAX + 0x4c)))) {
    iVar2 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar3 * 4);
    piVar3 = piVar3 + 1;
    if (*(int *)(iVar2 + 300) == *(int *)(iVar2 + 0x134)) {
      local_8 = local_8 + 1;
    }
  }
  iVar2 = (*(int *)(in_EAX + 0x4c) - *(int *)(in_EAX + 0x48) >> 2) * 1000;
  uVar4 = __allmul(local_8 * 1000,local_8 * 1000 >> 0x1f,1000,0);
  uVar1 = __alldiv(uVar4,iVar2,iVar2 >> 0x1f);
  *param_1 = uVar1;
  return param_1;
}

