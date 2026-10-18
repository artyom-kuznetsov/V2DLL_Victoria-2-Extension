// FUN_00a20640 @ 00a20640 body=[[00a20640, 00a20695]]


void FUN_00a20640(undefined2 *param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined2 *puVar6;
  int *in_ECX;
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  piVar3 = (int *)(**(code **)(*in_ECX + 0x16c))();
  piVar4 = (int *)(**(code **)(*in_ECX + 0x16c))();
  iVar5 = (**(code **)(*piVar3 + 0x44))(local_c);
  uVar2 = *(undefined4 *)(iVar5 + 4);
  puVar6 = (undefined2 *)(**(code **)(*piVar4 + 0x44))(local_14);
  uVar1 = *puVar6;
  param_1[1] = (short)uVar2;
  *param_1 = uVar1;
  return;
}

