// FUN_00585a20 @ 00585a20 body=[[00585a20, 00585ade]]


undefined4 * FUN_00585a20(undefined4 *param_1,int param_2,undefined1 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4619b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = CCommand::vftable;
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  local_8 = 0;
  param_1[0xb] = 0x8e3;
  param_1[0xc] = 0x8e3;
  *(undefined2 *)(param_1 + 0xd) = 0xffff;
  FUN_00409350(&DAT_00ded94d,0);
  iVar3 = 0;
  param_1[9] = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined2 *)((int)param_1 + 0x36) = 0;
  param_1[0xe] = 0;
  *param_1 = CInterveneWar::vftable;
  param_1[0xf] = *unaff_EDI;
  iVar2 = DAT_012588e8;
  param_1[0x10] = unaff_EDI[1];
  for (piVar1 = *(int **)(iVar2 + 0xb3c); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    if (param_2 == *piVar1) goto LAB_00585ac2;
    iVar3 = iVar3 + 1;
  }
  iVar3 = -1;
LAB_00585ac2:
  *(undefined1 *)(param_1 + 0x12) = param_3;
  param_1[0x11] = iVar3;
  ExceptionList = local_10;
  return param_1;
}

