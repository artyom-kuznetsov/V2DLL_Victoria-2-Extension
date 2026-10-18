// FUN_004da790 @ 004da790 body=[[004da790, 004da7fc]]


void FUN_004da790(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int in_EDX;
  uint *unaff_ESI;
  
  iVar4 = 0;
  if ((*(char *)(param_1 + 0x131) != '\0') &&
     (iVar2 = *(int *)(*(int *)(in_EDX + 0x118) + *(int *)(param_1 + 0x134) * 4), iVar2 != 0)) {
    iVar4 = *(int *)(iVar2 + 0x24) / 1000;
  }
  FUN_004da850(param_1,unaff_ESI,param_2,0,param_3,iVar4 + 1);
  puVar5 = (uint *)FUN_004dab20();
  uVar3 = *puVar5;
  uVar1 = *unaff_ESI;
  *unaff_ESI = *unaff_ESI + uVar3;
  unaff_ESI[1] = unaff_ESI[1] + puVar5[1] + (uint)CARRY4(uVar1,uVar3);
  return;
}

