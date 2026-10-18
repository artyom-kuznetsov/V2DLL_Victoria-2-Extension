// FUN_0063f480 @ 0063f480 body=[[0063f480, 0063f788]]


int * FUN_0063f480(int *param_1)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  float fVar4;
  undefined4 local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b456a8;
  local_10 = ExceptionList;
  local_18 = *(int *)(in_ECX + 0x6b9bc);
  local_14 = *(int *)(in_ECX + 0x6b9c0);
  ExceptionList = &local_10;
  FUN_009eb500(param_1,0x3f48f5c3,(float)local_18 / (float)local_14,0x41000000,0x44960000);
  piVar2 = DAT_00f20c18;
  local_8 = 0;
  param_1[0xc1] = 0;
  iVar3 = DAT_00f177d4;
  param_1[0xc2] = in_ECX;
  param_1[0xd3] = 0x32;
  param_1[0xd4] = 1000;
  *(undefined2 *)(param_1 + 0xd5) = 0;
  *(undefined1 *)((int)param_1 + 0x356) = 0;
  param_1[0xd7] = iVar3;
  param_1[0xd8] = 0x101;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)FUN_00aae9af(4);
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)0x0;
      DAT_00f20c18 = piVar2;
    }
    else {
      *piVar2 = (int)&PTR_FUN_00e38b28;
      DAT_00f20c18 = piVar2;
    }
  }
  iVar3 = (**(code **)(*piVar2 + 4))();
  pcVar1 = *(code **)(*param_1 + 0x184);
  param_1[0xcd] = 0x43c80000;
  param_1[0xc0] = iVar3;
  param_1[0xce] = 0x43480000;
  param_1[0xd1] = 0x43a50000;
  param_1[0xd2] = 0x43a50000;
  param_1[0xbb] = 0x43a50000;
  param_1[0xcf] = param_1[0xcd];
  param_1[0xd0] = param_1[0xce];
  param_1[0xba] = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  param_1[0xbe] = -0x3f000000;
  local_14 = DAT_00f092fc;
  local_1c = 0;
  local_18 = 0;
  param_1[0xbf] = DAT_00f095b4;
  (*pcVar1)(&local_1c);
  (**(code **)(*param_1 + 0x180))(param_1 + 0xbd);
  (**(code **)(*param_1 + 0x17c))(param_1 + 0xba);
  iVar3 = DAT_0125870c;
  fVar4 = (float)(*(int *)(DAT_0125870c + 0x2ac0) + -0x50);
  param_1[0xc3] = (int)fVar4;
  param_1[0xc5] = (int)fVar4;
  param_1[0xc4] = (int)fVar4;
  iVar3 = *(int *)(iVar3 + 0x2abc);
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  param_1[0xc3] = (int)(float)iVar3;
  param_1[199] = 0;
  param_1[0xc6] = 0;
  param_1[200] = 0;
  local_14 = *(undefined4 *)(param_1[0xc2] + 0x6b9c0);
  param_1[0xcb] = *(int *)(param_1[0xc2] + 0x6b9bc);
  local_18 = *(undefined4 *)(param_1[0xc2] + 0x6b9bc);
  param_1[0xcc] = *(int *)(param_1[0xc2] + 0x6b9c0);
  (**(code **)(*param_1 + 0x16c))();
  (**(code **)(*(int *)param_1[0xc0] + 4))();
  DAT_00f095ac = (float)*(int *)(param_1[0xc2] + 0x6b9bc) / (float)*(int *)(param_1[0xc2] + 0x6b9c0)
  ;
  param_1[0xd6] = (int)DAT_00f095ac;
  ExceptionList = local_10;
  return param_1;
}

